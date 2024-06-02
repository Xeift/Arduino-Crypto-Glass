#include <WiFi.h>
#include <HTTPClient.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <ArduinoJson.h>


#define SCREEN_WIDTH 128 // OLED display width
#define SCREEN_HEIGHT 64 // OLED display height
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET); // Declaration for SSD1306

const char* ssid     = "Xeift";
const char* password = "13241324";  

void setup() {
    Serial.begin(9600);
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    delay(2000);
    display.clearDisplay();
    display.setTextColor(WHITE);

    // Connect to Wi-Fi
    display.setTextSize(2);
    display.setCursor(0, 0);
    display.print("Connecting to: ");
    display.println(ssid);
    display.display(); 
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
        display.print(".");
        display.display(); 
    }

    display.clearDisplay();
    display.setTextSize(1);
    display.setCursor(0, 0);
    display.print("Connected, ");
    display.println("IP: ");
    display.println(WiFi.localIP());
    display.print("Ready to display =w=");
    display.display(); 
}

void loop() {
    String btcPrice = sendGetRequestAndParsePrice("BTC");
    delay(3000);

    String ethPrice = sendGetRequestAndParsePrice("ETH");
    delay(3000);

    String bnbPrice = sendGetRequestAndParsePrice("BNB");
    delay(3000);

    display.clearDisplay();
    display.setTextSize(2);
    display.setCursor(0, 0);
    display.print("BTC:" + btcPrice + "\n");
    display.print("ETH:" + ethPrice + "\n");
    display.print("BNB:" + bnbPrice + "\n");
    display.display(); 
}

String sendGetRequestAndParsePrice(String tokenName) {
    HTTPClient http;
    http.begin("https://min-api.cryptocompare.com/data/generateAvg?fsym=" + tokenName + "&tsym=USDT&e=binance"); 
    int httpCode = http.GET();                                       

    if (httpCode > 0) { 
        String payload = http.getString();
        http.end();
        DynamicJsonDocument doc(1024);
        deserializeJson(doc, payload);
        double price = doc["RAW"]["PRICE"];
        int roundedPrice = (int) round(price);
        return String(roundedPrice);
    }
    else {
        http.end();
        return "-1.0";
    }
}

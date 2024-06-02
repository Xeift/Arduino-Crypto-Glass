# Arduino-Crypto-Glass
An projection glass that display realtime crypto price using Seeed Studio XIAO ESP32C3.

# Credits
This is not an original project. The main inspiration for this project comes from [Alain's Projects](https://www.instructables.com/Arduino-Data-Glasses-for-My-Multimeter/). However, I change some part, e.g. I use Fresnel lens instead of magnifying glass; use Seeed Studio XIAO ESP32C3 instead of Arduino Pro Micro. 
m

# Hardware and Tools
|            Tool            |       Price       |   Link to the shop   |
| -------------------------- | ----------------- | -------------------- |
| Seeed Studio XIAO ESP32C3 |      4.99 USD      | [link](https://www.seeedstudio.com/Seeed-XIAO-ESP32C3-p-5431.html) |
| 0.96 inch OLED display    | 196 TWD (6.53 USD) | [link](https://shopee.tw/%E3%80%90%E5%82%91%E6%A3%AE%E5%89%B5%E5%B7%A5%E3%80%910.96%E5%90%8B-OLED-128x64-%E4%BD%8E%E8%80%97%E9%9B%BB-%E9%AB%98%E8%A7%A3%E6%9E%90-%E5%8F%AF%E9%A1%AF%E7%A4%BA%E9%BB%9E%E9%99%A3%E5%9C%96-Arduino-%E9%80%81%E7%AF%84%E4%BE%8B%E7%A8%8B%E5%BC%8F-%E5%A4%A7%E5%8B%9DLCD-i.20917936.390571551?sp_atk=32cd96d6-f768-4b44-a4dc-7f2c103764c7&xptdk=32cd96d6-f768-4b44-a4dc-7f2c103764c7) |
| 45mm * 45 mm * 2mm mirror |  50 TWD (1.66 USD) | [link](https://shopee.tw/HSIN-KO-%E5%8F%B0%E7%81%A3%E8%A3%BD-1.1mm-1.3mm-2mm-%E9%8A%80%E9%8F%A1-DIY-%E5%B9%B3%E9%9D%A2%E9%8F%A1-%E6%96%B9%E5%BD%A2-%E6%89%8B%E5%B7%A5%E8%97%9D-%E5%B0%8F%E6%96%B9%E9%8F%A1-%E8%A3%B8%E9%8F%A1%E7%89%87(2pcs%E8%A3%9D)-i.13542007.22770131123) |
| 10cm focal Fresnel lens   | 169 TWD (5.63 USD) | [link](https://shopee.tw/%F0%9F%8C%B8%E6%97%A5%E6%9C%AC%E8%A3%BD%F0%9F%8C%B8%E3%80%90I.L.K.%E3%80%913.5x-80x43mm-%E8%8F%B2%E6%B6%85%E7%88%BE%E8%B6%85%E8%BC%95%E8%96%84%E6%94%9C%E5%B8%B6%E5%9E%8B%E6%94%BE%E5%A4%A7%E9%8F%A1-%E5%90%8D%E7%89%87%E5%B0%BA%E5%AF%B8-018-AN-%E7%86%B1%E9%8A%B7%E4%BA%BA%E6%B0%A3%E5%B0%8F%E7%89%A9-i.6108602.576784496) |
| glass cutter              | 130 TWD (4.33 USD) | [link](https://www.seeedstudio.com/Seeed-XIAO-ESP32C3-p-5431.html](https://shopee.tw/%E3%80%8E%E6%A8%82%E8%B6%A3%E7%94%9F%E6%B4%BB%E3%80%8F%E6%97%A5%E5%BC%8F%E7%8E%BB%E7%92%83%E5%88%80-HTJ3-%E7%8E%BB%E7%92%83%E5%88%80-%E7%8E%BB%E7%92%83%E5%88%87%E5%89%B2%E5%88%80-%E7%8E%BB%E7%92%83%E5%88%80-%E5%A4%9A%E5%8A%9F%E8%83%BD-%E5%88%87%E5%89%B2%E5%B7%A5%E5%85%B7-%E9%87%91%E5%89%9B%E7%9F%B3%E7%8E%BB%E7%92%83%E5%88%80-%E9%87%91%E5%89%9B%E7%9F%B3-%E5%9C%93%E8%A6%8F%E5%88%80-i.481628583.12809748373)) |
|           Total           |694.2 TWD (23.14 USD)|  |

# Board
I use [Seeed Studio XIAO ESP32C3](https://wiki.seeedstudio.com/XIAO_ESP32C3_Getting_Started/). It's cheaper than Arduino nano/mini pro, have built-in bluetooth + Wi-Fi module and it'd super small. 

# Display
I use 0.96 inch oled display.

# Mirror
I use 45mm * 45 mm * 2mm mirror.

# Lens
I use Fresnel lens with 10cm focal.

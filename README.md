# FLORA_ESP32_SINGLE

*********************************************************************
如果沒有要變更程式的功能，那只要去修改config.h 即可
*********************************************************************


這個程式碼是由Sven Henkel 的code，我只是多加了一點中文註解在config.h 裡面，
他主要的功能是:

1. 先連線上local 的wifi AP
2. 定期的用BLE 跟小米的花花草草感測器拉資料出來
3. 將取得的資料用MQTT 通訊模式傳到ADAFRUIT.IO 裡面


原作者Sven Henkel 把會變動的參數都放在config.h 裡面，簡化要改動的程序
幾個修改原始程式碼要注意的地方:



1. 要先取得花花草草感測器 的MAC ，這個可以用安卓手機的藍芽工具去取得
2. 要先有ADAFRUIT.IO 的帳號，並且要建立相對應的資料目錄
3. 要有一個連的上網路的WIFI AP


需要的硬體如下

1. 一隻花花草草感測器
2. 一個標準的ESP32 開發板

使用程序

1. 取得花花草草感測器MAC ADDRESS
2. 取得場域的WIFI SSID 跟 PASSWD
3. 去ADAFRUIT.IO  建立帳號，並且建立相對應的目錄結構
4. 修改config.h ，然後下載程式到ESP32 開發板
5. 就可以去ADAFRUIT.IO 收資料了~~














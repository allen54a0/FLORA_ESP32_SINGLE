# FLORA_ESP32_SINGLE

這個程式碼是由Sven Henkel 的code 進行修改的，他主要的功能是

1. 先連線上local 的wifi AP
2. 定期的用BLE 跟小米的花花草草感測器拉資料出來
3. 將取得的資料用MQTT 通訊模式傳到ADAFRUIT.IO 裡面


原作者把會變動的參數都放在config.h 裡面，所以簡化要改動的程序
幾個修改原始程式碼要注意的地方


1. 要有一個連的上網路的WIFI AP
2. 要先取得花花草草感測器 的MAC ，這個可以用安卓手機的藍芽工具去取得
3. 要先有ADAFRUIT.IO 的帳號，並且要建立相對應的資料目錄






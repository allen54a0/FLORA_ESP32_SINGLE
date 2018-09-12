
//這個是花花草草感測器的 MAC ADDRESS, 要使用手機工具來讀取
#define FLORA_ADDR "C4:7C:8D:64:B0:48"


// 這下面是ADA FRUIT 所提供的io.adafruit.com 的API 目錄
#define MQTT_BASE "allen54a0/feeds/"
#define MQTT_DEV_BASE MQTT_BASE  "/"

// 這些是使用者自己自在io.adafruit.com所建構的目錄，用來收集花花草草感測器的資料
#define MQTT_TEMPERATURE   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-temperature"
#define MQTT_MOISTURE   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-moisture"
#define MQTT_LIGHT   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-light"
#define MQTT_CONDUCTIVITY   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-conductivity"
#define MQTT_BATTERY   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-battery"

 
//這是設定ESP32 多久的時間要睡覺 60ll 是 60 + 兩個小寫的LL 不要搞錯了
#define SLEEP_DURATION 60ll // duration of sleep between flora connection attempts in seconds (must be constant with "ll" suffix)  12011 = 60 *2(s) +LL

// 在進入睡眠之前，要等多久，好讓資料可以傳出去
#define SLEEP_WAIT 30         // time until esp32 is put into deep sleep mode. must be sufficient to connect to wlan, connect to xiaomi flora device & push measurement data to MQTT

// 喚醒多少次之後，要讀一次花花草草感測器的電池電壓
#define BATTERY_INTERVAL 12   // Retrieve battery level every n wakeups


////這裡是自己的WIFI AP SSID 跟密碼
const char* wifi_ssid     = "ssid";
const char* wifi_password = "password";
 


//這是 io.adafruit 的 MQTT Server，也可以改成自己的MQTT Server
const char* mqtt_server = "io.adafruit.com";  

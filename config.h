//This is ADAFRUIT HTTP KEY
//https://io.adafruit.com/api/v2/allen54a0/feeds?X-AIO-Key=478d23a8118842f1a8bf4741a648463b


//#define FLORA_ADDR "11:22:33:44:55:66"
#define FLORA_ADDR "C4:7C:8D:64:B0:48"

#define MQTT_BASE "allen54a0/feeds/"
//#define MQTT_DEV_BASE MQTT_BASE FLORA_ADDR "/"
#define MQTT_DEV_BASE MQTT_BASE  "/"

#define MQTT_TEMPERATURE   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-temperature"
#define MQTT_MOISTURE   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-moisture"
#define MQTT_LIGHT   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-light"
#define MQTT_CONDUCTIVITY   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-conductivity"
#define MQTT_BATTERY   "allen54a0/feeds/flora-slash-c4-7c-8d-64-b0-48-slash-battery"

 

#define SLEEP_DURATION 60ll // duration of sleep between flora connection attempts in seconds (must be constant with "ll" suffix)  12011 = 60 *2(s) +LL
#define SLEEP_WAIT 30         // time until esp32 is put into deep sleep mode. must be sufficient to connect to wlan, connect to xiaomi flora device & push measurement data to MQTT

#define BATTERY_INTERVAL 12   // Retrieve battery level every n wakeups


const char* wifi_ssid     = "SAPIDO_GR_1222_cb1e0f";
const char* wifi_password = "20100918";
//const char* wifi_ssid     = "ssid";
//const char* wifi_password = "password";

const char* mqtt_server = "io.adafruit.com";  //This is Hanjen MQTT Server

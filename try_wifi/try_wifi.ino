#include<ESP8266WiFi.h>
#include<time.h>

const char* ssid = "merun";
const char* password = "omg they kill kenny";

int timezone = 7 * 3600;
int dst = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Start");

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(250);
    Serial.println("nope");
  }
  Serial.println("HELL YEAHHHHHHH");
  configTime(timezone, dst, "pool.ntp.org", "time.nist.gov");
  time_t now = time(nullptr);
  struct tm* p_tm = localtime(&now);
}

void loop() {
  // put your main code here, to run repeatedly:

}

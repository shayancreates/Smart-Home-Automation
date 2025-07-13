#include <ESP8266WiFi.h>
#include <ThingESP.h>

ThingESP8266 thing("laurasona", "HomeAutomation", "laurasona");

int LIGHT1 = D1;
int LIGHT2 = D2;
int LIGHT3 = D3;
int LIGHT4 = D4;
int LIGHT5 = D5;
int LIGHT6 = D6;
int LIGHT7 = D7;
int LIGHT8 = D8;
unsigned long previousMillis = 0;
const long INTERVAL = 6000;  

void setup()
{
  Serial.begin(115200);
  pinMode(LIGHT1, OUTPUT);
  pinMode(LIGHT2, OUTPUT);
  pinMode(LIGHT3, OUTPUT);
  pinMode(LIGHT4, OUTPUT);
  pinMode(LIGHT5, OUTPUT);
  pinMode(LIGHT6, OUTPUT);
  pinMode(LIGHT7, OUTPUT);
  pinMode(LIGHT8, OUTPUT);
  thing.SetWiFi("realme 14 Pro lite 5G", "surya bhai");
  thing.initDevice();
}


String HandleResponse(String query)
{
  if (query == "light1 on") {
    digitalWrite(LIGHT1, 0);
    return "Done: Light1 Turned ON";
  }

  else if (query == "light1 off") {
    digitalWrite(LIGHT1, 1);
    return "Done: Light1 Turned OFF";
  }

  if (query == "light2 on") {
    digitalWrite(LIGHT2, 0);
    return "Done: Light2 Turned ON";
  }

  else if (query == "light2 off") {
    digitalWrite(LIGHT2, 1);
    return "Done: Light2 Turned OFF";
  }

    if (query == "light3 on") {
    digitalWrite(LIGHT3, 0);
    return "Done: Light3 Turned ON";
  }

  else if (query == "light3 off") {
    digitalWrite(LIGHT3, 1);
    return "Done: Light3 Turned OFF";
  }

    if (query == "light4 on") {
    digitalWrite(LIGHT4, 0);
    return "Done: Light4 Turned ON";
  }

  else if (query == "light4 off") {
    digitalWrite(LIGHT4, 1);
    return "Done: Light4 Turned OFF";
  }
  if (query == "light5 on") {
    digitalWrite(LIGHT5, 0);
    return "Done: Light5 Turned ON";
  }

  else if (query == "light5 off") {
    digitalWrite(LIGHT5, 1);
    return "Done: Light5 Turned OFF";
  }
  if (query == "light6 on") {
    digitalWrite(LIGHT6, 0);
    return "Done: Light6 Turned ON";
  }

  else if (query == "light6 off") {
    digitalWrite(LIGHT6, 1);
    return "Done: Light6 Turned OFF";
  }
  if (query == "light7 on") {
    digitalWrite(LIGHT7, 0);
    return "Done: Light7 Turned ON";
  }

  else if (query == "light7 off") {
    digitalWrite(LIGHT7, 1);
    return "Done: Light7 Turned OFF";
  }
  if (query == "light8 on") {
    digitalWrite(LIGHT8, 0);
    return "Done: Light8 Turned ON";
  }

  else if (query == "light8 off") {
    digitalWrite(LIGHT8, 1);
    return "Done: Light8 Turned OFF";
  }

  //else if (query == "light status")
   // return digitalRead(LIGHT) ? "LIGHT is OFF" : "LIGHT is ON";
  else return "Your query was invalid Surya....";


}
void loop()
{
  thing.Handle();

}

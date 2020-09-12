#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <TelegramBot.h>

const int trigPin = 9; //trigPin is connected to pin 9
const int echoPin = 10; //echoPin is connected to pin 10

// defines variables
  
long duration;
int distance;

const char* ssid = "<Your WiFi Name or SSID>"; //Enter the WiFi name where you need to connect
const char* password = "<Your WiFi Password>"; //Enter the password as well

const char BotToken[] = "<Enter the token which you got using bot father>"; //Bot token which is the token used to send alert message in telegram

WiFiClientSecure net_ssl;
TelegramBot bot (BotToken, net_ssl);

void setup()
{

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);  // Sets the echoPin as an Input

  Serial.begin(115200);
  while (!Serial) {} //Start running when the serial is open
  delay(3000);
  Serial.print("Connecting WiFi.");
  Serial.println(ssid);
  while (WiFi.begin(ssid, password) != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println("");
  Serial.println("WiFi connected");
  bot.begin(); // Begins the bot in telegram
}
void loop() 
{  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  distance= duration*0.034/2; // Calculating the distance
  
  //Checking the distance is less than 6 cm, if it so, then alert message will send to the telegram channel
  
  if (distance<6) 
  {  
    bot.sendMessage(m.chat_id, "Dustbin is full and it needs maintance"); 
  }  
 
}

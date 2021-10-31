#include<TinyGPS++.h> //this header is used for GPS Module
#include<LiquidCrystal.h> //this header is used for LCD display
LiquidCrystal lcd(12,11,5,3,2,1) //5,3,2,1 data pin

double longitude;
double latitude;

int temp=0;
int swithcher=8; //vibration mode
int a=1;
int c=0;
int GPSaud=9600; //braod rate of GPS Module(according to our module it will be changed)

TinyGPSPlus gps;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

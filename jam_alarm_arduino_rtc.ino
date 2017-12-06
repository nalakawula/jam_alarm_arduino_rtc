#include <Wire.h>
#include <RTClib.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD I2C 16 x 4
DS1307 RTC;

int P1 = 6; // tombol SET
int P2 = 7; //  +
int P3 = 8; //  -
int P4 = 9; // On/Off alarm

#define output_1 13 // template output pertama
#define output_2 10 // template output kedua

int jam;
int menit;
int tahun;
int bulan;
int hari;
int menu = 0;
int setAll = 0;

uint8_t alarmHours = 0, alarmMinutes = 0;


void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.createChar(0, customChar);
  lcd.backlight();
  lcd.clear();

  pinMode(P1, INPUT_PULLUP); // https://www.arduino.cc/en/Tutorial/InputPullupSerial
  pinMode(P2, INPUT_PULLUP);
  pinMode(P3, INPUT_PULLUP);
  pinMode(P4, INPUT_PULLUP);
  pinMode(output_1, OUTPUT);
  pinMode(output_2, OUTPUT); 
  //
  Serial.begin(9600);
  Wire.begin();
  RTC.begin();

  if (! RTC.isrunning()) {
    Serial.println("RTC is NOT running!");
    // Set the date and time at compile time
    RTC.adjust(DateTime(__DATE__, __TIME__));
  }
  // RTC.adjust(DateTime(__DATE__, __TIME__)); //removing "//" to adjust the time
  // The default display shows the date and time
  
  int menu = 0;

}

void loop() {
  // put your main code here, to run repeatedly:

}

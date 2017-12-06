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


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

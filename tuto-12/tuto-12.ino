#define COL_1 2 // COL_1 => PIN No 13 => PIN 2
#define COL_2 3 // COL_2 => PIN No 3  => PIN 3
#define COL_3 4 // COL_3 => PIN No 4  => PIN 4
#define COL_4 5 // COL_4 => PIN No 10 => PIN 5
#define COL_5 6 // COL_5 => PIN No 6  => PIN 6
#define COL_6 7 // COL_6 => PIN No 11 => PIN 7
#define COL_7 8 // COL_7 => PIN No 15 => PIN 8
#define COL_8 9 // COL_8 => PIN No 16 => PIN 9

#define ROW_1 A0 // ROW_1 => PIN No 9  => PIN A0
#define ROW_2 10 // ROW_2 => PIN No 14 => PIN 10
#define ROW_3 11 // ROW_3 => PIN No 8  => PIN 11
#define ROW_4 12 // ROW_4 => PIN No 12 => PIN 12
#define ROW_5 13 // ROW_5 => PIN No 1  => PIN 13
#define ROW_6 A1 // ROW_6 => PIN No 7  => PIN A1
#define ROW_7 A2 // ROW_7 => PIN No 2  => PIN A2
#define ROW_8 A3 // ROW_8 => PIN No 3  => PIN A3

const byte rows[] = {
  ROW_1,ROW_2,ROW_3,ROW_4,ROW_5,ROW_6,ROW_7,ROW_8
};

byte smile[8] =   {0x3C,0x42,0xA5,0x81,0xA5,0x99,0x42,0x3C};
byte neutral[8] = {0x3C,0x42,0xA5,0x81,0xBD,0x81,0x42,0x3C};
byte sad[8] =     {0x3C,0x42,0xA5,0x81,0x99,0xA5,0x42,0x3C};

byte car1[8]= {0x00,0x00,0x00,0x00,0x18,0x3C,0x18,0x3C};
byte car2[8]= {0x00,0x00,0x00,0x18,0x3C,0x18,0x3C,0x00};
byte car3[8]= {0x00,0x00,0x18,0x3C,0x18,0x3C,0x00,0x00};
byte car4[8]= {0x00,0x18,0x3C,0x18,0x3C,0x00,0x00,0x00};
byte car5[8]= {0x18,0x3C,0x18,0x3C,0x00,0x00,0x00,0x00};
byte car6[8]= {0x3C,0x18,0x3C,0x00,0x00,0x00,0x00,0x18};
byte car7[8]= {0x18,0x3C,0x00,0x00,0x00,0x00,0x18,0x3C};
byte car8[8]= {0x3C,0x00,0x00,0x00,0x00,0x18,0x3C,0x18};

float timeCount = 0;

void setup() {
  for (byte i = 2; i <= 13; i++)
    pinMode(i, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
}

void loop() {

  delay(5);

  timeCount += 1;
  
  if (timeCount <  20) {
    drawScreen(smile);
  } else if (timeCount <  40) {
    drawScreen(neutral);
  } else if (timeCount <  60) {
    drawScreen(sad);
  } else if (timeCount <  80) {
    drawScreen(neutral);
  } else if (timeCount <  100) {
    drawScreen(smile);
  } else if (timeCount <  120) {
    drawScreen(neutral);
  } else {
    timeCount = 0;
  }
}

void drawScreen(byte t[]) {
  for (byte i = 0; i < 8; i++) {
    drawColumns(t[i]);
    digitalWrite(rows[i], HIGH);
    delay(2);
    digitalWrite(rows[i], LOW);
  }
}

void drawColumns(byte b) {
  digitalWrite(COL_1, (~b>>0) & 0x01);
  digitalWrite(COL_2, (~b>>1) & 0x01);
  digitalWrite(COL_3, (~b>>2) & 0x01);
  digitalWrite(COL_4, (~b>>3) & 0x01);
  digitalWrite(COL_5, (~b>>4) & 0x01);
  digitalWrite(COL_6, (~b>>5) & 0x01);
  digitalWrite(COL_7, (~b>>6) & 0x01);
  digitalWrite(COL_8, (~b>>7) & 0x01);
}

#include "SevenSegmentDisplay.h"

SevenSegmentDisplay display;
int buttonPin = 8;

int previousState = HIGH;


void setup() {
  Serial.begin(9600);

  pinMode(buttonPin,INPUT_PULLUP);

  for (int i = 0; i<7;i++){
    pinMode(i,OUTPUT);
  }
  for (int i = 8; i<12;i++){pinMode(i,INPUT);}
}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState = digitalRead(buttonPin);
     /*
    bool A = (i & 0b1000) != 0;
    bool B = (i & 0b0100) != 0;
    bool C = (i & 0b0010) != 0;
    bool D = (i & 0b0001) != 0;

    bool a = display.segmentA(A, B, C, D);
    bool b = display.segmentB(A, B, C, D);
    bool c = display.segmentC(A, B, C, D);
    bool d = display.segmentD(A, B, C, D);
    bool e = display.segmentE(A, B, C, D);
    bool f = display.segmentF(A, B, C, D);
    bool g = display.segmentG(A, B, C, D);

    Serial.print("Displaying number: ");
    Serial.println(i);
    Serial.println(String((int)A) + " " +
                  String((int)B) + " " +
                  String((int)C) + " " +
                  String((int)D));   
    display.seven_segment_display(a, b, c, d, e, f, g);    
    previousState = buttonState;
    delay(100);  */
    int A = digitalRead(8);
    int B = digitalRead(9);
    int C = digitalRead(10);
    int D = digitalRead(11);
    Serial.print(A);
}
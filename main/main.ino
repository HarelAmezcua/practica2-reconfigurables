#include "SevenSegmentDisplay.h"

SevenSegmentDisplay display;

int previousState = HIGH;


void setup() {
  Serial.begin(9600);  

  for (int i = 0; i<7;i++){ pinMode(i,OUTPUT); }
  for (int i = 8; i<12;i++){pinMode(i,INPUT_PULLUP);}
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {    
    int A_aux = digitalRead(8);
    int B_aux = digitalRead(9);
    int C_aux = digitalRead(10);
    int D_aux = digitalRead(11);    

    bool A = A_aux;
    bool B = B_aux;
    bool C = C_aux;
    bool D = D_aux;

    bool a = display.segmentA(A, B, C, D);
    bool b = display.segmentB(A, B, C, D);
    bool c = display.segmentC(A, B, C, D);
    bool d = display.segmentD(A, B, C, D);
    bool e = display.segmentE(A, B, C, D);
    bool f = display.segmentF(A, B, C, D);
    bool g = display.segmentG(A, B, C, D);

    Serial.print("Displaying number: ");    
    Serial.println(String((int)A) + " " +
                  String((int)B) + " " +
                  String((int)C) + " " +
                  String((int)D));   
    display.seven_segment_display(a, b, c, d, e, f, g);        
    delay(1000);      
}
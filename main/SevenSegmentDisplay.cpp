#include "SevenSegmentDisplay.h"

bool SevenSegmentDisplay::segmentA(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment A
    bool salida = (!B && !D) || (B && C) || (A && !C && !D) || (!A && B && D) || (!A && C && D)  || (A && !B && !C);
    return salida;
}

bool SevenSegmentDisplay::segmentB(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment B

    bool salida = (!B && !D) || (!A && !B) || (!A && !C && !D) || (!A && C && D) || (A && !C && D) ;
    return salida;
}

bool SevenSegmentDisplay::segmentC(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment C
    //bool salida = (!B && !D) || (!A && C) || (!A && B && !D) || (A && !B && !D) || (A && !C && D);
    bool salida = (!A && B) || (A && !B) || (!C && D) || (!A && !C && !D) || (!A && C && D); 
    return salida;

}

bool SevenSegmentDisplay::segmentD(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment D
    bool salida = (A && !C) || (!A && !B && C) || (B && !C && D) || (B && C && !D) || (A && !B && D) || (!A && !B && !C && !D) ;
    return salida;
}

bool SevenSegmentDisplay::segmentE(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment E
    bool salida = (!A && !B && !D) || (!A && B && C && !D) || (A && B) || (A && !B && !C && !D) || (A && !B && C) ;
    return salida;    
}

bool SevenSegmentDisplay::segmentF(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment F
    //bool salida = (A) || (!C && !D) || (B && !C) || (B && !D) ;
    /*bool salida = (!A && !B && !C && !D) || (!A && B && !C && !D) || (A && B && !C && !D) || (A && !B && !C && !D) ||
                  (!A && B && !C && D) || (A && !B && !C && D) || 
                  (A && B && C && D) || (A && !B && C && D) ||
                  (!A && B && C && !D) || (A && B && C && !D) || (A && !B && C && !D);*/
    bool salida =
          (!C && !D)
        || (!C &&  D && (A ^ B))
        || ( A &&  C &&  D)
        || ( C && !D && (A || B));

    return salida;    
}

bool SevenSegmentDisplay::segmentG(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment G
    //bool salida = (A) || (B && !C) || (C && !D) || (!B && C) ;
    bool salida = (!A && !B && C) || (!A && B && !C) || (A && !C && D) || (C && !D) || (A && !B) || (A && C);
    return salida;    
}

void SevenSegmentDisplay::seven_segment_display(bool a, bool b, bool c, bool d, bool e, bool f, bool g) {
    // Create three lines of text representing the 7-segment display
    // Use Arduino Strings for concatenation

    bool boolArray[7] = {a,b,c,d,e,f,g};
    
    for (int i = 2; i <7;i++){digitalWrite(i, boolArray[i] ? HIGH : LOW);}
    digitalWrite(12, boolArray[0] ? HIGH : LOW);
    digitalWrite(13, boolArray[1] ? HIGH : LOW);

    String line0 = a ? "  _ " : "   ";
    String line1 = String(f ? "|" : " ") + (g ? " _ " : "   ") + (b ? "|" : " ");
    String line2 = String(e ? "|" : " ") + (d ? " _ " : "   ") + (c ? "|" : " ");

    // Print each line over Serial
    Serial.println(line0);
    Serial.println(line1);
    Serial.println(line2);
}
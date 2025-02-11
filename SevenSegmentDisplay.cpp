#include "SevenSegmentDisplay.h"

bool SevenSegmentDisplay::segmentA(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment A
    bool salida = (!B && !D) || (B && C) || (A && !C && !D) || (!A && B && D) || (!A && C && D) ;
    return salida;
}

bool SevenSegmentDisplay::segmentB(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment B

    bool salida = (!B && C) || (!A && !B) || (!A && !C && !D) || (!A && C && D) || (A && !C && D) ;
    return salida;
}

bool SevenSegmentDisplay::segmentC(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment C
    bool salida = (!C) || (A) || (C && D) || (B) ;
    return salida;

}

bool SevenSegmentDisplay::segmentD(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment D
    bool salida = (A) || (!D) || (B && !C) || (!B && C) ;
    return salida;
}

bool SevenSegmentDisplay::segmentE(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment E
    bool salida = (!A && !B && !D) || (!A && B && C && !D) || (A && B) || (A && !B && !C && !D) || (A && !B && C) ;
    return salida;    
}

bool SevenSegmentDisplay::segmentF(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment F
    bool salida = (A) || (!C && !D) || (B && !C) || (B && !D) ;
    return salida;    
}

bool SevenSegmentDisplay::segmentG(bool A, bool B, bool C, bool D) {
    // Implement the logic for segment G
    bool salida = (A) || (B && !C) || (C && !D) || (!B && C) ;
    return salida;    
}

void SevenSegmentDisplay::seven_segment_display(bool a, bool b, bool c, bool d, bool e, bool f, bool g){
    std::vector<std::string> segments = {
        a ? "  _ " : "   ",
        (f ? "|" : " ") + std::string(g ? " _ " : "   ") + (b ? "|" : " "),
        (e ? "|" : " ") + std::string(d ? " _ " : "   ") + (c ? "|" : " ")
    };

    for (const auto& segment : segments) {
        std::cout << segment << std::endl;
    }
}
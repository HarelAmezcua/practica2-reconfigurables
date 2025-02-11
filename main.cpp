// g++ -o main main.cpp SevenSegmentDisplay.cpp && ./main
#include <iostream>
#include <vector>
#include <string>
#include "SevenSegmentDisplay.h"


int main() {
    SevenSegmentDisplay display;

    for (int i = 0; i < 16; ++i) {
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

        std::cout << "Displaying number: " << i << std::endl;
        std::cout <<  A <<  B << C <<  D << std::endl;
        display.seven_segment_display(a, b, c, d, e, f, g);
        std::cout << std::endl;
    }
    return 0;
}
#ifndef SEVENSEGMENTDISPLAY_H
#define SEVENSEGMENTDISPLAY_H
#include <vector>
#include <string>
#include <iostream>

class SevenSegmentDisplay {
public:
    bool segmentA(bool A, bool B, bool C, bool D);
    bool segmentB(bool A, bool B, bool C, bool D);
    bool segmentC(bool A, bool B, bool C, bool D);
    bool segmentD(bool A, bool B, bool C, bool D);
    bool segmentE(bool A, bool B, bool C, bool D);
    bool segmentF(bool A, bool B, bool C, bool D);
    bool segmentG(bool A, bool B, bool C, bool D);

    void seven_segment_display(bool a, bool b, bool c, bool d, bool e, bool f, bool g);        
};

#endif // FUNCTIONS_H
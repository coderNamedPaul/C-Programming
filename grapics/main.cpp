#include <iostream>
#include "TXLib.h"
using namespace std;

int main() {
    txCreateWindow(800 ,600);
    txSetColor(TX_RED,4);
    txSetFillColor(TX_LIGHTRED);
    txRectangle(10, 10, 100, 100);
    POINT contour[3] = {{110,10}, {210,110}, {110,60}};
    txPolygon(contour, 3);
    cin.get();
    return 0;
}

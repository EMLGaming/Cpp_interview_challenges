#include <iostream>

using namespace std;

int area(int x1, int y1, int x2, int y2){

    int width = x2 - x1;
    int height = y2 - y1;

    int area = width * height;
    return area;
}

int main(){
    //change these values to get the area of different rectangles.
    int x1 = 1, y1 = 1, x2 = 9, y2 = 6, rect;
    rect = area(x1, y1, x2, y2);
    cout << "the area is: " << rect << endl;
}
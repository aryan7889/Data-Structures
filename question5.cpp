#include <iostream>
using namespace std;

class Area {
public:
    int length;
    int breadth;

    void setDim();
    int getArea();
};

void Area::setDim() {
    cout << "Enter the length and breadth of the rectangle" << endl;
    cin >> length >> breadth;
}

int Area::getArea() {
    return length * breadth;
}

int main() {
    Area a;
    a.setDim();
    int area1 = a.getArea();
    cout << "The area is " << area1 << endl;
    return 0;
}

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    void display() {
        cout << "Area of rectangle = " << area() << endl;
    }
};

int main() {
    Rectangle r1(15, 8);   // Constructor automatically called
    r1.display();

    return 0;
}
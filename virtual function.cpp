#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." <<endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override{
        cout << "Drawing a circle." <<endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    void draw() override{
        cout << "Drawing a square." <<endl;
    }
};

int main() {
    // Create objects of base and derived classes
    Shape shape;
    Circle circle;
    Square square;

    // Create pointers to base class objects
    Shape* shapePtr1 = &shape;
    Shape* shapePtr2 = &circle;
    Shape* shapePtr3 = &square;

    // Call the draw() function through base class pointers
    shapePtr1->draw();  // Output: Drawing a shape.
    shapePtr2->draw();  // Output: Drawing a circle.
    shapePtr3->draw();  // Output: Drawing a square.

    return 0;
}

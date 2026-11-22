#include <iostream> 
using namespace std; 
class A1 
{ 
public: 
void area(int side) 
{ 
cout << "Area of Square : "<< side * side << endl; 
} 
void area(int length, int breadth) 
{ 
cout << "Area of Rectangle : "<< length * breadth << endl; 
} 
void area(float base, int height) 
{ 
cout << "Area of Triangle : "<< 0.5 * base * height << endl; 
} 
void area(int base, float height) 
{ 
 
        cout << "Area of Parallelogram : " << base * height << endl; 
    } 
}; 
 
int main( ) 
{ 
    A1 obj; 
 
    obj.area(45); 
    obj.area(10, 20); 
    obj.area(10.65f, 25); 
    obj.area(24, 15.5f); 
 
    return 0; 
} 
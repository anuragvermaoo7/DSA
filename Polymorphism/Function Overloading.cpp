#include<iostream>
using namespace std;
//CompileTime Polymorphism
class Areas
{
    public:
    //Function to find area of square
    int area(int side)
    {
        return side*side;
    }

    //Function to find area of rectangle
    int area(int length, int breadth)
    {
        return length*breadth;
    }

};

int main()
{
    Areas square;
    cout<<"The area of a square of side 5 is: "<<square.area(5)<<endl;

    Areas rectangle;
    cout<<"The area of a rectangle of length 6 and breadth 8 is: "<<rectangle.area(6,8)<<endl;

    return 0;
}

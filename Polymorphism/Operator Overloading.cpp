#include<iostream>
using namespace std;
class A
{
    public:

    int a,b,c;

};
class B: public A
{
    public:

    int operator+ ()
    {
        cout<<"HELLO IM + OP";
    }

};
int main()
{
    B obj1;

    obj1.operator+();
    return 0;
}

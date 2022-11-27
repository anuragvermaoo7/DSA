#include<iostream>
using namespace std;
class A
{
    public:

    void hey()
    {
        cout<<"Hey I'm Class A"<<endl;
    }

};
class B: public A
{
    public:

    void hey()
    {
        cout<<"Hey I'm Class B"<<endl;
    }

};

int main()
{
    A obj1;   // Function Override
    obj1.hey();

    B obj2;   // Function Override
    obj2.hey();
    return 0;
}

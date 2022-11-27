#include<iostream>
using namespace std;

class A
{
    public:

    void SametoSame()
    {
        cout<<"I'm Class A"<<endl;
    }

};
class B
{
    public:

    void SametoSame()
    {
        cout<<"I'm Class B"<<endl;
    }

};
class C: public A, public B
{

};

int main()
{
    C obj1;

    // obj1.SametoSame();   <---- This is Ambiguity

    obj1.A::SametoSame();
    obj1.B::SametoSame();

    return 0;
}

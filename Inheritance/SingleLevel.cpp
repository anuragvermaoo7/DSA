#include<iostream>
using namespace std;
class Human
{
    public:

    int eyes = 2;
    int hand = 2;
    int legs = 2;

    public:

    void speak()
    {
        cout<<"Speaking"<<endl;
    }
    void walk()
    {
        cout<<"Walking"<<endl;
    }

};
class Woman: public Human
{
    public:

    void equality()
    {
        cout<<"1"<<endl;
    }
};
int main()
{
    Woman w;
    w.speak();
    w.equality();
    cout<<w.eyes<<endl;
    return 0;
}

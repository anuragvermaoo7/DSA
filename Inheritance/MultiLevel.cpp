#include<iostream>
using namespace std;
class Maruti
{
    public:

    int Model1 = 1;
    int Model2 = 2;
    int Model3 = 3;

    public:

    void about()
    {
        cout<<"This is MarutiSuzuki a Parent Company of Nexus"<<endl;
    }

};
class Nexus: public Maruti
{
    public:

    int ModelA1 = 'A';
    int ModelA2 = 'B';

    void about2()
    {
        cout<<"This is Nexus, SubCompany of Maruti"<<endl;
    }

};
class Customer: public Nexus
{
    public:

    int p;
    int purchasing()
    {
        cout<<"Deal Done"<<endl;
    } 
};
int main()
{
    Customer c;
    c.about();
    c.about2();
    c.purchasing();

    return 0;
}

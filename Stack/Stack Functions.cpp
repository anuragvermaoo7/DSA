#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s; //Created Stack using STL

    s.push(1);
    s.push(10);
    s.push(100);
    s.push(1000);

    cout<<"Printing Top Element of Stack "<<s.top() <<endl;;

    s.pop(); // Deleting Top Element of the Stack

    cout<<"Printing Top Element of Stack "<<s.top()<<endl;
    
    if(s.empty())
    {
        cout<<"Stack is Empty "<<endl;
    }
    else
    {
        cout<<"Stack is not Empty "<<endl;
    }

    cout<<"Size of Stack is "<<s.size();
    
    return 0;
}

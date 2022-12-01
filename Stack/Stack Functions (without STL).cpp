#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {
        if(top >=0 )
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek()
    {
        if(top >=0)
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if( top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(8);

    s.push(10);
    s.push(100);
    s.push(1000);
    s.push(10000);

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    if(s.isEmpty())
    {
        cout << "Stack is Empty " << endl;
    }
    else
    {
        cout << "Stack is not Empty " << endl;
    }
}

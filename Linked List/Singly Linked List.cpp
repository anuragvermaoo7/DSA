#include<iostream>
using namespace std;
class Node
{
    public:

    int data;
    Node* next;

    Node(int a)
    {
        this -> data = a;
        this -> next = NULL;
    }
};
int main()
{
    Node* Node1 = new Node(10);
    cout<< Node1 -> data;
    return 0;
}

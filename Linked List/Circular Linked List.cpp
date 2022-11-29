#include<iostream>
using namespace std;
class Node
{
    public:

    int data;
    Node* next;

    Node(int d) 
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int d)
{

    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else
    {
        Node* curr = tail;

        while(curr->data != element)
        {
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

} 

void print(Node* tail)
{

    Node* temp = tail;

    if(tail == NULL)
    {
        cout << "List is Empty "<< endl;
        return ;
    }

    do
    {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
    cout << endl;

} 

int main()
{
    Node* tail = NULL;

    insertNode(tail,5,1);
    //print(tail);

    insertNode(tail,1,2);
    print(tail);

    insertNode(tail,2,3);
    print(tail);

    insertNode(tail,3,10);
    print(tail);
}

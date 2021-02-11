#include<iostream>
#include<stack>

using namespace std;

class Node
{
 public:   
    int data;
    Node(int n)
    {
        data = n;
    }
    Node* next;
};

int printReverse(Node* head)
{
    Node* temp = head;
    stack<int> s;

    while(temp!=NULL)
    {
        s.push(temp->data);
        temp = temp->next;
    }

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}

void printList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data <<endl; 
        n = n->next; 
    } 
} 

int main() 
{ 
    
    Node one =  Node(1);
    Node two = Node(2);
    Node three = Node(3);
    Node four = Node(4);
    Node five = Node(5);
 
    Node* temp = &one;
    one.next = &two;
    two.next = &three;
    three.next = &four;
    four.next = &five;
    five.next = NULL;

    cout<<"the original linked list is:"<<endl;
    printList(temp);
    cout<<"The reverse is:"<<endl;
    printReverse(temp);

    return 0;
}
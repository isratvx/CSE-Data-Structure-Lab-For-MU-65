#include <iostream>
using namespace std;

struct Node{
    int val;
    Node *next;
};

struct Stack{
    Node *top;

    Stack(){
        top=NULL;
        cout << "Linked List Stack initialized here. \n";
    }

    // Add an element to the top of the stack
    void push(int x) {
        Node *newNode = new Node;
        newNode->val = x;

        newNode->next = top; // Connect the new node with the top element

        top = newNode; // Make the new node the top

        cout << "Pushed " << x << " onto the stack.\n";
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    return 0;
}
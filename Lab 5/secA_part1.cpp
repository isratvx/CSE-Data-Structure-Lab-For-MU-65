#include<iostream>
using namespace std;

// Node of the linked list
struct Node{
    int val;
    Node *next;
};

// Stack structure
struct Stack{
    Node *top;

    // Initialize the stack
    Stack(){
        top=NULL;
        cout << "Stack initialized!\n";
    }

    // Check if stack is empty
    bool isEmpty(){
        return top == NULL;
    }
};

int main(){

    Stack s;
    if(s.isEmpty()){
        cout << "The stack is empty.\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next;
};

struct Queue {
    Node *headPtr;

    Queue() {
        headPtr = NULL;
        cout << "STL-Style Queue initialized!\n";
    }

    // Insert at the end - STL calls this push_back()
    void push_back(int x) {
        Node *newNode = new Node;
        newNode->val = x;
        newNode->next = NULL; 

        if (headPtr == NULL) {
            headPtr = newNode;
            cout << "Pushed " << x << " to the back.\n";
            return;
        }

        Node *cur = headPtr;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = newNode;
        
        cout << "Pushed " << x << " to the back.\n";
    }
};

int main() {
    Queue q;

    q.push_back(5);
    q.push_back(15);
    q.push_back(25);

    return 0;
}

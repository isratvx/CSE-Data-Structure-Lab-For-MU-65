#include <iostream>
using namespace std;

struct Node{
    int val;
    Node *next;
};

struct Queue {
    Node *headPtr; //Renamed 

    Queue(){
        headPtr=NULL;
        cout << "STL-style queue initialized. \n";
    }

    bool empty(){ 
        return headPtr ==NULL;
    }
};

int main() {
    Queue q;
    if(q.empty()) {
        cout << "The queue is currently empty.\n";
    }

    return 0;
}
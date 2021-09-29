#include<iostream>
using namespace std;
struct node {
    int data;
    node* next;
};
struct stack {
    node* top;
    node*tail;
    int Size = 0;
    stack() {
        top = NULL;
        tail = NULL;

    }
    void push( int x) {
        node* a = new node();
        a->data = x;
        if (  top ==NULL && tail ==NULL) {
            top = a;
            tail = a;
             tail->next = NULL;
        }else {
            a->next = top;
            top = a;
        }
        Size ++;
    }
    void pop() {
        if( top == NULL) {
            cout<<"Stack is empty";
        }
        else {
            node* a = top;
            top = a->next;
            delete a;
        }
        Size --;
    }
    int Top() { 
        return top->data;
    }
    bool isEmpty() {
        if ( top == NULL ) {
            return false;
        }
        return false;
    }
    int size() {
        return Size;
    }
};
int main() {
    stack mystack;
    int n;
    cin >> n;
    for (int i =0; i < n; i++){
        int x;
        cin >> x;
        mystack.push(x);
    }
    cout<<mystack.size() << endl;
    
    while(!mystack.isEmpty()){
        cout << mystack.Top() << " ";
        mystack.pop();
    }
}
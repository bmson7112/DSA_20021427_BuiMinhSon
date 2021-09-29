#include <iostream>
using namespace std;

struct node
{
int data;
node *next;
};
struct queue {
    node *front;
    node *rear;
    queue() {
        front = NULL;
        rear = NULL;
    }
    void enqueue( int x) {
        node* a = new node ();
        a->data = x;
        if ( front == NULL && rear == NULL) {
            front = a;
            rear = a;
        }
        else {
            rear->next = a;
            rear = a;
        }
    }
    void dequeue() {
        if (front == NULL) {
            return;
        }
        node* ptr = front; 
        front = front->next;
         if (front == NULL) {
            rear = NULL;
         }
        delete (ptr);
    }

    bool isempty() {
        if ( front == NULL && rear == NULL ) {
            return true;
        }
        return false;
    }
    void showfront() {
        if ( isempty() ) {
            cout<< "Queue is empty";
        }
        cout<< front-> data;
    }
    void showrear() {
        if ( isempty() ) {
            cout<< "Queue is empty";
        }
        cout<< rear-> data;
    }
    int  size() {
        node *ptr = front;
        int count = 0;
        while (ptr != NULL)
        {
             count ++;
            ptr = ptr->next;
        }
        return count;
    }
};
int main()
{
 
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    q.dequeue();
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data;
}

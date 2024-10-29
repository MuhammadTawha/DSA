#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
};
class Queue {
private:
Node* front;
Node* rear;
public:
Queue() {
front = rear = NULL;
}
bool isEmpty() {
return front == NULL;
}
void enqueue(int value) {
Node* newNode = new Node();
newNode->data = value;
newNode->next = NULL;
if (isEmpty()) {
front = rear = newNode;
} else {
rear->next = newNode;
rear = newNode;
}
cout << value << " enqueued to queue\n";
}
void dequeue() {
if (isEmpty()) {
cout << "Queue is empty. Cannot dequeue.\n";
return;
}
Node* temp = front;
front = front->next;
if (front == NULL) {
rear = NULL;
}
cout << temp->data << " dequeued from queue\n";
delete temp;
}
int peek() {
if (isEmpty()) {
cout << "Queue is empty.\n";
return -1;
}
return front->data;
}
};
int main() {
Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
cout << "Front element is: " << q.peek() << endl;
q.dequeue();
q.dequeue();
cout << "Front element is: " << q.peek() << endl;
q.dequeue();
q.dequeue();
return 0;
}

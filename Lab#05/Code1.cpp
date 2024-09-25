#include<iostream>
using namespace std;

#define SIZE 5 
class Queue

{
private:
int items[SIZE];
int front, rear;

public:
Queue() : front(-1), rear(-1) {}

bool isEmpty() const {
    return front == -1; 
}

bool isFull() const {
    return rear == SIZE - 1; 
}
void enqueue(int element) {
    if (isFull()) {
    cout << "Queue is full\n";
}else{
    if (isEmpty()) front = 0;
    items[++rear] = element;
    cout << "Inserted: " << element << endl; }
}
int dequeue() { 
    if(isEmpty()) {
    cout << "Queue is empty\n"; return -1; 
}else{
    int element = items[front]; 
    if (front >= rear) {
    front = rear = -1; 
}else{
    front++; }
cout << "Deleted: " << element << endl;
return element; }
}
void display() const { if(isEmpty()) {
cout << "Queue is empty\n"; }else{
cout << "Queue elements: "; 
for(int i=front;i<=rear;++i){
cout << items[i] << " "; }
cout << endl; }
} };
int main() {
Queue q; 
q.dequeue();

q.enqueue(10); 
q.enqueue(20);
q.enqueue(30);
q.enqueue(50);

q.display();
    
q.dequeue();
    
q.display();

return 0; }
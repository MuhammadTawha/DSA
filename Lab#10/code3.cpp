#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node* prev;
Node(int dataValue) {
    data = dataValue;
next = nullptr;
prev = nullptr;
}
};
class DoublyLinkedList {
private:
Node* head;
Node* tail;
public:
DoublyLinkedList() {
head = nullptr;
tail = nullptr;
}
void addAtStart(int value) {
Node* newNode = new Node(value);
if (!head) {
head = tail = newNode;
} else {
newNode->next = head;
head->prev = newNode;
head = newNode;
}
}
void addAtEnd(int value) {
Node* newNode = new Node(value);
if (!tail) {
head = tail = newNode;
} else {
tail->next = newNode;
newNode->prev = tail;
tail = newNode;
}
}
void addAtPosition(int value, int pos) {
if (pos < 1) {
cout << "Invalid Position." << endl;
return;
}
Node* newNode = new Node(value);
if (pos == 1) {
addAtStart(value);
} else {
Node* current = head;
int currentPosition = 1;
while (current && currentPosition < pos - 1) {
current = current->next;
currentPosition++;
}
if (!current) {
    cout << "Position out of bounds." << endl;
delete newNode;
return;
}
newNode->next = current->next;
newNode->prev = current;
if (current->next) {
current->next->prev = newNode;
}
current->next = newNode;
}
}
void removeAtStart() {
if (!head) {
cout << "List is empty." << endl;
return;
}
Node* temp = head;
head = head->next;
if (head) {
head->prev = nullptr;
} else {
tail = nullptr;
}
delete temp;
}
void removeAtEnd() {
if (!tail) {
cout << "List is empty." << endl;
return;
}
Node* temp = tail;
tail = tail->prev;
if (tail) {
tail->next = nullptr;
} else {
head = nullptr;
}
delete temp;
}
void display() {
Node* current = head;
while (current) {
cout << current->data << " ";
current = current->next;
}
cout << endl;
}
int getSize() {
int size = 0;
Node* current = head;
while (current) {
    current = current->next;
size++;
}
return size;
}
void displayInReverse() {
Node* current = tail;
while (current) {
cout << current->data << " ";
current = current->prev;
}
cout << endl;
}
};
int main() {
DoublyLinkedList list;
list.addAtStart(11);
list.addAtEnd(15);
list.addAtStart(7);
list.addAtPosition(9, 4);
list.display();
cout << "Reverse print of Doubly Linked List:" << endl;
list.displayInReverse();
list.removeAtStart();
list.removeAtEnd();
list.display();
list.addAtEnd(20);
list.addAtPosition(13, 3);
list.display();
cout << "Size of list: " << list.getSize() << endl;
return 0;
}
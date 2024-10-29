#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node* prev;
Node(int data) {
this->data = data;
this->next = nullptr;
this->prev = nullptr;
}
};
class DoublyLinkedList {
private:
Node* head;
Node* tail;
public:
DoublyLinkedList() : head(nullptr), tail(nullptr) {}
void insertionStart(int value) {
Node* newNode = new Node(value);
if (!head) {
head = tail = newNode;
} else {
newNode->next = head;
head->prev = newNode;
head = newNode;
}
}
void insertionEnd(int value) {
Node* newNode = new Node(value);
if (!tail) {
head = tail = newNode;
} else {
tail->next = newNode;
newNode->prev = tail;
tail = newNode;
}
}
void insertAtPosition(int value, int position) {
if (position < 1) {
cout << "Position Invalid." << endl;
return;
}
if (position == 1) {
insertionStart(value);
return;
}
Node* newNode = new Node(value);
Node* current = head;
int currentPosition = 1;
while (current && currentPosition < position - 1) {
current = current->next;
currentPosition++;
}
if (!current) {
cout << "Invalid Position." << endl;
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
void deleteStart() {
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
void deleteEnd() {
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
void display() const {
Node* current = head;
while (current) {
cout << current->data << " ";
current = current->next;
}
cout << endl;
}
int count() const {
int n = 0;
Node* current = head;
while (current) {
n++;
current = current->next;
}
return n;
}
void insertMiddle(int data) {
int half = count() / 2;
Node* current = head;
for (int i = 1; i < half; i++) {
current = current->next;
}
Node* newNode = new Node(data);
newNode->next = current->next;
newNode->prev = current;
if (current->next) {
current->next->prev = newNode;
}
current->next = newNode;
}
void deleteValue(int data) {
if (!head) {
cout << "List is empty." << endl;
return;
}
Node* current = head;
while (current) {
if (current->data == data) {
if (current->prev) {
current->prev->next = current->next;
} else {
head = current->next;
}
if (current->next) {
current->next->prev = current->prev;
} else {
tail = current->prev;
}
delete current;
return;
}
current = current->next;
}
cout << "The given value does not exist." << endl;
}
void displayReverse() const {
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
list.insertionStart(9);
list.insertionEnd(11);
list.insertionStart(5);
list.insertAtPosition(7, 2);
list.display();
cout << "Reverse print of Doubly LinkedList" << endl;
list.displayReverse();
list.deleteStart();
list.deleteEnd();
list.display();
list.insertionEnd(15);
list.insertAtPosition(14, 2);
list.display();
cout << "Size of list: " << list.count() << endl;
list.insertMiddle(1);
list.display();
list.insertMiddle(2);
list.display();
list.insertMiddle(3);
list.display();
list.deleteValue(18);
list.deleteValue(1);
list.display();
return 0;
}
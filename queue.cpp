#include <iostream>

#define MAX_SIZE 100

using namespace std;

class Queue {
   private:
      int arr[MAX_SIZE];
      int front, rear;

   public:
      Queue() {
         front = -1;
         rear = -1;
      }

      bool isFull() {
         if (front == 0 && rear == MAX_SIZE - 1) {
            return true;
         }
         if (front == rear + 1) {
            return true;
         }
         return false;
      }

      bool isEmpty() {
         if (front == -1) {
            return true;
         }
         return false;
      }

      void enqueue(int data) {
         if (isFull()) {
            cout << "Queue is full\n";
            return;
         }
         if (front == -1) {
            front = 0;
         }
         rear = (rear + 1) % MAX_SIZE;
         arr[rear] = data;
      }

      int dequeue() {
         int data;
         if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
         }
         data = arr[front];
         if (front == rear) {
            front = -1;
            rear = -1;
         } else {
            front = (front + 1) % MAX_SIZE;
         }
         return data;
      }

      void display() {
         if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
         }
         cout << "Queue elements: ";
         for (int i = front; i != rear; i = (i + 1) % MAX_SIZE) {
            cout << arr[i] << " ";
         }
         cout << arr[rear] << endl;
      }
};

int main() {
   Queue q;
   q.enqueue(10);
   q.enqueue(20);
   q.enqueue(30);
   q.display();
   cout << "Dequeued element: " << q.dequeue() << endl;
   q.display();
   q.enqueue(40);
   q.enqueue(50);
   q.display();
   return 0;
}
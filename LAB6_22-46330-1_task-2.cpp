#include <iostream>
using namespace std;

class CircularQueue{
private:
  int cqueue[5];
  int front = -1, rear = -1;
public:

    bool isFull(){
       if ((front == 0 && rear == 4) || (front == rear+1)) {
      return true;
    }
    else return false;
    }

    bool isEmpty(){
    if (front == -1) {
      return true;
    }
    else return false;
    }

void enQueue(int val) {
   if (isFull()==true) {
      cout<<"Queue is full"<<endl;

   }
   if (front == -1) {
      front = 0;
      rear = 0;
   } else {
      if (rear == 4)
      rear = 0;
      else
      rear = rear + 1;
   }
   cqueue[rear] = val ;
}
void deQueue() {
   if (isEmpty()==true) {
      cout<<"Queue is empty."<<endl;
         }
   cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;

   if (front == rear) {
      front = -1;
      rear = -1;
   } else {
      if (front == 4)
      front = 0;
      else
      front = front + 1;
   }
}
void displayCQ() {
   int f = front, r = rear;
   if (front == -1) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are :";
   if (f <= r) {
      while (f <= r){
         cout<<cqueue[f]<<" ";
         f++;
      }
   } else {
      while (f <= 4) {
         cout<<cqueue[f]<<" ";
         f++;
      }
      f = 0;
      while (f <= r) {
         cout<<cqueue[f]<<" ";
         f++;
      }
   }
   cout<<endl;
}
};

int main(){
CircularQueue q;
q.enQueue(2);
q.enQueue(4);
q.enQueue(6);
q.displayCQ();
q.isEmpty();
q.isFull();
q.deQueue();
q.displayCQ();





}


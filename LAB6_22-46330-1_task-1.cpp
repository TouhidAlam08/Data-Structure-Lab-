#include<iostream>
using namespace std;

class Queue{
    int arr[5],frontt=-1,rear=-1;
     public:

          bool isFull()
  {
      if(rear==4)
      {
          return true;
      }
      else
      {
          return false;
      }
  }
     bool isEmpty()
    {
        if((frontt==-1 && rear==-1 ) || (frontt > rear))
        {
            return true;
        }
        else
        {
            return false;
        }
    }


  void enQueue(int x)
  {
      if(isFull()==true)
      {
          cout<<"The queue is full."<<endl;

      }
      else if(isEmpty()==true)
      {
        frontt=0;
        rear=0;
        arr[rear]=x;
        cout<<"Inserted."<<endl;

      }
      else
      {
          rear++;
          arr[rear]=x;
          cout<<"Inserted"<<endl;
      }
  }
  void deQueue()
  {
      if(isEmpty()==true)
      {
          cout<<"The queue is empty."<<endl;
      }
      else if(frontt==rear)
      {
          frontt=-1;
          rear=-1;
          cout<<"Dequeued."<<endl;
      }
      else
      {
          frontt++;
      }
  }

  void display()
  {
      if(isEmpty()==true)
      {
          cout<<"The queue is empty"<<endl;
      }
      else
      {
          for(int i=frontt;i<=rear;i++)
          {
              cout<<arr[i]<<" ";
          }
      }
  }



};
int main()
{
    Queue q;
    q.enQueue(3);
    q.enQueue(2);
    q.enQueue(1);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.deQueue();
    q.display();



}

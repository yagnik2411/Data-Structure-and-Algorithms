// Perform QUEUE algorithms....

#include <iostream>
using namespace std;
class Queue
{

    int size; //->size of QUEUE
    int front = -1; //-> default value of FRONT is -1
    int rear = -1;  //-> default value of REAR is -1
    int *arr;       //->point to first elment of queue
public:
    // Define QUEUE :

    Queue(int size){
        this->size = size;
        this->arr = new int[this->size];
    }
    // IsFULL():Checking QUEUE is FULL or NOT
    bool isfull()
    {
        if (this->rear >= size)
            return true;
        else
            return false;
    }
    // IsEMPTY():Checking QUEUE is EMPTY or NOT
    bool isempty()
    {
        if (this->front <= -1)
            return true;
        else
            return false;
    }
    // ENQUEUE:insert a element from REAR
    void enqueue(int n)
    {
        if (isfull())
            cout << "Queue is full." << endl;
        else
        {
            if (this->front == -1)
                this->front = 0;
            this->rear++;
            arr[this->rear] = n;
            cout << "Enqueueing element:" << arr[this->rear] << endl;
        }
    }
    // DEQUEUE:Delete a element from FRONT
    int dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty." << endl;
            return 0;
        }
        else
        {
            this->front++;
            cout << "Dequeueing element:" << arr[this->front] << endl;
            return arr[this->front];
        }
    }
    // Traverse-Print all element of QUEUE:
    void print()
    {
         cout << "Queue having:" << endl;
        for (int i = this->front; i <= this->rear; i++)
        {
           
            cout << "\t" << i-this->front+1 << "th element:" << arr[i] << endl;
        }
    }
};
// using QUEUE in main()::
int main()
{
    Queue q(10);
    
    if (q.isempty())
        cout << "Queue is empty." << endl;
    q.enqueue(7);
    q.enqueue(0);
    q.enqueue(5);
    q.enqueue(4);

    q.print();
    q.dequeue();
    q.enqueue(3);
    q.enqueue(1);
    q.enqueue(2);
    q.print();
    return 0;
}
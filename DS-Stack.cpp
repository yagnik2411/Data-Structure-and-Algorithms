// Perform STACK algorithms....

#include <iostream>
using namespace std;
class stack
{

    int size; //->size of STACK
    int top=-1; //-> default value of TOP is -1.
    int *arr;//->point to first elment of stack
public:
    // Define STACK :
    stack(int size){
        this->size = size;
        this->arr= new int[this->size];
    }


    //IsEMPTY():Checking STACK is EMPTY or NOT 
    int isempty()
    {
        if (this->top <= -1)
        {
            return 1;
        }
        else
            return 0;
    }
    // IsFULL():Checking STACK is FULL or NOT
    int isfull()
    {
        if (this->top >= this->size)
            return 1;
        else
            return 0;
    }
    //PUSH:insert a element on TOP
    void push(int n)
    {
        if (isfull())
            cout << "stack is full" << endl;
        else
        {
            this->top++;
            this->arr[this->top] = n;
            cout << "pushing " << n << " in stack:" << endl;
        }
    }
    // POP:Delete a element from TOP
    int pop()
    {
        if (isempty())
            cout << "stack is empty" << endl;
        else
        {
            this->top--;
            cout << "poping " << this->arr[this->top + 1] << " from stack:" << endl;
            return this->arr[this->top + 1];
        }
        return 0;
    }
    //PEEK:taking element from TOP using indices
    int peek(int i)
    {
        int a = this->top - i + 1;
        if (a <= 0)
            cout << "not a valid position for the stack" << endl;
        else
        {
            return this->arr[a];
        }
        return -1;
    }
};
// using STACK in main()::
int main()
{
    stack s(10);

    if (s.isempty())
        cout << "the stack is empty." << endl;
    else
        cout << "the stack isn't empty." << endl;
    s.push(8);
    s.push(6);
    s.push(83);
    s.push(0);
    s.push(90);
    s.push(10);

    if (s.isempty())
        cout << "the stack is empty." << endl;
    else
        cout << "the stack isn't empty." << endl;
    s.pop();
    if (s.isempty())
        cout << "the stack is empty." << endl;
    else
        cout << "the stack isn't empty." << endl;
    cout << "tha value of stack is " << s.peek(3) << " at peak equal to 3.\n";

    return 0;
}
// Perform Linear Serch and Binary Serach on ARRAY.

#include <iostream>
using namespace std;
class myarray
{
    int totalsize;   //->totalsize of array
    int usedsize;   //->usedsize of array
    int *ptr;

public:
    // Define array using myarray function:
    myarray() {}
    myarray(int tsize, int usize)
    {
        totalsize = tsize;
        usedsize = usize;
        ptr = new int[totalsize];
        for (int i = 0; i < totalsize; i++)
            *(ptr + i) = 0;
    }
    // Traverse-Print all element of array:
    void get_array()
    {
        cout << "value of array:\n";
        for (int i = 0; i < usedsize; i++)
        {
            cout << "\t" << i + 1 << "th value:" << *(ptr + i) << endl;
        }
    }
    // Set value of every element via User's input:
    void set_array()
    {
        cout << "enter value of array:\n";
        for (int i = 0; i < usedsize; i++)
        {
            cout << "\tenter " << i + 1 << "th value:";
            cin >> *(ptr + i);
        }
    }
    // Display totalsize of array:
    void get_totalsize()
    {
        cout << "totalsize of array is " << totalsize << ".\n";
    }
    // Display usedsize of array:
    void get_usedsize()
    {
        cout << "usedsize of array is " << usedsize << ".\n";
    }
    //Appling Linear search algorithm on Array: 
    void linear_serch_array(int num)
    {
        int flag = 0;
        int i;
        for (i = 0; i < usedsize; i++)
        {
            if (*(ptr + i) == num)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << num << " is in array at index of " << i << ".\n";
        }
        else
        {
            cout << num << " doesn't exits in array.\n";
        }
    }
    // Appling Binary search algorithm on Array:
    void binary_search_array(int num)
    {
        int flag = 0, low = 0, high = usedsize - 1, i;
        for (i = low; i <= high; i++)
        {
            if (*(ptr + low) == num)
            {
                flag = 1;
                break;
            }
            else if (*(ptr + high) == num)
            {
                flag = 1;
                i = high;
                break;
            }
            else if (*(ptr + ((high + low) / 2)) == num)
            {
                flag = 1;
                i = (high + low) / 2;
                break;
            }
            else if (*(ptr + ((high + low) / 2)) > num)
            {
                high = (high + low) / 2;
            }
            else
            {
                low = (high + low) / 2;
            }
        }

        if (flag == 1)
        {
            cout << num << " is in array at index of " << i << ".\n";
        }
        else
        {
            cout << num << " doesn't exits in array.\n";
        }
    }
};
// using Linear Search & Binary Search in main()::
int main()
{
    myarray a(10, 7);

    a.set_array();
    a.binary_search_array(3);
    a.linear_serch_array(5);

    return 0;
}
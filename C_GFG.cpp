#include <iostream>
#include <vector>
using namespace std;

// insert element in the 2nd postion
int insert(int arr[], int n, int pos, int cap, int x)
{
    if (n == cap) //here we are checking the array is full or not
    {
        return n;
    }

    int inx = pos - 1; //index

    for (int i = n - 1; i >= inx; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[inx] = x;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return n;
}

int main()
{
    int arr[6] = {11, 22, 33, 44};

    cout << endl;
    int cap = sizeof(arr) / sizeof(arr[0]);
    int x = 66;
    int pos = 2;
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    insert(arr, n, pos, cap, x);

    for (int i = 0; i < cap; i++)
    {
        cout << arr[i] << " ";
    }

    // time complexity is O(n)
}
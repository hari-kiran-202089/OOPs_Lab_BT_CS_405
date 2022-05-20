// Write function template for finding minimum value in a array
#include <iostream>
using namespace std;

template <typename T>
T min(T *arr, int len)
{
    T min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int len;
    cout << "Enter Length of array: ";
    cin >> len;
    int *arr = new int(len);
    for (int i = 0; i < len; i++)
    {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
    cout << "Min Value: " << min(arr, len);
    delete[] arr;
    return 0;
}
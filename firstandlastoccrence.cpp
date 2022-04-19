#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) // right wale mai jane ha
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}
int lastocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) // right wale mai jane ha
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}
int main()
{
    int even[6] = {1, 2, 3, 3, 3, 5};
    cout << "First Occurrence of 3 is at Index " << firstocc(even, 5, 3) << endl;
    cout << "last Occurrence of 3 is at Index " << lastocc(even, 5, 3) << endl;
    cout << "total no of occurence of 3 is " << (lastocc(even, 5, 3) - firstocc(even, 5, 3)) + 1;
    return 0;
}
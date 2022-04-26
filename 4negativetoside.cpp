#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {-12, 11, -13, -5, 6, -7, 5, 0, 12};
  //  int low = 0;
    int mid = 0;
    int high = 8;
    while (mid <= high)
    {
        if (arr[mid] < 0)
        {
            mid++;
        }

        else if (arr[high > 0])

        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        {
              swap(arr[mid], arr[high]);
             
        }
    }
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
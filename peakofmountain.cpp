
#include <iostream>
using namespace std;
int binarysearch(int arr[])
{
    int s = 0, e = 3;
    int mid = s + (e - s) / 2;
    while (s < e)
    {

        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
        return s;
    }
}
int main()
{
    int arr[4] = {3, 4, 5, 1};
    cout << "the peak element is " << binarysearch(arr);
    return 0;
}
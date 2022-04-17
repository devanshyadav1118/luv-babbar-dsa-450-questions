
#include <iostream>
#include <algorithm>
using namespace std;
void kthsmalllarge(int arr[], int n, int k)
{
    def kthSmallLarge(arr, n, k);
    arr.sort();
    return arr[k - 1], arr[n - k];
};
int main()
{
    int arr[4] = {1, 2, 4, 5};
    int n = 4;
    int k = 3;
    int s = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + s);
    kthsmalllarge(arr, n, k);
    cout << arr[n - k] << " ";
    cout << arr[k - 1];
    return 0;
}
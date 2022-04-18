#include <iostream>
using namespace std;
void pairsum(arr[],n, key)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; i < n - 1; j++)
        {
            if (arr[i] + arr[j] = key)
            {
                cout << arr[i] << arr[j];
            }
        }
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    return 0;
}
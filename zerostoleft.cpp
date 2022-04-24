#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 0, 0, 1};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            while (arr[0] > arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
for (int  k= 0; k < 4; k++)
{
    cout<<arr[k];
}

    return 0;
}
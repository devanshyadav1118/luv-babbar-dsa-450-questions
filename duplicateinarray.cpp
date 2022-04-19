#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 2, 5, 3, 3};
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
    return 0;
}
sort(arr, arr + n);
vector<int> brr;
for (int i = 1; i < n; i++)
{
    if (arr[i - 1] == arr[i])
    {
        brr.push_back(arr[i]);
        while (arr[i - 1] == arr[i])
            i++;
    }
}
if (brr.size() == 0)
    return {-1};
else
    return brr;
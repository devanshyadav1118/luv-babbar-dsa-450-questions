#include <iostream>
using namespace std;

int main()
{
    int n = 36;
    int s = 0;
    int ans = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid - 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
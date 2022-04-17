#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {2, 2, 6, 4, 4};
    int ans = 0;

    for (int i = 0; i < 4; i++)
    {
        ans = ans ^ arr[i];
       
        cout << ans<<" ";
        
    }

    return 0;
}
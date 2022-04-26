#include<iostream>
using namespace std;
int main(){


int arr[6]={1,2,3,4,5,6};
int temp=arr[0];
for (int i = 0; i < 6; i++)
{
   arr[i]=arr[i+1];
   arr[6]=temp;
}
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}
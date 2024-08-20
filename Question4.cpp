// (C rint a.. the e.ements of an array in reverse order using recursionC

#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    if(n==0)return;
    cout<<arr[n-1]<<endl;
    reverse(arr,n-1);
    
}
int main()
{
    int arr[5]={4,8,2,19,7};
    int n =5;
    reverse(arr,n);
}
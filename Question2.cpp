// -C Write a program to find the sum of a.. e.ements in an array using recursionC
#include<iostream>
using namespace std;
int sumofarray(int arr[],int n)
{
    if(n==0)return 0;
     int sum = arr[n-1]+sumofarray(arr,n-1);
     return sum;
}
int main()
{
    int arr[5]={0,0,0,0,0};
    int n =5;
    cout<<sumofarray(arr,n);
}
// Write a program to find the minimum e.ement of an array using recursionC
#include<iostream>
using namespace std;
int mini(int arr[],int n)
{
    if(n==0)return INT_MAX;
    int minimun =min(arr[n-1],mini(arr,n-1));
    return minimun;
}
int main()
{
    int arr[5]={4,8,2,19,7};
    int n =5;
    cout<<mini(arr,n);
}
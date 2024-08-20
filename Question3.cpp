// Write a program to find the index of a given e.ement in an array using recursion. If the
// e.ement is present, return its index; otherwise, return -0C
// Write a program to find the minimum e.ement of an array using recursionC
#include<iostream>
using namespace std;
int findindex(int arr[],int n,int target)
{
    if(n==0)return -1;
    if(arr[n-1]==target)return n-1;
    return findindex(arr,n-1,target);
}
int main()
{
    int arr[5]={4,8,2,19,7};
    int n =5;
    int target = 7;
    cout<<findindex(arr,n,target);
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arr[1000];

int main()
{
    int i,j,n1,n2,temp;
    for(i=1; i<=1000; i++)
    {
        int a = rand()%500;
        arr[i] = a;
    }
    for(i=1; i<1000; i++)
    {
        for(j=i; j<=1000; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=1; i<=1000; i++)
        cout<<arr[i]<<" ";

    cout<<"Enter the numbers you want to search: ";
    cin>>n1>>n2;

    int first=1,last=1000;
    while(first<=last)
    {
        int mid = (first+last)/2;
        if(n1 == arr[mid])
        {
            cout<<"1 ";
            break;
        }
        else if(n1 < arr[mid])
        {
            last = mid-1;
        }
        else
        {
            first = mid+1;
        }
    }
    if(first > last)
        cout<<"0 ";
    while(first<=last)
    {
        int mid = (first+last)/2;
        if(n1 == arr[mid])
        {
            cout<<"1";
            break;
        }
        else if(n1 < arr[mid])
        {
            last = mid-1;
        }
        else
        {
            first = mid+1;
        }
    }
    if(first > last)
        cout<<"0";
}

#include<iostream>
using namespace std;

main()
{
    int n,i,j,count_a=0,count_b=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            count_a++;
        if(a[i]%3==0)
            count_b++;
    }
    if(count_a==0 && count_b==0)
        cout<<1;
    else
    {
        if(count_a > count_b)
            cout<<count_a;
        else
            cout<<count_b;
    }
}

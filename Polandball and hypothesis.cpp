#include<iostream>
using namespace std;

int prime(int res)
{
    int i;
    for(i=2; i<res; i++)
    {
        if(res%i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,i,res=0;
    cin>>n;
    for(i=1; i<1000; i++)
    {
        res = (n*i) + 1;
        if(prime(res)==1)
        {
            cout<<i;
            break;
        }
    }
}

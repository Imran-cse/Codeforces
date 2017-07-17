#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    cout<<"I hate";
    if(n>1)
    {
        n--;
        while(n>0)
        {
            cout<<" that I love";
            n=n-1;
            if(n==0)
            {
                break;
            }
            cout<<" that I hate";
            n--;
        }
    }
    cout<<" it";
}

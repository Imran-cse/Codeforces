#include<iostream>
using namespace std;

int main()
{
    int n,m,c,mishi,chris,i,j;
    mishi=0;
    chris=0;
    cin>>n;
    while(n>0)
    {
        cin>>m>>c;
        if(m > c)
            mishi++;
        else if(m < c)
            chris++;
        n--;
    }
    if(mishi>chris)
        cout<<"Mishka"<<endl;
    else if(mishi < chris)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
}

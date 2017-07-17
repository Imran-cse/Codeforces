#include<iostream>
using namespace std;

struct{
    int dis;
    string dir;
}pole[50];;

int main()
{
    int n,i,j=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>pole[i].dis;
        cin>>pole[i].dir;
    }
    if(pole[0].dir=="East" || pole[0]=="West" || pole[n-1]!="North")
    {
        cout<<"No";
        break;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            j += pole[i].dis;
        }
    }
}

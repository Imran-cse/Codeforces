#include<iostream>
using namespace std;

int main()
{
    int d;
    char c;
    cin>>c>>d;
    if(c=='a'||c=='h')
    {
        if(d==1||d==8)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<5<<endl;
        }
    }
    else
    {
        cout<<8<<endl;
    }

}

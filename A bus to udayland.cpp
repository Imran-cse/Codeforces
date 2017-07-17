#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k,found=0;
    cin>>n;
    char input[1000][5];
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>input[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        if(input[i][0]=='O' && input[i][1]=='O')
        {
            found=1;
            input[i][0]='+';
            input[i][1]='+';
            break;
        }
        else if(input[i][3]=='O' && input[i][4]=='O')
        {
            found=1;
            input[i][3]='+';
            input[i][4]='+';
            break;
        }
    }
    if(found==1)
    {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cout<<input[i][j];
            }
            cout<<endl;
        }
    }
    else
        cout<<"NO"<<endl;

}

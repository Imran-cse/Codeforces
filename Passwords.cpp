#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,i,j,best=0,worst=0,l;
    cin>>n>>l;
    string a,temp;
    string b[1000];
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int len = i;
    string password;
    cin>>password;
    for(j=0; j<len-1; j++)
    {
        for(k=j; k<len; k++)
        {
            if(b[j].length()>b[k].length())
            {
                temp = b[k];
                b[k] = b[j];
                b[j] = temp;
            }
        }
    }
    if(l<n)
    {
        for(i=0; i<len; i++)
        {
            worst++;
            if((i+1)%l == 0)
                worst = worst+5;
        }
        for(i=0; i<len; i++)
        {
            best++;
            if(b[i].length()==password.length())
            {
                break;
            }
            if((i+1)%l == 0)
                best = best+5;
        }
    }

    else
    {
        for(i=0; i<len; i++)
        {
            if(b[i].length()==password.length())
            {
                break;
            }
            best += 1;
            worst++;
        }
    }
    cout<<best<<" "<<worst<<endl;
}

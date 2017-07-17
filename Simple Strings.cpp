#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s,s_;
    cin>>s;
    int len,i,j;
    len = s.length();
    for(i=1; i<len-1; i++)
    {
        if(s[i]!=s[i-1])
            continue;
        else
        {
            for(j=i+1; j<len; j++)
            {
                if(s[i]!=s[j])
                    s[i]=s[j];
            }
        }
    }
    cout<<s;
}

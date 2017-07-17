#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,cap,new_s;
    cap = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,j,k;
    cin>>s;
    if(s.length() != 26)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(i=0; i<s.length()-1; i++)
        {
            for(j=i+1; j<s.length(); j++)
            {
                if(s[i]!=s[j] && s[i]!='?')
                {
                    new_s[i] = s[i];
                    continue;
                }
                else
                {
                    cout<<-1<<endl;
                    break;
                }
            }
        }
        if(i==s.length()-1)
        {
            for(i=0; i<s.length(); i++)
            {
                if(s[i]=='?')
            }
        }
    }
}

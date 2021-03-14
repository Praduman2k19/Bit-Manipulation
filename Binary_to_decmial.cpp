#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int num=0,f=1;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='1')
        num+=f;

        f=f*2;
    }
    cout<<num<<endl;
    return 0;
}
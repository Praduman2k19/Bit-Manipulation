#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=0,f;
    string s="";
    
    while(n>0)
    {
        f=n%2;
        if(f==1)
        s=to_string(1)+s;
        else
        s=to_string(0)+s;
        n=n/2;
    }
    cout<<s<<endl;
    return 0;
}
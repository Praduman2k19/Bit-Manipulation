#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=a;i<=b;i++)
    {
        int temp=i;
        while(temp>0)
        {
            count++;
            temp=temp&(temp-1);
        }
    }
    cout<<count<<endl;
    return 0;
}
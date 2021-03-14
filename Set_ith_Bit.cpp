#include<bits/stdc++.h>
using namespace std;
int mask(int n,int k)
{
    int a=1;
    a=a<<k;
    return a;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int m=mask(n,k);
    int ans=n|m;
    cout<<ans<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double x;
    cin>>x;
    double ans=1.0;
    long long nn=n;
    if(nn<0)
        nn=(-1)*nn;
    while (nn>0)
    {
        if(nn%2==0)
        {
            x=x*x;
            nn=nn/2;
        }
        else
        {
            ans=x*ans;
            nn=nn-1;
        }
    }
    if(n<0)
        ans=(double)(1.0)/(double)(ans);
    cout<<ans;
    return ans;
}
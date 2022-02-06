#include<bits/stdc++.h>
using namespace std;
int maxLen(int a[],int n)
{
    unordered_map<int,int>m;
    int maxi=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        if(sum==0)
            maxi=i+1;
        else
        {
            if(m.find(sum)!=m.end())
                maxi=max(maxi,i-m[sum]);
            else
            {
                m[sum]=i;
            }
        }
    }
    cout<<maxi;
    return maxi;
}
int main()
{
    int a[]={1,2,-2,4,-4};
    int n=sizeof(a)/sizeof(a[0]);
    return maxLen(a,n);
}

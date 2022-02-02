#include<bits/stdc++.h>
using namespace std;
void swap(vector<int> &arr,int n, int m)
{
    int temp = arr[n];
    arr[n] = arr[m];
    arr[m] = temp;
}
vector<int> res(vector <int>v,int n)
{
    int p1=0;
    int p2=0;
    int p3=n-1;
    while(p2<=p3)
    {
        if(v[p2]==0)
        {
            swap(v,p1,p2);
            p1++;
            p2++;
        }
        else if(v[p2]==2)
        {
            swap(v,p2,p3);
            p3--;
        }
        else if(v[p2]==1)
        {
            p2++;
        }
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int>ans;
    ans=res(v,n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
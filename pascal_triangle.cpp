#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++)
    {
        v[i].resize(i+1);
        v[i][0]=v[i][i]=1;
        for(int j=1;j<i;j++)
        {
            v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
    }
    cout<<"0"<<endl;
    return 0;
}

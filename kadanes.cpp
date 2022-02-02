#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maximum_sum=INT_MIN;
    int current_sum=0;
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        current_sum=current_sum+v[i];
        maximum_sum=max(current_sum,maximum_sum);
        if(current_sum<0)
            current_sum=0;
    }
    cout<<maximum_sum;
    return 0;
}

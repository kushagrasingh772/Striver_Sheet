#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    //we can use net_permutation() function of C++ to directly get the answer like : next_permutation(v,v+n);
    

    return 0;
}
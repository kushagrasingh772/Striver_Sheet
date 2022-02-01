#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                c1=i-1;
                while(c1>=0)
                {
                    if(a[c1][j]!=0)
                    {
                        a[c1][j]=-1;
                    }
                    c1--;
                }
                c1++;
                while(c1<n)
                {
                    if(a[c1][j]!=0)
                    {
                        a[c1][j]=-1;
                    }
                    c1++;
                }
                c2 = j - 1;
            while (c2 >= 0) {
          if (a[i][c2] != 0) {
            a[i][c2] = -1;

          }
          c2--;
        }
        c2 = j + 1;
        while (c2 < m) {
          if (a[i][c2] != 0) {
            a[i][c2] = -1;
          }
          c2++;
        }
        }
    }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        if (a[i][j] <= 0) {
            a[i][j] = 0;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
return 0;
}

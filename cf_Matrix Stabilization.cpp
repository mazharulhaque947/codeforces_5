#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {


                cin>>a[i][j];
            }

        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
               k=0;
               if(i>0){ if(a[i-1][j]>k){k=a[i-1][j];} }
               if(i<n-1){ if(a[i+1][j]>k){k=a[i+1][j];} }
               if(j>0){ if(a[i][j-1]>k){k=a[i][j-1];} }
               if(j<m-1){ if(a[i][j+1]>k){k=a[i][j+1];} }

                if(k<a[i][j]){ a[i][j]=k; }
            }

        }

         for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {

              cout<<a[i][j]<<" ";
            }
            cout<<"\n";

        }

    }
    return 0;
}

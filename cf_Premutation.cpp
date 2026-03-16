#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100],i,j,k,l,o,p,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++)
            {

                cin>>a[i][j];
            }
        }
        if(a[0][n-2]==a[1][n-2]){ o=a[0][n-2]; for(i=0;i<n;i++){  if(a[i][n-2]!=o){p=i;break;} } }
        else if(a[0][n-2]==a[2][n-2]){ o=a[0][n-2]; p=1; }
        else{ o=o=a[1][n-2];p=0; }

        for(i=0;i<n-1;i++){cout<<a[p][i]<<" "; }
        cout<<o<<"\n";
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[100];
    int b,n,m,i,j,k,l;
    cin>>n;
    for(i=0;i<n;i++){ cin>>a[i]; }
    k=1;
    l=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

           l=0;
           if( true ){ if(i>0){ if(a[i-1][j]=='o'){l++;} }
                             if(i<n-1){ if(a[i+1][j]=='o'){l++;} }
                             if(j>0){ if(a[i][j-1]=='o'){l++;} }
                             if(j<n-1){ if(a[i][j+1]=='o'){l++;} }
            }
                             if(l%2==1){k=0;}

        }
    }

    if(k==1){ cout<<"YES\n"; }
    else{ cout<<"NO\n"; }

    return 0;
}

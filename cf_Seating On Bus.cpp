#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][4],b[4],i,j,k,m,n,t,o,p;

    b[0]=1;b[1]=0;b[2]=2;b[3]=3;
    cin>>n>>m;
    k=1;
    o=0;
    i=0;
    for(i=0;i<n;i++){ for(j=0;j<4;j++){ a[i][b[j]]=-1; } }
    i=0;
    for( ;k<=m;k++){ if(k<=n*2){ a[i][o*3]=k;  cout<<i<<" "<<o<<"\n";  o=1-o; if(o==0){i++;} } if(k==2*n){i=0;}
           if(k>2*n){ a[i][2+o-1]=k;    cout<<i<<" "<<o<<"\n"; o=1-o; if(o==0){i++;} }
     }
    for(i=0;i<n;i++){ for(j=0;j<4;j++){ if(a[i][b[j]]!=-1){cout<<a[i][b[j]]<<" "; } }//cout<<"\n";
    }
    return 0;
}

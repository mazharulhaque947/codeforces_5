#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[50][50],i,k,l,m,n,j,o,p,s,q,u,v;
    cin>>n>>m;

    for(i=0;i<n;i++){  s=0;  for(j=0;j<m;j++){ cin>>p; s=s+p; a[i][j]=s; } }

    u=50*50;
    cin>>k>>l;
    o=l;
    if(k<o){o=k;}
    for(i=0;i<n-o+1;i++){

        for(j=0;j<m-o+1;j++){
             q=50*50;
            if(i+k-1<n&&j+l-1<m){q=0; for(v=0;v<k;v++){q+=a[i+v][j+l-1]; if(j>0){q=q-a[i+v][j-1];}   }}
            if(q<u){u=q;}
            if(i+l-1<n&&j+k-1<m){q=0; for(v=0;v<l;v++){q+=a[i+v][j+k-1]; if(j>0){q=q-a[i+v][j-1];}   }}
            if(q<u){u=q;}

        }


    }
    cout<<u<<"\n";
    return 0;
}

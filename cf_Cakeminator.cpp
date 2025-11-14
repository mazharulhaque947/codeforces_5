#include<bits/stdc++.h>

using namespace std;
int main()
{
    int c,n,r,o,p,i,j,k,l;
    char a[10][11];
    cin>>r>>c;
    k=l=0;
    for(i=0;i<r;i++){ cin>>a[i];o=1; for(j=0;j<c;j++){ if(a[i][j]=='S'){o=0; break;} }k=k+o; }
     for(i=0;i<c;i++){ o=1; for(j=0;j<r;j++){ if(a[j][i]=='S'){o=0; break;} }l=l+o; }
    p=k*l;

    k=k*c;
    l=l*r;
    p=k+l-p;


    cout<<p<<"\n";
    return 0;

}

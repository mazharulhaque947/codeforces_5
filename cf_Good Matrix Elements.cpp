#include<bits/stdc++.h>

using namespace std;
int va(int n, int i, int j){

    int p,o;
    o=n/2;
    p=0;
    if(i==j){ p=1; }
    else if( i==n-j-1 ){ p=1; }
    else if( i==o||j==o){p=1;}
    return p;
}
int main()
{
    int a[5][5],i,j,k,l,m,n;

    cin>>n;
    k=0;
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){ cin>>a[i][j]; k=k+va(n,i,j)*a[i][j]; }

    }
    cout<<k<<"\n";


    return 0;
}

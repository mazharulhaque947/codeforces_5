#include<bits/stdc++.h>

using namespace std;
int ss(int a[],int n,int m,int i){
    int v;
    v=a[i];
    if(i<n-m){ v=0; }
if(i+1<n){

 return v+ss(a,n,m,i+1);
}
else{ return v;}
}
int main()
{
    int a[100],i,j,k,m,n;

    cin>>n>>m;
    for(i=0;i<n;i++){cin>>a[i];}
    cout<<ss(a,n,m,0);
    return 0;
}

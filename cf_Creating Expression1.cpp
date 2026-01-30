#include<bits/stdc++.h>

using namespace std;

int pm(int a[],int n,int i,int x,int v){

   if(i==n){ if(v==x){ return 1; } else{ return 0; } }
   if(pm(a,n,i+1,x,v+a[i])==1){ return 1; }
   if(pm(a,n,i+1,x,v-a[i])==1){ return 1; }
   return 0;
}
int main()
{
    int a[100],n,i,j,x;
    cin>>n>>x;

    for(i=0;i<n;i++){cin>>a[i];}

    if(pm(a,n,0,x,0)==1){cout<<"YES\n";}
    else{cout<<"NO\n";}

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int ad(int a[],int n, int i){

   if(i<n){ return a[i]+ad(a,n,i+1); }
}

int main()
{
    int a[100],i,n,t;

    cin>>n;

    for(i=0;i<n;i++){cin>>a[i];}
    cout<<ad(a,n,0)<<"\n";
    return 0;
}

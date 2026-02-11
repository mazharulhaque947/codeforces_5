#include<bits/stdc++.h>

using namespace std;
int g(int a,int b){
   int c,n,d;
   c=a+b;
   d=c/2;
   n=b-d;
   return n;
}
int main()
{
    int a[100],i,j,k,l,m,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){cin>>a[i];}
        sort(a+1,a+n);
       // for(i=0;i<n;i++){cout<<a[i]<<" ";}cout<<"\n";
        for(i=0;i<n;i++){ if(a[0]<=a[i]){ a[0]=a[0]+g(a[0],a[i]); } }
        cout<<a[0]<<"\n";

    }

    return 0;
}

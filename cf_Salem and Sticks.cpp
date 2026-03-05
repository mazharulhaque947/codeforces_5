#include<bits/stdc++.h>
using namespace std;

int mm(int a[],int n,int t)
{

    int i,j,k,m;

    k=0;
    for(i=0;i<n;i++){
        if(t==a[i]){}
        else if(t<a[i]){ k=k+a[i]-t-1; }
        else{  k=k+t-a[i]-1;  }

    }
    return k;
}

int main()
{
    int a[102],i,j,k,l,m,n,b[1000],t;
    //cin>>t;
   // while(t--){

        cin>>n;
        for(i=0;i<n;i++){ cin>>b[i]; }

        for(i=0;i<102;i++){ a[i]=mm(b,n,i); }

       k=0;
       for(i=0;i<102;i++){ if(a[i]<a[k]){k=i;} }
        cout<<k<<" "<<a[k]<<"\n";
    //}

    return 0;
}

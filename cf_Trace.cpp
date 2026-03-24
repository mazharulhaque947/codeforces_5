#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592654

int main()
{
    int a[100],i,j,k,l,n,m,t;
    cin>>n;
    for(i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    k=0;
    for(i=0;i<n-(1-n%2);i++){
        if(i%2==0){ k=k+a[i]*a[i]; }
         else{ k=k-a[i]*a[i]; }

    }
    cout<<pi*k*1.0<<"\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,j,k,l,m,n,a[200],b[200];

    cin>>t;

    while(t--)
    {
        m=0;
        k=0;
        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]%2==0){ b[m]=a[i]; m++;}else{ if(a[i]>k){k=a[i];} } }
        if(m==n||m==0){ cout<<"0\n"; }
        else{

            sort(b,b+m);
            for(i=0;i<m;i++){ if(k<b[i]){ k=-1; break; } k=k+b[i]; }
            if(k==-1){  cout<<m+1<<"\n";}
            else{  cout<<m<<"\n"; }
        }

    }

    return 0;
}

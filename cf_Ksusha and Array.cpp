#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,k,l,m,n,o,p,j;

    cin>>n;
    k=0;
    for(i=0;i<n;i++){ cin>>a[i];if(a[i]%2==1){ k=1; } }
    m=*min_element(a,a+n);
    //cout<<m<<"\n";
    if(m==1){ cout<<1<<"\n"; }
    else if(m==2&&k==0){ cout<<2<<"\n"; }
    else{
            k=0;
            for(i=0;i<n;i++){ if(a[i]%m!=0){ k=1; break; } }

           if(k==0){ cout<<m<<"\n"; }
           else{ cout<<-1<<"\n"; }

    }
    return 0;
}

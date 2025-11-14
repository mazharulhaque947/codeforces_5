#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000],b[1000],i,k,l,n,o,p;

    cin>>n;
    k=0;
    l=0;
    o=0;
    for(i=0;i<n;i++){ cin>>a[i]>>b[i];  if(a[i]-b[i]){ k=1; break; }   }
    if(k){ cout<<"rated\n"; }
    else{

        sort(a,a+n);
         for(i=0;i<n;i++){  if(a[i]-b[n-1-i]){ k=1; break; }   }
         if(k){ cout<<"mabey\n"; }
         else{ cout<<"unrated\n"; }


    }

    return 0;

}

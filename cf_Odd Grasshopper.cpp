
#include<bits/stdc++.h>
using namespace  std;
int main()
{
    long long i,j,k,l,t;
    cin>>t;

    while(t--)
    {

        cin>>k>>l;

        if(k%2==1){  j=k/4;  if(l%4==0){ k+=0;  }else if(l%4==1){ k+=j*4+1; }else if(l%4==2){ k--; }else{ k=k-j*8-4; } }
        else{   if(l%2==1){ k-=(l+1)/2;  }else{ k+=(l/2); }    }
        cout<<k<<"\n";
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace  std;
int main()
{
    long long i,j,k,l,t,v;
    cin>>t;

    while(t--)
    {

        cin>>k>>l;
       v=k;
       if(v<0){v*=-1;}
        if(k%2==1){  j=l/4;  if(l%4==0){ k+=0;  }else if(l%4==1){ k+=l; }else if(l%4==2){ k--; }else{ k=k-l-1; } }
        else{   j=l/4;  if(l%4==0){ k+=0;  }else if(l%4==1){ k-=l; }else if(l%4==2){ k++; }else{ k=k+l+1; } }
        cout<<k<<"\n";
    }

    return 0;
}

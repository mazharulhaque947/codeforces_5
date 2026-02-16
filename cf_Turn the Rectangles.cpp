#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],i,j,k,m,n,t,o,p;
    cin>>n;
    t=1;
    for(i=0;i<n;i++){ cin>>a[i]>>b[i]; if(i==0){o=a[i]; if(o<b[i]){o=b[i];}  }
      else{ p=a[i]; if(p>b[i]){p=b[i];} if(p>o){t=0;}  if(a[i]+b[i]-p<=o){o=a[i]+b[i]-p;}else{ o=p; } } }
    if(t==1){cout<<"YES\n";}
    else{cout<<"NO\n";}
    return 0;
}

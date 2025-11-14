//zero sort

#include<bits/stdc++.h>

using namespace std;
int main()
{
int t,j,n,i,o,p,a[100000];
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++){ cin>>a[i];  }
vector<int>b(100000,0);

p=a[n-1];
o=0;

for(i=n-2;i>=0;i--){ if(a[i]>p){o=1;  break; } p=a[i];   }

if(o==1){ cout<<i<<" ";  for(;i>=0;i--){ b[a[i]-1]=1;  }
p=0;
for(i=0;i<100000;i++){ p=p+b[i];   }
cout<<p<<"\n";

}
else{ p=0;cout<<p<<"\n";   }
}

return 0;
}

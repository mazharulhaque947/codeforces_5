
#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,n,t,m;
string a;
cin>>t;
while(t--)
{
cin>>a;
n=a.length();
m=1;
k=0;
for(i=1;i<n;i++){m=i; if(a[i-1]==a[i]){ k=1;  break;}    }

if(n==1){
if(a[0]=='a'){  a.insert(0,"b");  }
else{ a.insert(0,"a");   }
}
else if(k==0){
    if(a[0]=='a'){  a.insert(0,"b");  }
else{ a.insert(0,"a");   }
}
else{


    if(a[m]=='a'){  a.insert(m,"b");  }
else{ a.insert(m,"a");   }

}
cout<<a<<"\n";
}
return 0;
}

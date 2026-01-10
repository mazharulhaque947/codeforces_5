
//A. Two Bases

#include<bits/stdc++.h>
#define int long long
using namespace std;

int pp(int a,int p)
{
int b=1;
while(a--){  b=b*p; }
return b;
}
int32_t main()
{
int n,b,c,x,y,t;

x=y=0;
cin>>n>>b;
while(n--){  cin>>c;x=x+c*pp(n,b)   ; }
cin>>n>>b;
while(n--){  cin>>c;y=y+c*pp(n,b)   ; }
//cout<<x<<" "<<y<<"\n";
if(x==y){cout<<"=\n";   }
else if(x>y){ cout<<">\n";   }
else{ cout<<"<\n";  }

return 0;
}

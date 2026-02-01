#include<bits/stdc++.h>
#define int long long

using namespace std;

int gcd(int a,int b);

int32_t main()
{  int a,b;
   cin>>a>>b;
  cout<<gcd(a,b)<<"\n";;
  cout<<a*b/gcd(a,b)<<"\n";
    return 0;
}

int gcd(int a,int b){
int c,p;
if(a>b){swap(a,b);}
c=b%a;
b=a;
a=c;
while(a!=0){
c=b%a;
b=a;
a=c;

}

return b;
}

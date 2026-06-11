
// 1102b

#include<bits/stdc++.h>
#define int long long
using namespace std;

int main()
{
int n,j,k,m,o,p,t;
cin>>t;
while(t--)
{
cin>>n;
o=n%12;
if(o==10){  cout<<"-1\n"; }
else{
o=n/12;
cout<<n-o*12<<" "<<o<<" \n";

}

}
return 0;
}

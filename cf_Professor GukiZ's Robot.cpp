
//Professor GukiZ's Robot
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,t,u,i,j,k;

cin>>t;
while(t--)
{
cin>>a>>b;
cin>>c>>d;
a=max(a,c)-min(a,c);
b=max(b,d)-min(b,d);

cout<<max(a,b)<<"\n";

}

return 0;

}

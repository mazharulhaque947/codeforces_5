#include<bits/stdc++.h>
using namespace std;

int r( int n ){
int i,j,k,m;
m=n;
stack<int>s,o;
k=0;
while(m>0){
    j=m%10;
    s.push(j);
    m=m/10;


}
while(!s.empty()){o.push(s.top()); s.pop();}
while(!o.empty()){ k=k*10+o.top(); o.pop();}
return k;
}

int main()
{
    int i,j,k,l,m,n,t;

        cin>>m>>n;
        //cout<<r(m)<<" \n";

         cout<<m+r(n)<<"\n";



    return 0;
}

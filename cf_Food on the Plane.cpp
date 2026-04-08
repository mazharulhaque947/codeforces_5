#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,l,m,n,o,p[6];
    string q;
     p[0]=3; p[1]=4; p[2]=5; p[3]=2; p[4]=1; p[5]=0;
    cin>>q;
    m=q[q.size()-1]-97;
   // cout<<m<<"\n";
    k=0;
    for(i=0;i<q.size()-1;i++){ k=10*k+q[i]-48; }
   // cout<<k<<"\n";
   l=(k-1)/4;
   j=(k-1)%4;
   j=j%2;
   cout<<l*16+j*7+p[m]+1<<"\n";

    return 0;
}

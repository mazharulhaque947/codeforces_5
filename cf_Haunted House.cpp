#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],k,l,m,n,o,p,i,j,t;
    string q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>q;
        k=-1;
        l=0;
        for(i=n-1;i>=0;i--){ if(k==-1&&q[i]=='0'){ cout<<"0 "; } else{ if(k==-1) {k=i;} if(q[i]=='0'){ a[l]=i; l++; } } }
        o=0;
        p=0;
        for(i=k;i>=0;i--){ if(o<l){ p=p+i-a[o]; cout<<p<<" "; o++;} else{ cout<<"-1 "; } }
        cout<<"\n";
    }

    return 0;
}

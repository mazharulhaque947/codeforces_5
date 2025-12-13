#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],b[100],c,i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]==2){ b[c]=i; c++;}  }
        if(c==0){ cout<<"1\n"; }
        else if(c%2==1){  cout<<"-1\n"; }
        else{ c=c/2; c--; cout<<b[c]+1<<"\n"; }

    }

    return 0;
}

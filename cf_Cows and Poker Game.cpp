#include<bits/stdc++.h>
using namespace std;

int main()
{
    string q;
    int t,i,j,k,l,m,n,o,p;


        cin>>n;
        cin>>q;
        k=l=m=0;
        for(i=0;i<n;i++){ if(q[i]=='A'){k++;}else if(q[i]=='I'){l++;}else{m++;} }
        if(l==1){ cout<<"1\n"; }
        else if(l>1){ cout<<"0\n"; }
        else { cout<<k<<"\n"; }

    return 0;
}

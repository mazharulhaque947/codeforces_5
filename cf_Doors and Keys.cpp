#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6],i,j,k,m,n,t;
    map<int,int>o={{103,0},{114,1},{98,2},{71,3},{82,4},{66,5}};
    string q;
    cin>>t;

    while(t--)
    {

        cin>>q;
        for(i=0;i<6;i++){ a[ o[q[i]] ]=i; }
        k=1;
        for(i=0;i<3;i++){if(a[i+3]<a[i]){  k=0; break; }   }
       // for(auto x:o){ cout<<x.first<<" \n"; }
       if(k){cout<<"YES\n";}
       else{cout<<"NO\n";}

    }

    return 0;
}

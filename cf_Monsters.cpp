#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],i,j,k,l,m,n,o,p,t,b[200];
    vector<pair<int,int>>mm;
    cin>>t;

    while(t--)
    {
        mm.clear();
        cin>>n>>k;
        for(i=0;i<n;i++){ cin>>a[i];o=a[i]/k; if(o*k!=a[i]){o++;}  b[i]=k; mm.push_back({o,n-i});}
        sort(mm.begin(),mm.end());
        for(auto x :mm){

            cout<<n-x.second+1<<" ";
        }
       cout<<"\n";
    }

    return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,j,k,l,m,n;
    cin>>n;
    vector<int>a;

    //for(auto &x : a){ cin>>x; }

    for(i=0;i<n;i++){  cin>>k; a.push_back(k);}

    sort(a.begin(),a.end());

    auto it = a.begin();
    auto rit = a.rbegin();
    //cout<<*it<<*rit;
    m=n/2;
    l=0;
    for(i=0;i<m;i++){ l=l+( *it+*rit )*( *it+*rit ) ; it++; rit++;}
    cout<<l<<"\n";
    return 0;
}

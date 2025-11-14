#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string b;
    vector<int>a(26,0);
    int i,k,l,m,n;
    cin>>n;
    cin>>b;

    for(i=0;i<n;i++){ a[b[i]-97]++; }
    k=0;
    sort(a.begin(),a.end());
    if(a[25]>=2){ cout<<"YES\n"; }
    else if(a[24]==0){  cout<<"YES\n";  }
    else{ cout<<"NO\n";  }

    return 0;
}

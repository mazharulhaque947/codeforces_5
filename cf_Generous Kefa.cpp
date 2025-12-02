#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n,i,j,k;
    vector<int>c(26);
    string z;
    bool y=true;
    cin>>a>>b;

    cin>>z;
    for(i=0;i<a;i++){ c[z[i]-97]++; }
    for(i=0;i<26;i++){ if(c[i]>b){y=false; break;} }

    if(y==true){ cout<<"YES\n";  }
    else{  cout<<"NO\n";  }
    return 0;
}

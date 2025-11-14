#include<bits/stdc++.h>

using namespace std;

int main()
{

    string a,b;
    bool c=false;

    cin>>a;
    for(int i=0;i<5;i++){ cin>>b; if(a[0]==b[0]||a[1]==b[1]){c= true;} }
    if(c){ cout<<"YES\n"; }
    else{ cout<<"NO\n"; }
    return 0;
}

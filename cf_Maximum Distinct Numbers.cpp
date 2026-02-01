
#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    int a,b,s,i,j,l,n;
    cin>>a;
    s=0;
    l=0;
    for(i=1;;i++){
        s=s+i;
        if(s<=a){l++;}
        else{break;}

    }
    cout<<l<<"\n";
    return 0;
}



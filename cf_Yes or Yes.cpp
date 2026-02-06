#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n,i,y,m,t;
    cin>>t;
    while(t--){
        cin>>a;
        n=a.size();
        y=m=0;
        for(i=0;i<n;i++){if(a[i]=='Y'){y++;}else{m++;}}
        if(y<=1){cout<<"YES\n";}
        else{cout<<"NO\n";}
        //if(count(a.begin(),a.end(),'Y')*2<m){cout<<"YES\n";}
        //else{cout<<"NO\n";}
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int main()
{

    int i,j,k,l,m,n,t;
    string s;

    cin>>t;

    while(t--){

        cin>>s;
        n=s.size();
        m=0;

        for(i=0;i<n;i++){  if( (s[i]-48)%2==0 ){ m=1; break; }  }
        if( (s[n-1]-48)%2==0 ){  cout<<"0\n"; }
        else if( (s[0]-48)%2==0 ){ cout<<"1\n"; }
        else if(m==1){   cout<<"2\n"; }

     else { cout<<"-1\n"; }
    }

    return 0;
}

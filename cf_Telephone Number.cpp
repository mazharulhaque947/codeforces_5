#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    string a;
    cin>>t;
    while(t--)
    {

        cin>>n;
        cin>>a;
       // cout<<*(a.end()-1);
        if(n<11){ cout<<"NO\n"; }
        else{


            m=0;
            m=count(a.begin(),a.end()-10,'8');
            if(m==0){ cout<<"NO\n";  }
            else{ cout<<"YES\n";  }
        }

    }

    return 0;
}

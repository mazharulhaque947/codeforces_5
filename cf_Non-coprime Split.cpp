#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,m,n,l,o,p;
    cin>>t;
    while(t--)
    {

        cin>>l>>k;
        if(k>=4&&k%2==0){ cout<<2<<" "<<k-2; }
        else if(k>=5&&k-l>=1){m=k/2; m=m*2; cout<<2<<" "<<m-2;  }
        else if(k-l==0){

            o=-1;
            p=sqrt(k);
            for(i=2;i<=p;i++){ if(k%i==0){  o=i; break; } }

            if(o==-1){ cout<<o; }
            else{ cout<<o<<" "<<k-o;  }

        }
        else{

            cout<<"-1";

        }

        cout<<"\n";
    }

    return 0;
}

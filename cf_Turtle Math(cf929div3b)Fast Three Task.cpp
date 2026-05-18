#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],s,p,i,k,l,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        s=0;
        k=l=0;
        for(i=0;i<n;i++){cin>>a[i]; s=s+a[i]; if(a[i]%3==1){k++;} if(a[i]%3==2){l++;} }

        if(s%3==0){cout<<"0\n";}
        else{
            if(s%3==1){
            if(l>=0){ cout<<"1\n"; }
            else{ cout<<"2\n"; }
            }
            else{

                 if(k>=0){ cout<<"1\n"; }
            else{ cout<<"2\n"; }
            }
        }
    }


    return 0;
}

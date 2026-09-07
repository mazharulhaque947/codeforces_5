#include<bits/stdc++.h>
using namespace std;


int main()
{

    int a[200],b[200],c[200],d[200],s,i,j,k,l,m,n,t;
    string q;

    cin>>t;

    while(t--)
    {

        cin>>q;
        n=q.size();

        s=0;
        if(q[0]=='1'){s=1;}

        m=0;
        l=0;
        k=0;

        for(i=0;i<n;i++){

            if(q[i]==q[k]){m++;}
            else{  a[l]=k; b[l]=m; m=1; k=i; l++; }

            if(i==n-1){ a[l]=k; b[l]=m; m=1; k=i; l++;  }

        }

        m=1;

        for(i=0;i<l;i++){

            if(b[i]>1){

                if(m==1){
                if(i%2!=s){  m=0; }

                }
                else{

                      if(i%2==s){  m=-1; break; }

                }

            }


        }

        if(m==-1){ cout<<"NO\n"; }

        else{ cout<<"YES\n"; }
    }

    return 0;
}

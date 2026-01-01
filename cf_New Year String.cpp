#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,n,m,t,u,v;
    string a;

    cin>>t;
    while(t--)
    {

        cin>>n;
        cin>>a;

        k=l=0;

        for(i=0;i<n-3;){
            if(a[i]=='2'&&a[i+1]=='0'&&a[i+2]=='2'&&a[i+3]=='5'){ k++; i=i+3;}
            else if(a[i]=='2'&&a[i+1]=='0'&&a[i+2]=='2'&&a[i+3]=='6'){ l++;  i=i+3; }
            i++;
        }
        u=k;
        v=l;
        /*
        if(l>0){cout<<"YES\n";}
        else if(k==0){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }
        */

         l=4;
         for(i=0;i<n-3;i++){ k=0; if(a[i]!='2'){k++;} if(a[i+1]!='0'){k++;} if(a[i+2]!='2'){k++;} if(a[i+3]!='6'){k++;} if(k<l){l=k;} }
         if(u==0){l=0;}
         cout<<l<<"\n";
    }

    return 0;
}

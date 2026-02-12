#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],b[3],i,j,k,l,m,n,t;
    string q;
    cin>>t;
    while(t--)
    {
        //q=get();
        for(i=0;i<3;i++)
        {

            cin>>a[i]>>b[i];
        }
        m=0;
         for(i=0;i<3;i++)
        {
           k=a[(i+1)%3]; l=a[(i+2)%3];
           if( a[i]>k&& a[i]<l ||a[i]>l&& a[i]<k ){ m=1; break; }

           k=b[(i+1)%3]; l=b[(i+2)%3];
           if( b[i]>k&& b[i]<l ||b[i]>l&& b[i]<k ){ m=1; break; }
        }

        if(m==1){cout<<"YES\n";}
        else{ cout<<"NO\n"; }

    }
    return 0;
}

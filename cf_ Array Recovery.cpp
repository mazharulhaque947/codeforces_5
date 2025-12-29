#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a[100],i,j,n,m,k,t,y,u,v;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(i=0;i<n;i++){cin>>a[i];}
        y=1;
        j=a[0];

        for(i=1;i<n;i++){
            u=j+a[i];
            v=-a[i]+j;
           // cout<<u<<" "<<v<<"\n";
            if( !( (v<0) ^ (u<0) ) && !( (u>=0&&v>=0)&& u==v )  ){ y=0;break; }
            if(u>v){swap(u,v);}
           // if(u!=v&&u>=0&&v>=0){ y=0;break;  }
            //if(u<0&&v<0){ y=0;break;  }
            a[i]=(u>v)?u:v;
            j=a[i];

        }

        if(y==1){ for(i=0;i<n;i++){cout<<a[i]<<" ";} }
        else{ cout<<"-1"; }

        cout<<"\n";

    }
    return 0;
}

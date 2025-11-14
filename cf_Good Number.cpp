#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long i,j,k,l,m,n,o,p,u,v,x,y;

    cin>>n>>k;
    m=y=0;
    for(i=0;i<n;i++){
            cin>>p;
            //a.clear();
             vector<int>a(10,0);
            v=x=0;
            while(p>0){o=p%10; p=p/10; v++;  a[o]++;  }
            //cout<<"\n";
            u=0;
            for(j=0;j<=k;j++){ // cout<<a[i]<<" ";
            if(a[j]==0){x=1; break;}}
             for(j=k+1;j<=9;j++){ // cout<<a[i]<<" ";
            if(a[j]!=0){x=1; break;}}

            if(x==1){ }
            else{ y++;
            }
            //cout<<"  uuu  "<<y;

    }
   // cout<<y;
 cout<<y<<"\n";
    return 0;
}

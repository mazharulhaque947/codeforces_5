#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,f,m,y,i,j,k,l;
    string a;
    cin>>y;
    while(y--)
    {

        cin>>a;
        m=a.length();
        f=t=n=0;
        for(i=0;i<m;i++){ if(a[i]=='F'){f++;} if(a[i]=='N'){n++;} if(a[i]=='T'){t++;} }
        for(i=0;i<t;i++){  cout<<"T"; }
         for(i=0;i<n;i++){  cout<<"N"; }
          for(i=0;i<f;i++){  cout<<"F"; }

          for(i=0;i<m;i++){  if(a[i]=='N'||a[i]=='T'||a[i]=='F'){ } else{ cout<<a[i]; } }
          cout<<"\n";

    }

    return 0;
}

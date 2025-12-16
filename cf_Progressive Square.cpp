#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,o,p,l,m,n,t,q,b[2500];
    vector<int>a;
    cin>>t;
    while(t--)
    {
        a.clear();
        cin>>n>>l>>m;
        //cout<<a.size()<<"\n";
        for(i=0;i<n*n;i++){ cin>>o; a.push_back(o); }
        //cout<<a.size()<<"\n";
        sort(a.begin(),a.end());
        o=a[0];
        k=1;
        for(i=0;i<n;i++){
           for(j=0;j<n;j++){

            // if( binary_search(a.begin(),a.end(),o+i*l+j*m)==false){ k=0; break;}
              b[i*n+j]=o+i*l+j*m;

           }
          if(k==0){break;}
        }
        k=1;
        sort(b,b+(n*n));
         for(i=0;i<n*n;i++){ if(b[i]!=a[i]){ k=0; break; } }
       if(k==0){cout<<"NO\n";}
       else{ cout<<"YES\n"; }

    }


    return 0;
}

#include<bits/stdc++.h>
#define int long long
using namespace std;

int pp(vector<pair<int,int>>&p,int a,int n)
{

    int l,k,m,o,i,j,v,u;
    l=0;
    k=n-1;
    o=-1;
    while(l<=k){

        m=l+(k-l)/2;

        if(p[m].first==a){ o=m; break; }
        else if(p[m].first<a){l=m+1;}
        else{ k=m-1; }

    }
    if(o==-1){return o;}
     l=0;
    k=o;
    while(l<k){

        m=l+(k-l)/2;

        if(p[m].first==a){ k=m; }

        else{ l=m+1; }
       // if(l==k){  }

    }
    return p[k].second;

}

int32_t main()
{
    int a[200],b[200],i,j,k,l,m,n,r,t;
    vector<pair<int,int>>p;
   // cout<<p[0].first<<"\n";
     //cout<<p[1].second<<"\n";
    cin>>t;
    while(t--)
    {
        cin>>n;
        r=0;
        m=0;
        p.clear();
        for(i=0;i<n;i++)
        {

            cin>>a[i];
            p.push_back({a[i],i});
           // p[i].first=a[i];
            //p[i].second=i;
        }
        sort(p.begin(),p.end());
       // for(i=0;i<n;i++){ cout<<p[i].first<<" "<<p[i].second<<"\n"; }

        for(i=0;i<n;i++){
            m=m+a[i];
            //for(j=0;j<=i;j++){ if(a[j]*2==m){r++;} }
            l=m/2;
            // cout<<l<<"  ============ \n";
            if(l*2==m){

                l=pp(p,l,n);
              //  cout<<l<<"    ppppppppppppp  \n";
                if(l!=-1&&l<=i){r++;}

            }


        }

        cout<<r<<"\n";
    }

    return 0;
}

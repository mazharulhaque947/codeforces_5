#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],i,j,k,l,n,o,p,t,b[200],d[200],m[200],ll;
    vector<pair<int,int>>mm,vv;
    cin>>t;

    while(t--)
    {
        mm.clear();
        cin>>n>>k;
        for(i=0;i<n;i++){ cin>>a[i];o=a[i]/k; if(o*k!=a[i]){o++;}  b[i]=k; mm.push_back({o,i});}
        sort(mm.begin(),mm.end());

        l=0;
        i=0;
        o=mm[0].first;
        for(auto x :mm){

            //cout<<x.second+1<<" ";

            if(x.first!=o){ d[l]=i; l++;  }
            if(i==n-1){  d[l]=n; l++;  }
            i++;
        }
           o=0;

        for(i=0;i<l;i++){  //cout<<d[i]<<" ";
             vv.clear();
            for(j=o;j<d[i];j++){
                 // cout<<a[mm[j].second]<<"==\n";
                   vv.push_back( {a[mm[j].second ],n-mm[j].second} );

            }
               o=d[i];
            sort(vv.begin(),vv.end());
            ll=0;

            for( auto y :vv){

                m[ll]=n-y.second+1;
                ll++;
            }

            for(j=0;j<ll;j++){ cout<<m[ll-1-j]<<" "; }

        }
       cout<<"\n";
    }

    return 0;
}


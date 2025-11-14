
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,int>>a;
    map<int,int>m;
    int i,j,k,n,l,t;
    cin>>n;
    for(i=0;i<n;i++){ cin>>k>>l; a.push_back({k,l});   }


         //for( auto x:a){ cout<<x.first<<" "<<x.second<<"\n"; }
    sort(a.begin(),a.end(),
         [](pair<int,int>u, pair<int,int>v){
            if(u.first==v.first){  return u.second<v.second;  }
            else{ return u.first<v.first; }
         }
         );

         for( auto x:a){ if(m[x.first]<x.second){m[x.first]=x.second;}
         // cout<<x.first<<" "<<x.second<<"\n";
          }
         k=0;
         l=m[a[0].first];
         for(auto y :m){ if(l>y.second){k=1; break;}l=y.second;  }
         if(k==1){ cout<<"Happy Alex\n"; }
         else{ cout<<"Poor Alex\n";  }
    return 0;
}

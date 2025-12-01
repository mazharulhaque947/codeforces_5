#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,t,o,p;
    set<int>a,b,c;

    cin>>t;
    while(t--)
    {
        a.clear();
        b.clear();
        c.clear();
         for( auto x:a){ cout<<x<<"\n"; }
        cin>>n;
        for(i=0;i<n;i++){  cin>>k>>l;

           if(k==1){ a.insert(l);  }
           else if(k==2){  b.insert(l);  }
           else{  c.insert(l);   }

         }
         m=o=p=0;
         if(a.size()!=0){
         p=*a.rbegin();}
         if(b.size()!=0){
                o=*b.begin();
         }
         if(o<p){m=0;}
         else{
         m=o-p+1;
          for( auto x:c){ if(x>=p&&x<=o){m--;} }
         }
          cout<<m<<"\n";
    }

    return 0;
}

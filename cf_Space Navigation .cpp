#include<bits/stdc++.h>

using namespace std;

void man()
{
    int u,d,r,l,n,x,y;
    bool t;
    string a;
    cin>>x>>y;
    cin>>a;

    u=count(a.begin(),a.end(),'U');
    //cout<<u;
    d=count(a.begin(),a.end(),'D');
   l=count(a.begin(),a.end(),'L');
    r=count(a.begin(),a.end(),'R');

   // cout<<u<<" "<<d<<" "<<l<<" "<<r<<" ";
    t= false;
    if(x>=0){
        if(r>=x){t=true;}
        else{t=false;}
    }
    else{
         if(l>=-1*x){t=true;}
        else{t=false;}

    }
    if(t){
     if(y>=0){
        if(u>=y){t=true;}
        else{t=false;}
    }
    else{
         if(d>=-1*y){t=true;}
        else{t=false;}

    }

    }
    (t)?cout<<"YES\n":cout<<"NO\n";

}
int main()
{

  int t;
  cin>>t;

  while(t--){


  man();
  }
    return 0;
}

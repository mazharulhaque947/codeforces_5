#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,n,p,t,j,m;

      cin>>t;
      while(t--){
             vector<int>q(50,0);
       cin>>n;
      for(i=0;i<n;i++){  cin>>m; q[m-1]++;}
       p=0;
       for(i=n;i>0;i--){  if(q[i-1]!=0){ if(q[i-1]%2==1){p=1; break;} } }
      if(p==1){ cout<<"YES\n"; }
      else{  cout<<"NO\n";}
      }
    return 0;
}





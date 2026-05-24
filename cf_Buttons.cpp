
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,t,o,p,a;

   cin>>t;

   while(t--)
   {
       cin>>n>>k>>a;
      if(n>=k+a+1){ cout<<"First\n";  }
      else if(n+a<=k){  cout<<"Second\n"; }
      else if(n==k){
        if(a%2==1){ cout<<"First\n";  }
      else {  cout<<"Second\n"; }

      }
      else if(n<k){
        a=a-(k-n);
           if(a%2==1){ cout<<"First\n";  }
      else {  cout<<"Second\n"; }

      }
      else{
           a=a-(n-k);
           if(a%2==0){ cout<<"First\n";  }
      else {  cout<<"Second\n"; }


      }

   }
    return 0;
}



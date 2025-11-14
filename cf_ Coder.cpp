#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,k,j,l,n,o,p;
    cin>>n;
     p=0;

      for(i=0;i<n;i++){
      o=i%2;
      for(j=0;j<n;j++){ if(j%2==o){  p++;} }



    }
     cout<<p<<"\n";
    for(i=0;i<n;i++){
      o=i%2;
      for(j=0;j<n;j++){ if(j%2==o){ cout<<"C"; p++;}else{ cout<<"."; } }
      cout<<"\n";


    }


    return 0;
}

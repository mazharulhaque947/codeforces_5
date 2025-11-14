#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,n,i,j,k,l;
    set<int>s;
    cin>>t;
    while(t--){

      cin>>n;
      for(i=0;i<n;i++){cin>>k; s.insert(k);}

       k=s.size();
       k=k*2-1;
       cout<<k<<"\n";
        s.clear();
    }

    return 0;
}

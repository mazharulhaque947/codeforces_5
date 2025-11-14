#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
long long ff(long long x){

x=(x-1)*x*0.5;
return x;
}
int main()
{
    long long a[100],b[100],i,j,k,n,o,p,t;
    cin>>t;
    set<int>s;
    map<int,int>m;
    while(t--)
    {
        s.clear();
        m.clear();
        cin>>n;
        for(i=0;i<n;i++){ cin>>o; o=o-i+1;
         m[o]++; s.insert(o); }
        k=0;
        for(int x : s){if(m[x]>1){k=k+ff(m[x]);}}

        cout<<k<<"\n";



    }

    return 5;
}

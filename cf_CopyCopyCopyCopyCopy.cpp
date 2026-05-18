
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>q;
    int i,j,k,n,l,t;
    cin>>t;
    while(t--)
    {   q.clear();
        cin>>n;
        for(i=0;i<n;i++){ cin>>k; q.insert(k); }
        cout<<q.size()<<"\n";
    }
    return 0;
}

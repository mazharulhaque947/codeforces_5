#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    string q;
    cin>>n;
    cin>>q;
    k=count(q.begin(),q.end(),'8');
    cout<<min(n/11,k)<<"\n";
    return 0;
}

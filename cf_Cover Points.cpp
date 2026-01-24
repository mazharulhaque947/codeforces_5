#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,a,n,i;
    cin>>n;
    a=0;
    for(i=0;i<n;i++){cin>>x>>y;if(x+y>a){a=x+y;}}
    cout<<a<<"\n";
    return 0;
}

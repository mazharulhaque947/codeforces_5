#include<bits/stdc++.h>
using namespace std;
int mm(int a, int b)
{
    int c;
    c=a-b; if(c<0){c*=-1;}
    return min( c,9-c  );

}
int main()
{
    string q,w;

    int n,i,j,k,l;

    cin>>n;

    cin>>q;
    cin>>w;

    k=0;

    for(i=0;i<n;i++){ k+=mm(q[i]-48,w[i]-48); }
    cout<<k<<"\n";
    return 0;
}

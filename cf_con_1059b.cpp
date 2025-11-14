#include<bits/stdc++.h>

using namespace std;
int ccc(string a,int n){
 int i,k=0;
 for(i=0;i<n;i++){ if(a[i]=='1'){k++;} }

return k;
}
void man()
{
    string a;

    int i,n,o,k,l,b[10];
    cin>>n;

    cin>>a;
    k=0;
    for(i=0;i<n;i++){ if(a[i]=='1'){ b[k]=i+1; k++; } }
    cout<<ccc(a,n)<<"\n";
     cout<<k<<"\n";
    for(i=0;i<k;i++){ cout<<b[i]<<" "; }
    cout<<"\n";

}

int main()
{

    int t;
    cin>>t;
    while(t--){man();}

}

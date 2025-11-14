#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;

    int i,j,k,m,n,l,o;
    char b[100];
    cin>>a;
    n=a.size();
    m=(n+1)/2;

    b[0]=a[m-1];

    k=m;
    l=m-2   ;
    o=0;
    for(i=1;i<n;i++){
        if(o==0){b[i]=a[k]; k++;}
        else{  b[i]=a[l]; l--; }

      o=1-o;
    }
    b[n]='\0';

    cout<<b<<"\n";

    return 0;
}

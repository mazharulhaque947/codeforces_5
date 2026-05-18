#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[10];
    int n,k,m,t,i;
    cin>>n;
    for(i=0;i<n;i++){

        cin>>a[i];

        m=count(a[i].begin(),a[i].end(),'A');

        if(m>5-m){ cout<<"A\n"; }
        else{  cout<<"B\n";   }

    }
    return 0;
}

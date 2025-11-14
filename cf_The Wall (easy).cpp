#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,r,c,t;
    vector<int>b;
    string a[100];
    cin>>r>>c;
    for(i=0;i<r;i++){cin>>a[i];}
    m=k=0;
    if(a[r-1][0]=='B'){k=m=1;}
    l=0;
    for(i=0;i<c;i++){
        t=0;
       if(a[r-1][i]=='B'){t=1;}

        if(t==m){l++;}
        else{ b.push_back(l); l=1;m=t;  }

    }
    b.push_back(l);
    l=b.size();
    if(l%2==0){l=l/2;}
    else {

      l=l/2+k;

    }
    cout<<l<<"\n";
    return 0;
}

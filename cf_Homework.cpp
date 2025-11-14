#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[11],b[11],c[11],d[21];
    int i,j,k,l,m,n,o,p,t;
    cin>>t;

    while(t--)
    {   for(i=0;i<21;i++){ d[i]='\0'; }
        cin>>n;
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>c;

        k=0;
        for(i=0;i<m;i++){ if(c[i]=='V'){k++;} }
        l=k+n;
        for(i=k;i<l;i++){ d[i]=a[i-k]; }
        k--;
        for(i=0;i<m;i++){ if(c[i]=='V'){ d[k]=b[i]; k--; }
                          else{ d[l]=b[i]; l++;  } }

       d[l]='\n';
       cout<<d;

    }


    return 0;
}

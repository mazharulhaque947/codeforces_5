#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a[4],i,j,k,l,m,n;
    char b[50][51];
    cin>>n>>m;
    for(i=0;i<n;i++){ cin>>b[i]; }
    a[0]=n;
    a[1]=0;
    a[2]=m;
    a[3]=0;
    for(i=0;i<n;i++){ for(j=0;j<m;j++){ if(b[i][j]=='*'){ if(a[0]>i){ a[0]=i;}
     if(a[1]<i){ a[1]=i;}
     if(a[2]>j){ a[2]=j;}
     if(a[3]<j){ a[3]=j;}
     }  }  }

    for( i=a[0];i<=a[1];i++ ){  for( j=a[2];j<=a[3];j++ ){ cout<<b[i][j];}     cout<<"\n";  }

    return 0;
}


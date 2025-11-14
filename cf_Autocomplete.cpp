#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char a[100][101],b[101];
    string s[100],c;
    int i,j,k,l,m,n,d[100];
    cin>>c;
    cin>>n;
    for(i=0;i<n;i++){ cin>>s[i];
            if(s[i].size()<c.size()){d[i]=0;}
            else{
               k=0;
               for(j=0;j<c.size();j++){if(s[i][j]!=c[j]){k=1;break;}}
               if(k==0){d[i]=1;}
               else{d[i]=0;}

            }  }
    l=-1;
    for(i=0;i<n;i++){ k=0; if(d[i]==1){ for(j=0;j<n;j++){ if(d[j]==1){ if(s[i].compare(s[j])>0){k=1;break;} }  } }
                            else{k=1;}
                      if(k==0){l=i;}}
                      if(l!=-1){ cout<<s[l]<<"\n";}
                      else{ cout<<c<<"\n"; }
    return 0;
}

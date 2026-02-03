
#include<bits/stdc++.h>

using namespace std;


int main()
{    int n,i,m,o,p,j,b[1000],k,t;

    string a;
   cin>>t;
   while(t--){
    cin>>a;
    n=a.size();

    if(a[0]=='0'){cout<<"-1\n";}
    else{
       k=1;

       for(;k<n;k++){ if(a[k]!='0'){ break;} }
        if(k==n){cout<<"-1\n";  }
        else if(k>n-k){ cout<<"-1\n";   }
        else{
            o=0;
            p=k;
            if(n-k<p){p=n-k;}
            if(k<n-k){ for(i=0;i<k;i++){ cout<<a[i]; } cout<<" ";  for(i=k;i<n;i++){ cout<<a[i]; } cout<<"\n"; }
           else{ for(i=0;i<k;i++){ if(a[i]<a[i+k]){o=1; break;}else if(a[i+k]<a[i]){o=-1; break;} }
            if(o==1){for(i=0;i<k;i++){ cout<<a[i]; } cout<<" ";  for(i=k;i<n;i++){ cout<<a[i]; } cout<<"\n";}
              else{ cout<<"-1\n";   }
           }

        }



    }
   }
    return 0;
}




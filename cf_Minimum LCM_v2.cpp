
#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

int main()
{   int i,j,k,l,n,t,o,p,v;
o=100000;
    unordered_map<int ,int> m;
    m[0]=1;
    m[1]=1;
    p=sqrt(o);
    for(i=2;i<=p;i++){   if(m[i]==0)    {for(j=i*i;j<=o;j+=i){ if(m[j]==0)
        { m[j]=i;}  }     }}
    cin>>t;
    while(t--)
    {

        cin>>k;
        if(k<=o){
            if(m[k]==0){   cout<<1<<" "<<k-1<<"\n";}
            else{      cout<<k/m[k]<<" "<<k*(m[k]-1)/m[k]<<"\n";    }

        }
        else{
           v=sqrt(k);
           l=-1;
           for(i=2;i<=v;i++){ if(m[i]==0&&k%i==0){ l=i; break; } }
           if(l==-1){  cout<<1<<" "<<i-1<<"\n"; }
           else{

              cout<<k/i<<" "<<(k/i)*(i-1)<<"\n";
           }


        }

      }

 //for(i=0;i<=(k);i++){ cout<<i<<" "<<m[i]<<"\n"; }
    return 0;
}

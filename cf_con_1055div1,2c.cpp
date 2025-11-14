
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,n,i,j,k,o,p,u,v,l,a[250],b[250][2],q,c[250];
    cin>>t;
    while(t--){

       cin>>n>>q;
       k=l=0;
       j=0;
       o=1;

       for(i=0;i<n;i++){ cin>>a[i]; if(a[i]==1){k++;}else{l++;} b[i][0]=k; b[i][1]=l;
       if(a[i]==a[j]){c[i]=o; }else{ o++; j=i; c[i]=o;
       }
      // cout<<c[i]<<"\n";
       }

        for(i=0;i<q;i++){cin>>l>>k;
         if(k-l+1>0&&(k-l+1)%3==0){

                 u=b[k-1][0];
                 if(l>1){u=u-b[l-2][0];}
                 //else{u--;}
                 v=b[k-1][1];
                 if(l>1){v=v-b[l-2][1];}
                 //else{v--;}
                 cout<<u<<"  "<<v<<" ";
            if(u%3!=0||v%3!=0){cout<<-1<<"\n";}

            else{
                 p=c[k-1]-c[l-1]+1;
                 //if(l>1){p=p-c[l-2];}
                 //else{p--;}
                 //p++;
                if(p==k-l+1){ cout<<(((k-l+1)/3)+1)<<"\n"; }
                else{ cout<<(((k-l+1)/3)+0)<<"\n"; }

            }

         }
         else{  cout<<-1<<"\n"; }


        }

    }

    return 0;
}

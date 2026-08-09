#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[50],i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n;
        l=0;
        for(i=0;i<n;i++){ cin>>a[i];

           if(i>0){

               k=max(a[i],a[i-1])/min(a[i],a[i-1]);

               m=1;j=0;
               if(k>=2&&k*min(a[i],a[i-1])!=max(a[i],a[i-1])){k++;}
               while(m*2<k){
                    //cout<<i<<"==\n";
                m*=2;j++;
               }
               l+=j;

             //  if(k>=2 //&&k*min(a[i],a[i-1])!=max(a[i],a[i-1])

                 // ){ l+=k-2; }
           }

         }

 cout<<l<<"\n";


    }


    return 0;
}

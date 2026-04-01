#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,t,n,m,o,p;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){

            cin>>a[i];
        }

        if(n%2==1){cout<<"Mike\n";}
        else{
            l=0;
            k=1;

            for(i=0;i<n;i+=2){ if(a[i]<=a[l]){ l=i;  } }
             for(i=1;i<n;i+=2){ if(a[i]<=a[k]){ k=i;  } }

           if(l<k){
             // if(a[l]<=a[k]){
                    cout<<"Joe\n";
              //}
             // else { cout<<"Mike\n"; }
           }
           else{
            // if(a[l]<a[k]){
                    cout<<"Joe\n";
             //}
             // else { cout<<"Mike\n"; }

           }
        }

    }

    return 0;
}

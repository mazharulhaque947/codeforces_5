#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,n,t,a[100];

    cin>>t;
    while(t--)
    {

        cin>>n;
         vector<int>m(101,0);
        for(i=0;i<n;i++){ cin>>a[i]; m[a[i]]++; }
        k=0;
        for(i=0;i<=100;i++){ if(m[i]!=0){
            if(m[i]==i){   }
            else if(m[i]>i){ k=k+m[i]-i; }
            else{ k+=m[i]; }

        }
        }

        cout<<k<<"\n";

    }

    return 0;
}

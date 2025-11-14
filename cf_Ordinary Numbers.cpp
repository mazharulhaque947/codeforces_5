#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long i,k,l,m,n,s,t,o,p;
    cin>>t;
    while(t--)
    {
        cin>>n;

        if(n<10){ cout<<n<<"\n"; }
        else{
        k=2;
        m=0;
        while(1){


                for(i=1;i<10;i++){
                   p=k;
                   s=0;
                l=0;
                   while(p>0){ s=s*10+i; p--; }
                 //  cout<<s<<"\n";
                    if(s<=n){ m++;}
                    if(s>=n){  l=1; break;}


                }



            if(l==1){break;}
            k++;

        }
        cout<<9+m<<"\n";
        }

    }

    return 0;
}

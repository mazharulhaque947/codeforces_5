#include<bits/stdc++.h>
using namespace std;

int main()
{
    string q="aeiou";
    int i,j,k,l,m,n,o,p,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        m=n/5;
        p=n%5;

        if(m>0){
            for(i=0;i<5;i++)
            {

                o=0;
                if(i<p){o=1;}
                for(j=0;j<o+m;j++){cout<<q[i];}

            }
        }
        else{

            for(i=0;i<n;i++){cout<<q[i];}
        }
        cout<<"\n";
    }


    return 0;
}

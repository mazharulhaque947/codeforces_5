#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int i,j,t,k,l,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        for(i=0;i<n;i++){

            if(a[i]=='U'){  cout<<"D"; }
            else if(a[i]=='D'){ cout<<"U"; }
            else{ cout<<a[i]; }

        }

            cout<<"\n";

    }

    return 0;
}

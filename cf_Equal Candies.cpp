#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,t,s;

    cin>>t;

    while(t--)
    {
        cin>>n;
        k=0;
        s=0;
        for(i=0;i<n;i++){ cin>>a[i]; s=s+a[i]; if(a[i]<a[k]){k=i;} }

        cout<<s-a[k]*n<<"\n";


    }

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[30],b[30],c[30],d[30],i,n,m,o,p,t,q[4];

    cin>>t;
    m=t;
    while(t--){

        cin>>n;
        q[0]=q[1]=q[2]=q[3]=0;

        for(i=0;i<n;i++){  cin>>a[i]>>b[i]>>c[i]>>d[i];
                           if(a[i]>a[q[0]]){q[0]=i;}
                            if(b[i]>b[q[1]]){q[1]=i;}
                             if(c[i]<c[q[2]]){q[2]=i;}
                              if(d[i]<d[q[3]]){q[3]=i;}}
       o=c[q[2]]-a[q[0]];
       p=d[q[3]]-b[q[1]];
       if(o>0&&p>0){ cout<<"case #"<<m-t<<": "<<o*p<<"\n"; }
       else{ cout<<"case #"<<m-t<<": "<<0<<"\n"; }
    }


    return 0;
}

//Anya and 1100

// how this worked ?? a[200] need a[200000] and fixing a[] by a[i] but he loop is run by j,,, in line 32,42  (counting m value)
/*

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,t,a[200],q,v,p;
    string b;

    cin>>t;

    while(t--)
    {
        cin>>b;
        n=b.length();
        //cout<<" n= "<<n<<"\n";
        l=0;
        for(i=0;i<n-3;i++){ if(b[i]=='1'&&b[i+1]=='1'&&b[i+2]=='0'&&b[i+3]=='0'){a[i]=1;l++;}else{a[i]=0;} }
        // cout<<" l= "<<l<<"\n";
        cin>>q;
        for(i=0;i<q;i++){
            cin>>p>>v;
           if(n<=3){ cout<<"NO\n"; }
           else{
                m=0;
                for(j=p-4;j<p;j++){

                    if(j>=0 &&j+3<n&& b[j]=='1'&&b[j+1]=='1'&&b[j+2]=='0'&&b[j+3]=='0'){a[j]=1;m++;}else{a[i]=0;}


                }
                 //cout<<" m= "<<m<<"\n";
                b[p-1]='0'+v;
               // cout<<b<<"\n";
                k=0;
                for(j=p-4;j<p;j++){

                    if(j>=0 &&j+3<n&& b[j]=='1'&&b[j+1]=='1'&&b[j+2]=='0'&&b[j+3]=='0'){a[j]=1;k++;}else{a[i]=0;}

                }
                 //cout<<" k= "<<k<<"\n";

               l=l-(m-k);
              // cout<<" l= "<<l<<"\n";
                if(l>0){cout<<"YES\n";}
                else{ cout<<"NO\n"; }
           }
        }
    }

    return 0;
}

*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,t,a[200],q,v,p;
    string b;

    cin>>t;

    while(t--)
    {
        cin>>b;
        n=b.length();
        //cout<<" n= "<<n<<"\n";
        l=0;
        for(i=0;i<n-3;i++){ if(b[i]=='1'&&b[i+1]=='1'&&b[i+2]=='0'&&b[i+3]=='0'){a[i]=1;l++;}else{a[i]=0;} }
        // cout<<" l= "<<l<<"\n";
        cin>>q;
        for(i=0;i<q;i++){
            cin>>p>>v;
           if(n<=3){ cout<<"NO\n"; }
           else{
                m=0;
                for(j=p-4;j<p;j++){

                    if(j>=0 &&j+3<n&& b[j]=='1'&&b[j+1]=='1'&&b[j+2]=='0'&&b[j+3]=='0'){a[j]=1;m++;}else{a[j]=0;}


                }
                 //cout<<" m= "<<m<<"\n";
                b[p-1]='0'+v;
               // cout<<b<<"\n";
                k=0;
                for(j=p-4;j<p;j++){

                    if(j>=0 &&j+3<n&& b[j]=='1'&&b[j+1]=='1'&&b[j+2]=='0'&&b[j+3]=='0'){a[j]=1;k++;}else{a[j]=0;}

                }
                 //cout<<" k= "<<k<<"\n";

               l=l-(m-k);
              // cout<<" l= "<<l<<"\n";
                if(l>0){cout<<"YES\n";}
                else{ cout<<"NO\n"; }
           }
        }
    }

    return 0;
}


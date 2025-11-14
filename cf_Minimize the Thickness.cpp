#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],b[100],i,k,j,l,o,p,m,n,q,w,r,t,s,u,v,f,y;

    cin>>t;
    while(t--){

        cin>>n;

        o=0;
        for(i=0;i<n;i++){ cin>>a[i]; o+=a[i]; b[i]=o;  }

        for(i=0;i<n;i++){ cout<<a[i]<<" "; }
        cout<<"\n";
        for(i=0;i<n;i++){ cout<<b[i]<<" "; }
        cout<<"\n";
        m=0;
        for(i=0;i<n;i++){

           s=b[i];
           u=i+1;
           l=i;
           k=n-1;
           y=1;
           f=0;
            cout<<i<<" "<<s<<" "<<u<<" "<<l<<" "<<k<<" "<<"\n";
           while(l<n-1){

            if(s>b[k]-b[l]){ y=0;  f=1; cout<<"no pooo\n"; break;  }
            else if(s==b[k]-b[l]){  if(u<k-l){u=k-l;}  l=n-1; f=1; cout<<"yyyyyyyyyyyyyyy\n";  break;  }
            else{
                w=k;
                q=l;
                v=0;
                while(1)
                {
                  p=q+(w-q)/2;
                  cout<<"in bin girst"<<q<<" "<<w<<" "<<p<<" "<<l<<" "<<k<<" "<<"\n";
                  if(s==b[p]-b[l]){v=1; if(u<p-l){u=p-l;} l=p;   break; }
                  else if(  s>b[p]-b[l] ){ q=p; }
                  else if( s<b[p]-b[l]  ) { w=p; }
                    cout<<"in bin end"<<q<<" "<<w<<" "<<p<<" "<<l<<" "<<k<<" "<<"\n";
                  if(w-q<=1){ break;}
                }

                if(v){  }
                else{y=0; break ; }


            }

            //if(f==1||y==0){break;}


           }

           if(m==0&&y==1){m++; r=u;}
           else{ if(y==1&&r>u){ r=u;  }  }
            //if(f==1&&y==1){break;}
            // if(f==1){break;}


        }

     cout<<r<<"\n";
    }


    return 0;
}

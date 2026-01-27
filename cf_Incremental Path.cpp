#include<bits/stdc++.h>

using namespace std;

int main(){

int a[100],b[100],c[100],i,j,k,l,m,n,t,d[100],u,v,o,p;
string q;
cin>>t;
while(t--){

  cin>>n>>o;
  cin>>q;
  l=k=m=0;
  for(i=0;i<o;i++){
    cin>>a[i];

    if(m+a[k]==a[i]){m++;}
    else{ c[l]=m;b[l]=k; k=i; m=1; l++; }

    if(i==o-1){ c[l]=m;b[l]=k; l++;  }
  }

    for(i=0;i<l;i++){ cout<<b[i]<<" "<<c[i]<<"\n"; }

    k=m=u=0;
    p=1;
    for(i=0;i<n;i++){
      cout<<i<<" "<<u<<" "<<p<<"\n";
       if(k<l){
            cout<<"=====> running in  white ";
            if(p<a[b[k]]){
                 cout<<"=====> p<<< a[]  ";
               if(q[i]=='A'){
                   cout<<"=====> AAA ";
                   p++;
                   if(p<c[i]+a[b[i]]&&p>=a[b[i]]){ cout<<"=====> from w to b \n"; }
                   else{ d[u]=p; u++; cout<<"=====> w to w \n"; }
               }
               else{
                   cout<<"=====> BBB ";
                    p++;
                if(a[b[k]]!=p){ cout<<"=====> in w \n";
               d[u]=p; u++;}
               else{ cout<<"=====> in b \n";
                    p=c[k]+a[b[k]];
                d[u]=p; u++;
              // k++;

               }
               }

            }
            else{
               cout<<"=====> running in black ";
                if(q[i]=='A'){
                        cout<<"=====> AA  ";
                    p++;
                    if(p==c[k]+a[b[k]]){ d[u]=p; u++;cout<<"=====> B to W so record \n"; }
                    else{ cout<<"=====> b to b so no record \n"; }
                    //d[u]=p; u++;
                }
                else{
                        cout<<"=====> BB  so must go to white \n ";

                    p=c[k]+a[b[k]];
                    d[u]=p; u++;
                }

            }


         if(k>=l||p>c[k]-1+a[b[k]]){ cout<<" ..................... k must change \n"; k++;}

       }
       else{
            cout<<"=====> running out side \n";
           p++;
           d[u]=p; u++;
       }

    }

    for(i=0;i<u;i++){cout<<d[i]<<" ";} cout<<"\n";
   cout<<o+u<<"\n";
    p=v=0;
    while(true){

        if(u==p&&v==o){break;}
        if(u==p){ cout<<a[v]<<" "; v++; }
        else if(v==o){  cout<<d[p]<<" "; p++;  }
        else if( a[v]<=d[u] ){  cout<<a[v]<<" "; v++;  }
        else{  cout<<d[p]<<" "; p++;   }

    }
    cout<<"\n";
}
return 0;
}

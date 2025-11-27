/*
codeforces round 1062 div 4  E. khba Loves to Sleep!

first attempt
  checks for each point if we set a door how long it would take to  rich him at lowest time to him

  uses map of link list

  5 ( means 5 unit of time  will be taken by this positions -->) 1,5,8
  8 ''                     ''                          ,,,....

   then we print of location with hieght time required


*/
#include<bits/stdc++.h>

using namespace std;
typedef struct lin{

  int a;
  struct lin * n;

} nl;

typedef struct dat{

  int l=0;
  int v;
  nl * m = NULL;


} pt;

void sv( pt **x, int v ){

    nl * w = (nl*)malloc( sizeof(nl) );
    w->a=v;
   // cout<<((*x)->m)<<"\n";
    w->n=((*x)->m);
    ((*x)->m)=w;

}

pt * sn(int v  ,int p){
    pt * w = (pt*)malloc( sizeof(pt) );
    w->v=v;
    w->l=1;
    w->m=NULL;
    sv(&w,p);

    return w;
}
void cv(pt ** x, int v,int p){


    (*x)->v=v;
    (*x)->l=((*x)->l)+1;

    sv(&(*x),p);

}
void mn()
{

    map<int,pt*>m;
   /* pt * w = (pt*)malloc( sizeof(pt) );
    w->v=4;
    w->l=2;
    w->m=NULL;
    sv(&w,9);
    sv(&w,100);
     sv(&w,10);
    nl* r;
    r=w->m;
    while(  r!=NULL ){  cout<<r->a<<" "; r=r->n;  }
*/

int j,i,n,v,k,l,x,a[200];
/*
for(i=0;i<10;i+=2){ if(m.find(a[i])==m.end()){
        m[a[i]]=sn(a[i],a[i+1]);
}

                   else{  cv(  &m[a[i]],a[i],a[i+1]);  }

}
k=3;

*/

// to see

/*
auto ii=m.begin();
for(; ii!=m.end();ii++){

    nl* q=ii->second->m;
    while(q!=NULL){

        cout<<q->a<<" ";
        q=q->n;
    }

    cout<<"\n";

}


 //   to seee ^^^

 */


 /*
   // m[4]=5;
    //m[8]=7;
    //if(m.find(2)!=m.end()){ cout<<"YES"; }
   // sort(m.begin(),m.end(),greater<int>);
   auto it = m.rbegin();
   for( ; it!= m.rend();it++){
        cout<<k<<" <<<\n";
      cout<<"  ----   "<<it->first<<"\n";
       if(k> it->second->l){
                nl* u=it->second->m;
      // l=0;
       for(j=0;j<it->second->l;j++){  cout<<(u->a)<<" ... ";u=u->n; }
      // while(l<k&&l<it->second->l){  cout<<(u->a)<<" ... ";u=u->n; l++;  }
       //k=k-l;
        k=k-it->second->l;
         }
        else{

           nl* u=it->second->m;
           l=0;
      // for(j=0;j<it->second->l;j++){  cout<<(u->a)<<" ... ";u=u->n; }
       //while(l<k&&l<it->second->l){  cout<<(u->a)<<" ... ";u=u->n; l++;  }
       //k=k-l;
       for(j=0;j<k;j++){  cout<<(u->a)<<" ==== ";u=u->n; }
          k=0;

        }
         if(k==0){ break;}
      //  cout<<it->first;
   }

   */

cin>>n>>k>>x;

for(i=0;i<n;i++){ cin>>a[i]; }
sort(a,a+n);

for(i=0;i<a[0];i++){
    v=a[0]-i;
     if(m.find(v)==m.end()){
        m[v]=sn(v,i);
}

                   else{  cv(  &m[v],v,i);  }


}


for(i=a[n-1];i<=x;i++){
    v=i-a[n-1];
     if(m.find(v)==m.end()){
        m[v]=sn(v,i);
}

                   else{  cv(  &m[v],v,i);  }


}

for(i=0;i<n-1;i++)
{

    for(j=a[i];j<a[i+1];j++){
        v=j-a[i];
        if(v>a[i+1]-j){  v=a[i+1]-j; }

         if(m.find(v)==m.end()){
        m[v]=sn(v,i);
}

                   else{  cv(  &m[v],v,i);  }


    }



}


auto ii=m.begin();
for(; ii!=m.end();ii++){
   cout<<ii->first<<"  ";
    nl* q=ii->second->m;
    while(q!=NULL){

        cout<<q->a<<" ";
        q=q->n;
    }

    cout<<"\n";

}



    auto it = m.rbegin();
   for( ; it!= m.rend();it++){
      //  cout<<k<<" <<<\n";
     // cout<<"  ----   "<<it->first<<"\n";
       if(k> it->second->l){
             nl* u=it->second->m;

             for(j=0;j<it->second->l;j++){  cout<<(u->a)<<" ";u=u->n; }

              k=k-it->second->l;
        }
        else{

              nl* u=it->second->m;


              for(j=0;j<k;j++){  cout<<(u->a)<<" ";u=u->n; }
              k=0;

        }

         if(k==0){ break;}

   }

  cout<<"\n";
   // for(auto x: m){ cout<<x.first<<" "; }
}
int main(){
    int t;
    cin>>t;
    while(t--){

        mn();
    }
    return 0;
}

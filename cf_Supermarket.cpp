#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    double a,b;
    cin>>n>>m;

    double mn = 1e18;

    for (int i=0;i<n;i++) {

        cin>>a>>b;
        mn = min(mn, a/b);
    }

printf("%.6lf\n",mn*m);

    return 0;
}

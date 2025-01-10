#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int S, X, Y, Z;
    cin>>S>>X>>Y>>Z;
    int space = S-X-Y;
    if(space>=Z) cout<<0<<endl;
    else if(space<Z && space+X<Z && space+Y<Z) cout<<2<<endl;
    else cout<<1<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

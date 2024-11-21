#include <bits/stdc++.h>
using namespace std;

void Paa() {
    int N, X, Y;
    cin>>N;
    cin>>X>>Y;
    if(X*Y<N) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

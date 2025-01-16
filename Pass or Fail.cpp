#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, X, P;
    cin>>N>>X>>P;
    if(3*X-N+X<P) cout<<"FAIL"<<endl;
    else cout<<"PASS"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

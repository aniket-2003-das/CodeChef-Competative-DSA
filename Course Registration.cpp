#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int K, N, M;
    cin>>N>>M;
    cin>>K;
    if(M-K>=N) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
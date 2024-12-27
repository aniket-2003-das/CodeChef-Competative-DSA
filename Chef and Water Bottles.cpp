#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, X, K;
    cin>>N>>X>>K;
    if((K/X)<1) cout<<0<<endl;
    else if(K/X>N) cout<<N<<endl;
    else cout<<K/X<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

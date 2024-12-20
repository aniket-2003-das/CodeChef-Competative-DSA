#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, M;
    cin>>N>>M;
    if(N<M) cout<<N<<endl;
    else cout<<2*N-M<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

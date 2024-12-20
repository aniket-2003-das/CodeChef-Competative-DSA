#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, X;
    cin>>N>>X;
    cout<<min(N-X, X)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

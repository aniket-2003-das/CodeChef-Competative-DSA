#include <bits/stdc++.h>
using namespace std;

void Paa() {
    int A, B, C, D;
    cin>>A>>B;
    cin>>C>>D;
    if(A>C || B>D) cout<<"IMPOSSIBLE"<<endl;
    else cout<<"POSSIBLE"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

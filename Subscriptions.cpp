#include <bits/stdc++.h>
using namespace std;

void Paa() {
    int N, X;
    cin>>N;
    cin>>X;
    if(N%6 != 0) cout<<(N/6 + 1)*X<<endl;
    else cout<<(N/6)*X<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

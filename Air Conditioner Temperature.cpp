#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B, C;
    cin>>A>>B>>C;
    int r1 = max(A, C);
    if(B>=r1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

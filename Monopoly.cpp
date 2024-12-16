#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int P, Q, R, S;
    cin>>P>>Q>>R>>S;
    int sum = P+Q+R+S;
    if(2*P>sum || 2*Q>sum || 2*R>sum || 2*S>sum) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

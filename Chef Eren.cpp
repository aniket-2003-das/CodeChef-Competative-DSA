#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, A, B;
    cin>>N>>A>>B;
    if(N%2==0) cout<<(N*(A+B))/2<<endl;
    else cout<<A*(N/2) + B*(N/2 + 1)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

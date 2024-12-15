#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, X;
    cin>>N>>X;
    if(N<X) cout<<0<<endl;
    else if((N-X)%4==0) cout<<(N-X)/4<<endl;
    else cout<<((N-X)/4) + 1<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

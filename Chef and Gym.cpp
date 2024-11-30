#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B, C;
    cin>>A>>B>>C;
    if(C>=A+B) cout<<2<<endl;
    else if(C>=A) cout<<1<<endl;
    else cout<<0<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

#include <bits/stdc++.h>
using namespace std;

void Paa() {
    int X;
    cin>>X;
    if(X<=70) cout<<0<<endl;
    else if(X>70 && X<=100) cout<<500<<endl;
    else cout<<2000<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
#include <bits/stdc++.h>
using namespace std;

void Paa() {
    double A, X, B, Y;
    cin>>A>>X>>B>>Y;
    double a=A/X;
    double b=B/Y;
    if(a>b) cout<<"Alice"<<endl;
    else if(a<b) cout<<"Bob"<<endl;
    else cout<<"Equal"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

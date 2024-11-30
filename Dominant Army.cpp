#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y, Z;
    cin>>X>>Y>>Z;
    if(X>Y+Z || Y>Z+X || Z>X+Y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}


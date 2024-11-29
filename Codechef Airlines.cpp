#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y, Z;
    cin>>X>>Y>>Z;
    if(10*X>=Y) cout<<Z*Y<<endl;
    else cout<<10*X*Z<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

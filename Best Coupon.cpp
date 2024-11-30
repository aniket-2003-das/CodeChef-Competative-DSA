#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X;
    cin>>X;
    if(0.9*X<X-100) cout<<0.1*X<<endl;
    else cout<<100<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

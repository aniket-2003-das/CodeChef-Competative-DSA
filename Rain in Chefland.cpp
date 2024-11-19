#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X;
    cin>>X;
    if(X>=3 && X<7) cout<<"MODERATE"<<endl;
    if(X>=7) cout<<"HEAVY"<<endl;
    if(X<3) cout<<"LIGHT"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

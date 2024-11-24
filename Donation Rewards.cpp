#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X;
    cin>>X;
    if(X<4) cout<<"BRONZE"<<endl;
	else if(X>6) cout<<"GOLD"<<endl;
	else cout<<"SILVER"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
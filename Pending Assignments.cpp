#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y, Z;
    cin>>X>>Y;
    cin>>Z;
    if(X*Y<=(Z*24*60)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
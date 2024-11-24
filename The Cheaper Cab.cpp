#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y;
    cin>>X>>Y;
    if(X<Y) cout<<"FIRST"<<endl;
    else if(X==Y) cout<<"aNy"<<endl;
    else cout<<"SECOND"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X;
    cin>>X;
    X = X+2;
    if(X%3==0) cout<<"HUGE"<<endl;
    else if((X+1)%3==0) cout<<"NORMAL"<<endl;
    else cout<<"SMALL"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

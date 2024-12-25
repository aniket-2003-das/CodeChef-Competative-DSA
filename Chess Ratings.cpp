#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y;
    cin>>X>>Y;
    if((Y-X)%8==0) cout<<(Y-X)/8<<endl;
    else if((Y-X)<=0) cout<<0<<endl;
    else cout<<(Y-X)/8 + 1<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y, D;
    cin>>X>>Y>>D;
    if(abs(X-Y)<=D) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

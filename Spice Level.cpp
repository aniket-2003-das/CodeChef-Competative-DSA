#include <bits/stdc++.h>
using namespace std;
void Paa(){
    int X;
    cin>>X;
    if(X<4) cout<<"MILD"<<endl;
    else if(X>=7) cout<<"HOT"<<endl;
    else cout<<"MEDIUM"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

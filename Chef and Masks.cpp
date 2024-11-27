#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y;
    cin>>X>>Y;
    if(X*100>=10*Y) cout<<"Cloth"<<endl;
    else cout<<"Disposable"<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}

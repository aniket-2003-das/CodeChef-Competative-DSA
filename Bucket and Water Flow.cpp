#include <bits/stdc++.h>
using namespace std;
void Paa(){
    int W, X, Y, Z;
    cin>>W>>X>>Y>>Z;
    if(X<W+Y*Z) cout<<"overFlow"<<endl;
    else if(X==W+Y*Z) cout<<"filled"<<endl;
    else cout<<"Unfilled"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

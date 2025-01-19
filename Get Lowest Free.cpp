#include <bits/stdc++.h>
using namespace std;

void Paa(){
    double X, Y, Z;
    cin>>X>>Y>>Z;
    cout<<(X+Y+Z) - min({X, Y, Z})<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X1, X2, Y1, Y2;
    cin>>X1>>Y1>>X2>>Y2;
    cout<<min(X1+Y1, X2+Y2)<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}

#include <bits/stdc++.h>
using namespace std;

void Paa() {
    int X, Y;
    cin>>X>>Y;
    cout<<max(1500-2*X-4*(X+Y), 1500-2*(X+Y)-4*Y)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

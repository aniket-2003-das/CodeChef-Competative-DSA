#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y, Z;
    cin>>X>>Y>>Z;
    cout<<max(0, Z-Y/X)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

#include <bits/stdc++.h>
using namespace std;
void Paa(){
    int W, X, Y, Z;
    cin>>W>>X>>Y>>Z;
    cout<<W+Z*X-Z*Y<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}


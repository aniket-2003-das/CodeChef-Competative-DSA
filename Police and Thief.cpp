#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y;
    cin>>X>>Y;
    int z = Y-X;
    if(z<0) z*=-1;
    cout<<z<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

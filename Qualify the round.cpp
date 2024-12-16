#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, A, B;
    cin>>X>>A>>B;
    if(A+2*B>=X) cout<<"Qualify"<<endl;
    else cout<<"NotQualify"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
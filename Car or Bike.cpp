#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, X;
    cin>>N>>X;
    if(N<X) cout<<"BIKE"<<endl;
    else if(N>X) cout<<"CAR"<<endl;
    else cout<<"SAME"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}


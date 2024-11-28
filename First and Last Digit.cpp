#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    int a = N%10;
    int b;
    while(N>0){
        b = N;
        N/=10;
    }
    cout<<a+b<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

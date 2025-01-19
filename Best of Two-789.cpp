#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A1, A2, A3, B1, B2, B3;
    cin>>A1>>A2>>A3>>B1>>B2>>B3;
    
    int Sum_A = A1+A2+A3-min({A1, A2, A3});
    int Sum_B = B1+B2+B3-min({B1, B2, B3});
    
    if(Sum_B>Sum_A) cout<<"Bob"<<endl;
    else if(Sum_B<Sum_A) cout<<"Alice"<<endl;
    else cout<<"Tie"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int L, B;
    cin>>L>>B;
    
    for(int i=1; i<35; i++){
        if(L-i*i<0) {
            cout<<"Bob"<<endl;
            break;
        }
        if(B-i*i-i<0){
            cout<<"Limak"<<endl;
            break;
        }
    }
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}

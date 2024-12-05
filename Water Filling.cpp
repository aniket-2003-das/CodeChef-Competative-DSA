#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int B1, B2, B3;
    cin>>B1>>B2>>B3;
    int cnt=0;
    if(B1==0) cnt++;
    if(B2==0) cnt++;
    if(B3==0) cnt++;
    if(cnt>=2) cout<<"Water filling time"<<endl; 
    else cout<<"Not now"<<endl;
    
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    if(N<=10) cout<<"Lower Double"<<endl;
    else if(N>10 && N<=15) cout<<"Lower Single"<<endl;
    else if(N>15 && N<=25) cout<<"Upper Double"<<endl; 
    else cout<<"Upper Single"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

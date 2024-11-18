#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X,Y;
    cin>>X>>Y;
    if (Y>X) cout<<"PROFIT"<<endl;
    else if (Y==X) cout<<"NEUTRAL"<<endl;
    else cout<<"LOSS"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y;
    cin>>X>>Y;
    
    if(X%10==0) X/=10;
    else X = X/10 + 1;
    if(Y%10==0) Y/=10;
    else Y = Y/10 + 1;
    
    if(X<=Y) cout<<Y-X<<endl;
    else if(X>Y) cout<<X-Y<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
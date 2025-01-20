#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y;
    cin>>X>>Y;
    if(X==Y || X>Y) cout<<0<<endl;
    else if(Y%X==0) cout<<Y/X - 1<<endl;
    else cout<<Y/X<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}

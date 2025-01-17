#include <bits/stdc++.h>
using namespace std;

void Paa(){
    double X, Y, R;
    cin>>X>>Y>>R;
    cout<<ceil((X+(R/30))/Y)<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}

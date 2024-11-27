#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y, Z;
    cin>>X>>Y>>Z;
    int ans = max({X, Y, Z});
    
    if(ans==X) cout<<"Setter"<<endl;
    else if(ans==Y) cout<<"Tester"<<endl;
    else cout<<"Editorialist"<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}

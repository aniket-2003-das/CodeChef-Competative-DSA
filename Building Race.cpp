#include <bits/stdc++.h>
using namespace std;

void Paa(){
    double A, B, X, Y;
    cin>>A>>B>>X>>Y;
    
    if(A/X>B/Y) cout<<"Chefina"<<endl;
    else if(A/X<B/Y) cout<<"Chef"<<endl;
    else cout<<"Both"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

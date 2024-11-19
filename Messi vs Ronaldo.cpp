#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int A, B, X, Y;
	cin>>A>>B>>X>>Y;
	int m = 2*A + B;
	int r = 2*X + Y;
	if(m>r) cout<<"Messi"<<endl;
	if(m<r) cout<<"Ronaldo"<<endl;
	if(m==r) cout<<"Equal"<<endl;
}

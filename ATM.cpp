#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X;
    double Y;
    cin>>X>>Y;
    if(X+0.50<=Y && X%5==0) cout<<Y-X-0.50<<endl;
    else cout<<Y<<endl;
}

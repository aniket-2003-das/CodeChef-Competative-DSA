#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int X;
    cin>>X;
    if(X<3) cout<<"GOLD"<<endl;
    else if(X>=3 && X<6) cout<<"SILVER"<<endl;
    else cout<<"BRONZE"<<endl;
}

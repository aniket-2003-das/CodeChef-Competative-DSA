#include <bits/stdc++.h>
using namespace std;

void Paa(){
    double X, Y, H;
    cin>>H>>X>>Y;
    cout<<ceil((H-Y)/X) + 1<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

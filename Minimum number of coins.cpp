#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X;
    cin>>X;
    if(X%5!=0) cout<<-1<<endl;
    else{
        double temp = X;
        cout<<ceil(temp/10)<<endl;
    }
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}

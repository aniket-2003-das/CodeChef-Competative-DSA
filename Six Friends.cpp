#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y;
    cin>>X>>Y;
    cout<<min(3*X, 2*Y)<<endl;
}

int main() {
    int T;
    cin>>T;
    while(T--) Paa();
}

#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    int START38 = 0;
    int LTIME108 = 0;
    
    while(N--){
        string input;
        cin>>input;
        if(input=="START38") START38++;
        else if(input=="LTIME108") LTIME108++;
    }
    
    // for (int i=0; i<N; ++i) {
    //     string input;
    //     cin>>input;
        
    //     if(input=="START38") START38++;
    //     else if(input=="LTIME108") LTIME108++;
    // }
    cout<<START38<<" "<<LTIME108<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}


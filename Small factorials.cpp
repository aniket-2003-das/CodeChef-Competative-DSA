#include <bits/stdc++.h>
using namespace std;

// Function to multiply two large numbers represented as strings
string Paa(string num1, int num2) {
    int carry=0;
    string result="";

    for (int i=num1.size()-1; i>=0; i--) {
        int product = (num1[i]-'0')*num2 + carry;
        carry = product/10;
        result += (product%10) + '0';
    }

    while (carry) {
        result += (carry % 10) + '0';
        carry /= 10;
    }
    reverse(result.begin(), result.end());
    return result;
}


int main() {
    int T;
    cin>>T;
    while (T--) {
        int N;
        cin>>N;
        string factorial="1";
        for (int i=2; i<=N; i++) {
            factorial = Paa(factorial, i);
        }
        cout<<factorial<<endl;
    }
}

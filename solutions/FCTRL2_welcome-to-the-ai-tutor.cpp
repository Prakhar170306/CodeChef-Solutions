/*
Problem: Welcome to the  AI Tutor
Problem Code: FCTRL2
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FCTRL2
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int n;
cin >> n;

vector<int> fact;
fact.push_back(1);   // Initially 1! = 1

for (int i = 2; i <= n; i++) {
int carry = 0;

for (int j = 0; j < fact.size(); j++) {
int prod = fact[j] * i + carry;
fact[j] = prod % 10;
carry = prod / 10;
}

while (carry) {
fact.push_back(carry % 10);
carry /= 10;
}
}

// Print factorial in reverse
for (int i = fact.size() - 1; i >= 0; i--)
cout << fact[i];

cout << endl;
}

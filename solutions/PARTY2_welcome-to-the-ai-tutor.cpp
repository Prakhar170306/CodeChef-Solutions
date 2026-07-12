/*
Problem: Welcome to the  AI Tutor
Problem Code: PARTY2
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARTY2
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X, K;
cin >> N >> X >> K;

if (N * X <= K) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
}

return 0;
}

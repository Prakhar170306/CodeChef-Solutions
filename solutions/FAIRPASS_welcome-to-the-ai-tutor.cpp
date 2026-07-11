/*
Problem: Welcome to the  AI Tutor
Problem Code: FAIRPASS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FAIRPASS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, K;
cin >> N >> K;

if (K >= N + 1) {
cout << "YES\n";
} else {
cout << "NO\n";
}
}

return 0;
}

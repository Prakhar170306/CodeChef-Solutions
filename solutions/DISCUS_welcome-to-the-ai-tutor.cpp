/*
Problem: Welcome to the  AI Tutor
Problem Code: DISCUS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DISCUS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C;
cin >> A >> B >> C;

cout << max({A, B, C}) << endl;
}

return 0;
}

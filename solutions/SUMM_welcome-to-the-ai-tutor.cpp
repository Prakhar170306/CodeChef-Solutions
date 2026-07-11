/*
Problem: Welcome to the  AI Tutor
Problem Code: SUMM
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SUMM
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C;
cin >> A >> B >> C;

if (A + B == C) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
}

return 0;
}

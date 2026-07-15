/*
Problem: Welcome to the  AI Tutor
Problem Code: PARLIAMENT
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARLIAMENT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X;
cin >> N >> X;

if (2 * X >= N) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
}

return 0;
}

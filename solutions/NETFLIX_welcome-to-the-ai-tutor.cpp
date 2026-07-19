/*
Problem: Welcome to the  AI Tutor
Problem Code: NETFLIX
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/NETFLIX
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C, X;
cin >> A >> B >> C >> X;

if (A + B >= X || A + C >= X || B + C >= X)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}

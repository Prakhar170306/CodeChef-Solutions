/*
Problem: Welcome to the  AI Tutor
Problem Code: CHEFCHOCO
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEFCHOCO
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int C, X, Y;
cin >> C >> X >> Y;

cout << (C - X) * Y << endl;
}

return 0;
}

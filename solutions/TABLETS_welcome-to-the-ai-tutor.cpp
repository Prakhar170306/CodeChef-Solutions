/*
Problem: Welcome to the  AI Tutor
Problem Code: TABLETS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TABLETS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (Y >= 3 * X) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
}

return 0;
}

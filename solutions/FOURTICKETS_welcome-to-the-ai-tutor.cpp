/*
Problem: Welcome to the  AI Tutor
Problem Code: FOURTICKETS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FOURTICKETS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X;
cin >> X;

if (4 * X <= 1000) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
}

return 0;
}

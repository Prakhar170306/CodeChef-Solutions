/*
Problem: Welcome to the  AI Tutor
Problem Code: READPAGES
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/READPAGES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X, Y;
cin >> N >> X >> Y;

if (X * Y >= N) {
cout << "YES\n";
} else {
cout << "NO\n";
}
}

return 0;
}

/*
Problem: Welcome to the  AI Tutor
Problem Code: AUCTION
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUCTION
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C;
cin >> A >> B >> C;

if (A > B && A > C) {
cout << "Alice\n";
}
else if (B > A && B > C) {
cout << "Bob\n";
}
else {
cout << "Charlie\n";
}
}

return 0;
}

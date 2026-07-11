/*
Problem: Welcome to the  AI Tutor
Problem Code: FINE
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FINE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X;
cin >> X;

if (X <= 70) {
cout << 0 << '\n';
}
else if (X <= 100) {
cout << 500 << '\n';
}
else {
cout << 2000 << '\n';
}
}

return 0;
}

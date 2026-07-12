/*
Problem: Welcome to the  AI Tutor
Problem Code: CARTRIP
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CARTRIP
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X;
cin >> X;

if (X <= 300) {
cout << 3000 << endl;
} else {
cout << X * 10 << endl;
}
}

return 0;
}

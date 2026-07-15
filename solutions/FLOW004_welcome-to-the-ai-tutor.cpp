/*
Problem: Welcome to the  AI Tutor
Problem Code: FLOW004
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW004
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N;
cin >> N;

int last = N % 10;

while (N >= 10) {
N /= 10;
}

int first = N;

cout << first + last << endl;
}

return 0;
}

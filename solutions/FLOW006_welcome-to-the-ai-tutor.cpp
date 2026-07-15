/*
Problem: Welcome to the  AI Tutor
Problem Code: FLOW006
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW006
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N;
cin >> N;

int sum = 0;

while (N > 0) {
sum += N % 10;
N /= 10;
}

cout << sum << endl;
}

return 0;
}

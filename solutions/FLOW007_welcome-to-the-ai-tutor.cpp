/*
Problem: Welcome to the  AI Tutor
Problem Code: FLOW007
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N;
cin >> N;

int rev = 0;

while (N > 0) {
rev = rev * 10 + N % 10;
N /= 10;
}

cout << rev << endl;
}

return 0;
}

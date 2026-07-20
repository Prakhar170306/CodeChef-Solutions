/*
Problem: Welcome to the  AI Tutor
Problem Code: MINPIZZA
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X;
cin >> N >> X;

int total = N * X;
cout << (total + 3) / 4 << endl;
}

return 0;
}

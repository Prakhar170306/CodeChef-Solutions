/*
Problem: Welcome to the  AI Tutor
Problem Code: PRESENTS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRESENTS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
long long N;
cin >> N;

cout << N - N / 5 << '\n';
}

return 0;
}

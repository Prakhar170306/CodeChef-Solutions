/*
Problem: Welcome to the  AI Tutor
Problem Code: CHEFEREN
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
int N, A, B;
cin >> N >> A >> B;

int even = N / 2;
int odd = N - even;

cout << even * A + odd * B << '\n';
}

return 0;
}

/*
Problem: Welcome to the  AI Tutor
Problem Code: CHN15A
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int T;
cin >> T;

while (T--) {
int N, K;
cin >> N >> K;

int count = 0;

for (int i = 0; i < N; i++) {
int x;
cin >> x;

if ((x + K) % 7 == 0)
count++;
}

cout << count << '\n';
}

return 0;
}

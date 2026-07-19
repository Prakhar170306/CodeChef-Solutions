/*
Problem: Welcome to the  AI Tutor
Problem Code: SUBSCRIBE_
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X;
cin >> N >> X;

int subscriptions = (N + 5) / 6;
cout << subscriptions * X << endl;
}

return 0;
}

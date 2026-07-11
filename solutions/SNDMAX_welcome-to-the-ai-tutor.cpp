/*
Problem: Welcome to the  AI Tutor
Problem Code: SNDMAX
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin >> n;

while (n--) {
int a, b, c;
cin >> a >> b >> c;

int mx = max({a, b, c});
int mn = min({a, b, c});

cout << a + b + c - mx - mn << '\n';
}

return 0;
}

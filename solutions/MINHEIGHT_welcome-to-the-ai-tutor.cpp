/*
Problem: Welcome to the  AI Tutor
Problem Code: MINHEIGHT
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINHEIGHT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin >> t;

while (t--) {
int x, h;
cin >> x >> h;

cout << (x >= h ? "YES" : "NO") << '\n';
}

return 0;
}

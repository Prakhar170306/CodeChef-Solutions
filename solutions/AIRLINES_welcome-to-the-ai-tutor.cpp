/*
Problem: Welcome to the  AI Tutor
Problem Code: AIRLINES
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AIRLINES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;

while (t--) {
int x, y, z;
cin >> x >> y >> z;

cout << min(10 * x, y) * z << endl;
}

return 0;
}

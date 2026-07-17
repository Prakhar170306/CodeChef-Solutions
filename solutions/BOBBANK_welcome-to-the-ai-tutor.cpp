/*
Problem: Welcome to the  AI Tutor
Problem Code: BOBBANK
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BOBBANK
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;

while (t--) {
int w, x, y, z;
cin >> w >> x >> y >> z;

cout << w + (x - y) * z << endl;
}

return 0;
}

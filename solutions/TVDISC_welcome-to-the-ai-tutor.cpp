/*
Problem: Welcome to the  AI Tutor
Problem Code: TVDISC
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TVDISC
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C, D;
cin >> A >> B >> C >> D;

int first = A - C;
int second = B - D;

if (first < second) {
cout << "First" << endl;
} else if (second < first) {
cout << "Second" << endl;
} else {
cout << "Any" << endl;
}
}

return 0;
}

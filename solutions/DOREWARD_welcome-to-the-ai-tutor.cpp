/*
Problem: Welcome to the  AI Tutor
Problem Code: DOREWARD
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOREWARD
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X;
cin >> X;

if (X <= 3) {
cout << "BRONZE" << endl;
}
else if (X <= 6) {
cout << "SILVER" << endl;
}
else {
cout << "GOLD" << endl;
}
}

return 0;
}

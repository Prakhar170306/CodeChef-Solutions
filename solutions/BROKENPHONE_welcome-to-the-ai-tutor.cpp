/*
Problem: Welcome to the  AI Tutor
Problem Code: BROKENPHONE
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BROKENPHONE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

if (X < Y) {
cout << "REPAIR" << endl;
} else if (Y < X) {
cout << "NEW PHONE" << endl;
} else {
cout << "ANY" << endl;
}
}

return 0;
}

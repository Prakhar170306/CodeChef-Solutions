/*
Problem: Welcome to the  AI Tutor
Problem Code: OCTATHON
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OCTATHON
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int X;
cin >> X;

if (X < 3) {
cout << "GOLD";
}
else if (X < 6) {
cout << "SILVER";
}
else {
cout << "BRONZE";
}

return 0;
}

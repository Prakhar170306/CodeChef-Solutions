/*
Problem: Welcome to the  AI Tutor
Problem Code: MVR
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MVR
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int A, B, X, Y;
cin >> A >> B >> X >> Y;

int messi = (2 * A) + B;
int ronaldo = (2 * X) + Y;

if (messi > ronaldo) {
cout << "Messi";
}
else if (ronaldo > messi) {
cout << "Ronaldo";
}
else {
cout << "Equal";
}

return 0;
}

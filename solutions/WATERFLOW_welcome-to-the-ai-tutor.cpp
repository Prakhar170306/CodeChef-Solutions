/*
Problem: Welcome to the  AI Tutor
Problem Code: WATERFLOW
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WATERFLOW
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int W, X, Y, Z;
cin >> W >> X >> Y >> Z;

int finalWater = W + Y * Z;

if (finalWater > X)
cout << "overflow" << endl;
else if (finalWater == X)
cout << "filled" << endl;
else
cout << "unfilled" << endl;
}

return 0;
}

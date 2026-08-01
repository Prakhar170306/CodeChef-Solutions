/*
Problem: Welcome to the  AI Tutor
Problem Code: FLOORS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int X, Y;
cin >> X >> Y;

int floorX = (X - 1) / 10 + 1;
int floorY = (Y - 1) / 10 + 1;

cout << abs(floorX - floorY) << endl;
}

return 0;
}

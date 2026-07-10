/*
Problem: Welcome to the  AI Tutor
Problem Code: BNE_APT
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BNE_APT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int N, M;
int X, Y;

cin >> N >> M;
cin >> X >> Y;

int total = (N * X) + (M * Y);

cout << total;

return 0;
}

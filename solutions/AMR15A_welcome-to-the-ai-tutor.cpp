/*
Problem: Welcome to the  AI Tutor
Problem Code: AMR15A
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int N;
cin >> N;

int lucky = 0, unlucky = 0;

for (int i = 0; i < N; i++) {
int x;
cin >> x;

if (x % 2 == 0)
lucky++;
else
unlucky++;
}

if (lucky > unlucky)
cout << "READY FOR BATTLE";
else
cout << "NOT READY";

return 0;
}

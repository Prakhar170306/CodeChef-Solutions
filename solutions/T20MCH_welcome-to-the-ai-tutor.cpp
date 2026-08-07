/*
Problem: Welcome to the  AI Tutor
Problem Code: T20MCH
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int R, O, C;
cin >> R >> O >> C;

int maxScore = C + (20 - O) * 36;

if (maxScore > R)
cout << "YES";
else
cout << "NO";

return 0;
}

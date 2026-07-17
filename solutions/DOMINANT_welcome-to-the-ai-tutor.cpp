/*
Problem: Welcome to the  AI Tutor
Problem Code: DOMINANT
Platform: CodeChef
URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOMINANT
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int NA, NB, NC;
cin >> NA >> NB >> NC;

if (NA > NB + NC || NB > NA + NC || NC > NA + NB)
cout << "YES" << endl;
else
cout << "NO" << endl;
}

return 0;
}

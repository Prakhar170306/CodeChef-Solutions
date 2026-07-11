/*
Problem: Logging Framework - Problems
Problem Code: LLDPROB020
Platform: CodeChef
URL: https://www.codechef.com/skill-test/DEVWEEKEND58/problems/LLDPROB020
*/

// ================= THE BROKEN SINGLETON =================
class DatabaseConnection {

/*
TODO 1: Fix the instance variable
- Add the keyword to ensure immediate thread visibility (prevent CPU caching bugs).
*/
private static volatile DatabaseConnection instance;

private DatabaseConnection() {
// We add a small delay to simulate an expensive DB connection.
// This guarantees a thread collision if the code is not thread-safe!
try {
Thread.sleep(100);
} catch (InterruptedException e) {
e.printStackTrace();
}
System.out.println("CRITICAL: New Database Connection Established!");
}

/*
TODO 2: Refactor getInstance() for Thread Safety

Action (Implement Double-Checked Locking):
1. Keep the first 'if (instance == null)' check.
2. Inside it, create a synchronized block locking on DatabaseConnection.class.
3. Inside the block, check 'if (instance == null)' a SECOND time.
4. If still null, instantiate the object.
*/

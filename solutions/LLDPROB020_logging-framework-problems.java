/*
Problem: Logging Framework - Problems
Problem Code: LLDPROB020
Platform: CodeChef
URL: https://www.codechef.com/skill-test/DEVWEEKEND58/problems/LLDPROB020?tab=ide
*/

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
public static DatabaseConnection getInstance() {
if(instance == null){
synchronized (DatabaseConnection.class){
if (instance == null) {
instance = new DatabaseConnection();
}
}
}
return instance;
}

public void executeQuery(String query) {
System.out.println("Executing: " + query);
}
}

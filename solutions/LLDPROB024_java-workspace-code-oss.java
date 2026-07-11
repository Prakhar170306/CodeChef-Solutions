/*
Problem: .java - workspace - Code - OSS
Problem Code: LLDPROB024
Platform: CodeChef
URL: https://www.codechef.com/skill-test/DEVWEEKEND58/problems/LLDPROB024?folder=%2Fhome%2Fchef%2Fworkspace&tab=tests
*/

}
}

class Codechef {
public static void main(String[] args) {
System.out.println("--- Welcome to the LLD Coffee Shop ---");

Beverage order1 = new Espresso();
System.out.println();
System.out.println("Order 1: " + order1.getDescription());
System.out.printf("Total: $%.2f\n", order1.cost());

Beverage order2 = new Latte();
order2 = new SoyMilk(order2);
order2 = new Caramel(order2);

System.out.println();
System.out.println("Order 2: " + order2.getDescription());
System.out.printf("Total: $%.2f\n", order2.cost());

Beverage order3 = new Espresso();
order3 = new ExtraShot(order3);
order3 = new ExtraShot(order3);
order3 = new Caramel(order3);

System.out.println();
System.out.println("Order 3: " + order3.getDescription());
System.out.printf("Total: $%.2f\n", order3.cost());
}
}

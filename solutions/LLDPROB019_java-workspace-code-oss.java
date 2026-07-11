/*
Problem: .java - workspace - Code - OSS
Problem Code: LLDPROB019
Platform: CodeChef
URL: https://www.codechef.com/skill-test/DEVWEEKEND58/problems/LLDPROB019?folder=%2Fhome%2Fchef%2Fworkspace&tab=tests
*/

import java.util.ArrayList;
import java.util.List;

interface PaymentStrategy {
void pay(double baseAmount);
}

class CreditCardStrategy implements PaymentStrategy {
private String nameOnCard;
private String cardNumber;

public CreditCardStrategy(String nameOnCard, String cardNumber) {
this.nameOnCard = nameOnCard;
this.cardNumber = cardNumber;
}

public void pay(double baseAmount) {
double fee = baseAmount * 0.02;
double total = baseAmount + fee;

System.out.println("Processing Credit Card payment for " + nameOnCard);
System.out.println("Base: $" + baseAmount + " | Fee: $" + fee);
System.out.println("Total Charged: $" + total + " successfully.");
}
}

class UPIStrategy implements PaymentStrategy {
private String upiId;

public UPIStrategy(String upiId) {
this.upiId = upiId;
}

public void pay(double baseAmount) {
double fee = 1.0;

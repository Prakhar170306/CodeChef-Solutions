/*
Problem: .java - workspace - Code - OSS
Problem Code: LLDPROB027
Platform: CodeChef
URL: https://www.codechef.com/skill-test/DEVWEEKEND58/problems/LLDPROB027?folder=%2Fhome%2Fchef%2Fworkspace&tab=tests
*/

);

StockObserver sms = NotificationFactory.createNotifier(
ChannelType.SMS,
"+91-9876543210"
);

StockObserver push = NotificationFactory.createNotifier(
ChannelType.PUSH,
"Priya-Pixel7"
);

appleStock.addObserver(email);
appleStock.addObserver(sms);
appleStock.addObserver(push);

appleStock.setPrice(147.5);
appleStock.setPrice(149.99);
appleStock.setPrice(151.25);
appleStock.setPrice(152.0);

System.out.println();
System.out.println("[System Action] Rahul decides to opt out of email alerts. Unsubscribing user...");

appleStock.removeObserver(email);

appleStock.setPrice(148.0);
appleStock.setPrice(150.5);
}
}

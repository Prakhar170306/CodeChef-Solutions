/*
Problem: .java - workspace - Code - OSS
Problem Code: LLDPROB022
Platform: CodeChef
URL: https://www.codechef.com/skill-test/DEVWEEKEND58/problems/LLDPROB022?folder=%2Fhome%2Fchef%2Fworkspace&tab=tests
*/

public void write(LogLevel level, String message) {
}

class FileLogger implements LogHandler {
public void write(LogLevel level, String message) {
System.out.println("[CONSOLE] " + level + ": " + message);
}
}

class ConsoleLogger implements LogHandler {

interface LogHandler {
void write(LogLevel level, String message);
enum HandlerType {
CONSOLE, FILE, DATABASE
}
INFO, DEBUG, ERROR
}

import java.util.List;

enum LogLevel {
import java.util.ArrayList;
System.out.println("[FILE - app.log] " + level + ": " + message);
}
}

class DatabaseLogger implements LogHandler {
public void write(LogLevel level, String message) {
System.out.println("[DATABASE - logs_table] " + level + ": " + message);
}
}

class LogHandlerFactory {
public static LogHandler createHandler(HandlerType type) {

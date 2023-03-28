#include <iostream>
#include <string>
using namespace std;

int sum (int n, int acc) {
    if (n == 0) {
        return acc;
    }
    return sum (n-1, n + acc);
}

int sum(int n) {
    sum(n, 0);
}

int power (int x, int n, int acc) {
    if (n < 1) {
        return acc;
    }
    return power(x, n-1, acc*x);
}

int power (int x, int n) {
    power(x, n, 1);
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int digit (int n, int acc) {
    if (n < 1) {
        return acc;
    }
    return digit(n/10, acc + n%10);
}

int digit (int n) {
    digit(n, 0);
}

string reverse(string s, string acc) {
    if (s.size() < 1) {
        return acc;
    }
    s.erase(0,1);
    return reverse(s, acc = s.at(0));
}

string reverse (string s) {
    reverse(s, "");
}

#include <iostream>

using namespace std;

int fib(unsigned int n) {
int l = 0, m = 1, i, temp;
if (n == 0 || n == 1) {
return n;
}
for (i = 2; i <= n; i++) {
temp = l + m;
l = m;
m = temp;
}
return temp;
}

int main() {
    int n = 6;
    cout << fib(n);
    return 0;
}

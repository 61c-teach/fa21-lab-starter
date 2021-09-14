#include <stdio.h>

int lcm(int a, int b) {
  int t = a % b;
  if (t == 0) {
    return a;
  }
  return a * lcm(b, t) / t;
}

int main() {
	printf("%d\n", lcm(20, 30));
}

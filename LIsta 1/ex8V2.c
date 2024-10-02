#include <stdio.h>

float power (float a, float b) {
  float result = 1;
  for (int i = 0; i<b; i++) {
    result *= a;
  }
  return result;
}

float pg (float a, float r, int n) {
  if (n==0)
    return a;
  return a * power(r, n) + pg(a, r, n-1);
} 

int main () {
  float a, r;
  int n;
  scanf ("%f %f %d", &a, &r, &n);
  float result = pg (a, r, n-1);
  printf ("A pg é: %f\n", result);

  return 0;
}
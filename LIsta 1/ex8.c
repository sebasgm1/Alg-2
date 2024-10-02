#include <stdio.h>
#include <math.h>

float pg (float a, float r, int n) {
  float aux = 0;
  return pg_tail (a, r ,n, aux);
}

float pg_tail (float a, float r, int n, float aux) {
  if (n==-1)
    return (aux);
  else {
    float aux2 = r; // vai ser acumulado dentro do for, pra fazer a potência
    for (int i=0; i<n; i++) {
      aux2 *= r;
    }
    aux += a*aux2;
    return (pg_tail (a, r, n-1, aux));
  }
}

int main () {
  float a, r;
  int n;
  scanf ("%f %f %d", &a, &r, &n);

  return 0;
}
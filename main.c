#include <stdio.h>
#include "collab.h"

int main() {
  int a = 10;
  int b = 5;
  int c = 25;
  printf ("Add: %d\n",add(a,b));
  printf ("Subtract: %d\n",sub(a,b));
  printf ("Multiply: %d\n",multiply(a,b));
  printf ("Divide: %d\n",divide(a,b));
  return 0;
 }

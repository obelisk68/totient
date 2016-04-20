#include "totient.h"

long gcd(long x, long y) {
  long tmp;
  if (x < y) {tmp = x; x = y; y = tmp;}
  if (!y) return x;
  return gcd(y, x % y);
}

VALUE totient(VALUE self, VALUE n) {
  int a;
  long i, se;
  
  a = 0;
  se = FIX2LONG(n);
  for (i = 1; i < se; i++) {
    if (gcd(se, i) == 1) a++;
  }
  return INT2FIX(a);
}

void Init_totient(void){
  VALUE rb_cTotient;
  
  rb_cTotient = rb_define_module("Totient");
  rb_define_method(rb_cTotient, "totient", totient, 1);
}

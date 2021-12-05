#if !(defined myLIB1) || !(defined myLIB2)

#ifdef myLIB2
#define myLIB1
#endif

int f(int, int);
void circle(int);

#define myLIB2
#endif 
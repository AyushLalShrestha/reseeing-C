#include <stdio.h>

int *somefunc(int number){
  return &number;
}

void main(){
  int number = 18;
  int *(*ptr)(int) = somefunc;
  int *p = ptr(number);
  printf("%d", *p);
}

/*
void someFunction(int arg)
{
    printf("This is someFunction being called and arg is: %d\n", arg);
    printf("Whoops leaving the function now!\n");
}

main()
{
    void (*pf)(int);
    pf = &someFunction;
    printf("We're about to call someFunction() using a pointer!\n");
    (pf)(5);
    printf("Wow that was cool. Back to main now!\n\n");
}

*/
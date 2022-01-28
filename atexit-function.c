#include<stdio.h>
#include<stdlib.h>
void showmsg()
{
  printf("Thanks for visiting my code");
}
int main()
{
  atexit(showmsg);
  printf("Hello programmer\n");
  return 0;
}

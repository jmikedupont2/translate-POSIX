#include <stdio.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL,"");
  setlocale(LC_NUMERIC,"C");
  
  char s[BUFSIZ];
  while(fgets(s,BUFSIZ,stdin)){
    char * p=s;
    putchar(*p++);
    while(*p)
      if(*p=='<'){
	putchar('\n');
	putchar(*p++);
      }
      else
	putchar(*p++);
  }
}

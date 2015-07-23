#include <stdio.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL,"");
  setlocale(LC_NUMERIC,"C");
  
  int ch;
  while((ch=getchar())!=EOF){
    putchar(ch);
    if(ch=='>'){
      int ch2=getchar();
      if(ch2!='\n')
	putchar('\n');
      putchar(ch2);
    }
  }

}

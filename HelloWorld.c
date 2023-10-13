#include <stdio.h>
int main()
{
   printf("Hello, Galaxy!");
   printf("Hello, Universe!");
   return 0;
}

int DesignChoicesCheck(int designchoice)
{
   if (designchoice < 10)
   {
      printf("DesignChoice too short");
      return 0;
   }
   else if (designchoice >= 10 && designchoice <= 100)
   {
      printf(" DesignChoice accepted");
   }
   else if (designchoice > 100)
   {
      printf("DeisngChoice too long");
      return 0;
   }
   return 1;
}
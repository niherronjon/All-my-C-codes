#include <stdio.h>
int main()
{
int time = 4;
if(time < 6) 
{
  printf("Good morning.");
}
else if(time < 4)
{
  printf("Good day.");
}else
{
  printf("Good evening.");
}
return 0;
}
#include<stdio.h>
char Alphabetical(char ch1, char ch2, char ch3)
{
  if(ch1 < ch2 && ch1 < ch3)
  {
    return ch1;
  }
  else if(ch2 < ch3)
  {
    return ch2;
  }
  else
  {
    return ch3;
  }
}

int main()
{
  char ch1,ch2,ch3,ch;
  printf("Enter three character: ");
  scanf("%c %c %c",&ch1,&ch2,&ch3);
  printf("The lower character is %c\n", Alphabetical(ch1,ch2,ch3));
  return 0;
}

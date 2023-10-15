#include<stdio.h>
#include<string.h>
int main()
{
  // variable declaration
  char ch[20],ch1[20];
  int i,count=0;
  
  // input string ch
  printf("Enter string ch ");
  scanf("%s",ch);
  
  // print string reverse 
  for(i=strlen(ch)-1;i>=0;i--)
  {
  	printf("%c",ch[i]);
  }
  return 0;
}

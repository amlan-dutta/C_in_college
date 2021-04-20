#include<stdio.h>
#include<string.h>
int main(){
  char str[100];
  int i,n;
  printf("Enter any string->");
  gets(str);
  for(n=0;str[n]!='\0';n++);
  for(i=0;i<=n;i++){
      if(str[i]>=65&&str[i]<=90)
       str[i]=str[i]+32;
  }
  printf("\nThe string in lower case is->%s",str);
  return 0;
}

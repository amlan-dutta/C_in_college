#include <stdio.h>
main(){  
   FILE *fp; 
   char buff[100]; 
   fp = fopen("file1.txt", "w");  
   fprintf(fp, "Hello file by fprintf...\n");
   fp = fopen("file1.txt", "r");  
   while(fscanf(fp, "%s", buff)!=EOF){  
   printf("%s ", buff );  
   } 
    
   return 0;
}

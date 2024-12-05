#include<stdio.h>
void main()
{
 FILE *fp1;
  fp1=fopen("data4.txt","r");
  if(fp1 != NULL)
  {
   fseek(fp1,10,SEEK_SET);
   char ch=fgetc(fp1);
   printf("%c",ch);
   fclose(fp1);
  }
   fp1=fopen("data4.txt","r");
  if(fp1 != NULL)
  {
   fseek(fp1,0,SEEK_END);
   char ch=fgetc(fp1);
   printf("%c",ch);
   fclose(fp1);
  }
   fp1=fopen("data4.txt","r");
  if(fp1 != NULL)
  {
   fseek(fp1,-1,SEEK_END);
   char ch=fgetc(fp1);
   printf("%c",ch);
   fclose(fp1);
  }
}

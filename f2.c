#include<stdio.h>
void main()
{
  FILE *fp1,*fp2,*fp3;
  fp1=fopen("data2.txt","w");
  fp2=fopen("data3.txt","w");
  if(fp1 != NULL)
  fputs("hello ",fp1);
  fclose(fp1);
  if(fp2 != NULL)
  fputs("world",fp2);
  fclose(fp2);
  fp1=fopen("data2.txt","r");
  fp2=fopen("data3.txt","r");
   fp3=fopen("data4.txt","w");
   char word1[10];
   if(fp1 != NULL)
   {
     while(fgets(word1,sizeof(word1),fp1)!=NULL)
     {
       fputs(word1,fp3);
     }
     fclose(fp1);
   }
   char word2[10];
    if(fp2 != NULL)
   {
     while(fgets(word2,sizeof(word2),fp2)!=NULL)
     {
       fputs(word2,fp3);
     }
      fclose(fp2);
   }
   fclose(fp3);
   fp3=fopen("data4.txt","r");
   
   while(fgets(word2,sizeof(word2),fp3)!=NULL)
   {
     printf("%s",word2);
   }
    fclose(fp3);
}

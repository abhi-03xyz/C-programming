#include<stdio.h>
void main()
{
 FILE *fp;
 fp=fopen("data.txt","w");
 if(fp!=NULL)
 {
   fputs("hello world",fp);
   fclose(fp);
 }
 int c=0;
 fp=fopen("data.txt","r");
 char ch;
 if(fp!=NULL)
 {
 // while(fgetc(ch,sizeof(char),fp))
 while((ch=fgetc(fp))!= EOF)
  {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
     // printf("%c\n",ch);
      c++;
    }
  }
  fclose(fp);
 }
 
 printf("%d is the number of vowels",c);

}

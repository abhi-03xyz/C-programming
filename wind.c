#include<stdio.h>
void main(){
int w;
printf("Enter the wind speed: \n");
scanf("%d",&w);

if(w<25)
printf("not a strong wind");
else if(w>=25 && w<=38)
printf("strong wind");
else if(w>=39 && w<=54)
printf("gale");
else if(w>=55 && w<=72)
printf("whole gale");
else
printf("hurricane");

}

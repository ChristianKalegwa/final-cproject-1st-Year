#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
    
short int vc,e[10],g[12],b[12];
char a[50],c[50],f[50],h[50],i[50],j[50],k[50],l[50],m[50],opt;
do
  {
printf("****************************************************************************\n");
printf("****************************************************************************\n\n");
printf("\n\t\t\t        DEMOCRATIC REPUBLIC OF CONGO");
printf("\n\t\t\t    NATIONAL ELECTORAL COMMISSION INDEPENDANT");
printf("\n\t\t\t        ELECTORAL COMMISSION INDEPENDANT \n");

printf("\n\t VOTER'S CARD CI: ");
scanf("%d",&vc);
printf("\n\t Application ID:  ");
scanf("%d",&e);
printf("\n\t NAME: ");
scanf("%s",&f);
printf("\n\t GENDER:");
scanf("%s",&a);
printf("\n\t BIRTHDATE:");
scanf("%d", &b);
printf("\n\t PLACE OF BIRTH:");
scanf("%s", &i);
printf("\n\t ADDRESS: ");
scanf("%s", &j);
printf("\n\t PLACE OF ORIGIN:");
scanf("%s", &k);
printf("\n\t District:");
scanf("%s", &l);
printf("\n\t PARISH:");
scanf("%s", &m);
printf("\n\t FATHER'S NAME:");
scanf("%s", &c);
printf("\n\t MOTHER'S NAME:");
scanf("%s", &h);
printf("\n\t DELIVERY DATE: ");
scanf("%d",&g);
printf("\n");
printf("\n\t Your VOTER'S CARD CI: %d" ,&vc);
printf("\n\t Your Application ID: %d" ,&e);
printf("\n\t Your NAME is: %s" ,&f);
printf("\n\t Your GENDER is: %s" ,&a);
printf("\n\t Your BIRTHDATE is: %d" ,&b);
printf("\n\t Your PLACE OF BIRTH is: %s" ,&i);
printf("\n\t Your ADDRESS is: %s", &j);
printf("\n\t Your PLACE OF ORIGIN is: %s" ,&k);
printf("\n\t Your District is: %s" ,&l);
printf("\n\t Your PARISH is: %s" ,&m);
printf("\n\t Your FATHER'S NAME is: %s" ,&c);
printf("\n\t Your MOTHER'S NAME is: %s" ,&h);
printf("\n\t Your delivery date is: %d\n\n" ,&g);

 
printf("\n\n                  VOTER'S CARD\n\n");
printf("\n\n*************:TEMPORARY IDENTITE CARD:*******************************\n\n");
printf("\n\n          VOTE IS A STRAIGHT AND TASK CIVIC \n\n");
printf("\n\n******************************:DEMOCRATIC ELECTIONS:****************\n\n");
printf("\n\n                                   URBANS \n\n");
printf("\n\n                                  MINCIPAL \n\n");
printf("\n\n                                   LOCALS\n \n");
printf("\n\n                                  GENERALS\n\n");
printf("\n**********:NATIONAL ELECTORAL COMMISSION INDEPENDANT:******************\n");
printf("\n***************:ELECTORAL COMMISSION INDEPENDANT:**********************\n");
printf("************************************************************************\n");
printf("********************:THANKYOUR YOUR ID IS READY TO BE USED:******************");
}
while(opt!=20);
getch();
}

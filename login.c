#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char x[100],y[100],a[100],b[100],c[100];


int main(){
 system("cls");
 printf("Enter username: ");
 fflush(stdin);
 fgets(b,100,stdin);
 printf("Enter password to set: ");
 fflush(stdin);
 fgets(x,100,stdin);
 printf("Re-enter your password: ");
 fflush(stdin);
 fgets(y,100,stdin);
 system("cls");


 if (strcmp(x,y) == 0)
 {
    printf("Username & password set successfully\n");
    
    printf("Enter username: ");
    fflush(stdin);
    fgets(c,100,stdin);
    printf("Enter your password to unlock: ");
    fflush(stdin);
    fgets(a,100,stdin);

    if (strcmp(a,x) == 0&&strcmp(c,b)==0)
        {printf("Welcome %s",b);
        return 0;}
    else if (((strcmp(a,x)>0||strcmp(a,x)<0)&&(strcmp(c,b)>0||strcmp(c,b)<0))||((strcmp(a,x)>0||strcmp(a,x)<0)||(strcmp(c,b)>0||strcmp(c,b)<0)))
        {while (((strcmp(a,x)>0||strcmp(a,x)<0)&&(strcmp(c,b)>0||strcmp(c,b)<0))||((strcmp(a,x)>0||strcmp(a,x)<0)||(strcmp(c,b)>0||strcmp(c,b)<0)))
        {printf("wrong username or password.\n");
        printf("Enter username again: ");
         fflush(stdin);
         fgets(c,100,stdin);
         printf("Enter password again: ");
         fflush(stdin);
         fgets(a,100,stdin);
         
         
         if ((strcmp(a,x) == 0)&&(strcmp(c,b)==0))
         {
         printf("Welcome %s",b);
         return 0;}}}
         }
else if (strcmp(x,y)>0||strcmp(x,y)<0)
{
    while (strcmp(x,y)>0||strcmp(x,y)<0)
    {printf("wrong entry\nRe-enter password: ");
    fflush(stdin);
    fgets(y,100,stdin);

    if (strcmp(x,y)==0)
    {
    system("cls");
    printf("Username and password set successfuly\n");
    printf("Enter your username to unlock: ");
    fflush(stdin);
    fgets(c,100,stdin);
    printf("Enter your password to unlock: ");
    fflush(stdin);
    fgets(a,100,stdin);

    if ((strcmp(a,x) == 0)&&(strcmp(c,b)==0))
        {printf("Welcome %s",b);
        return 0;}
    else if (((strcmp(a,x)>0||strcmp(a,x)<0)&&(strcmp(c,b)>0||strcmp(c,b)<0))||((strcmp(a,x)>0||strcmp(a,x)<0)||(strcmp(c,b)>0||strcmp(c,b)<0)))
        {while (((strcmp(a,x)>0||strcmp(a,x)<0)&&(strcmp(c,b)>0||strcmp(c,b)<0))||((strcmp(a,x)>0||strcmp(a,x)<0)||(strcmp(c,b)>0||strcmp(c,b)<0)))
        {printf("wrong username or password\n");
         printf("Enter username again: ");
         fflush(stdin);
         fgets(c,100,stdin);
         printf("Enter password again: ");
         fflush(stdin);
         fgets(a,100,stdin);

         if ((strcmp(a,x) == 0)&&(strcmp(c,b)==0))
         {
         printf("Welcome %s",b);}}}}}
}

else printf("error");
return 0;
}

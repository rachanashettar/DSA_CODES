#include<stdio.h>
#include<string.h>
int main()
{
   char str[20][50], s1[50],s2[50];
   int n, i, found=0;

   printf("Enter how many string (names): ");
   scanf("%d", &n);

   printf("Enter %d strings:\n", n);
   for(i=0; i<n; i++)
   {
     scanf("%s", str[i]);
   }

   printf("Enter a string to search: ");
   scanf("%s", s1);

   for(i=0; i<n; i++)
   {
     if(strcmp(s1, str[i]) == 0)
     {
       found=1;
       printf("Found in row-%d\n", i+1);
       printf("enter string to replace:\n");
       scanf("%s",s2);
       s2[50]=str[i][50];
       for(i=0; i<n; i++)
       {
         scanf("%s", str[i]);
       }
     }
   }
   if(found==0)
    {
       printf("Not found");
    }
}
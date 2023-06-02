//length of text line
#include<stdio.h>
void length(char s[10][100]);
void max(int a[10]);
main()
{
char s[10][100];
int i;
printf("enter wht u want\n");
for(i=0;i<10;i++)
{
gets(s[i]);
}
length(s);
}
void length(char s[10][50])
{
int i,j,count[10],c=0;
for(i=0;i<10;i++)
{
for(j=0;s[i][j]!=NULL;j++)
{
  c++;
}
count[i]=c;
printf("the length of %d line is %d \n",i+1,count[i]);
max(count);
c=0;
}
max(count);
int k=max(count,i);
printf("%d",k);
}
int max(int c,int i)
void max(int a[10])
{ int i=1,c=0;
    c=a;
     printf("the value of c caught=%d\n",c);
    if(c>m)
   {
       m=c;
       printf("the value of m caught=%d\n",m);
       i++;
   }
   else
    printf("%d",i);
    int i,k=0;
     int max=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
           max=a[i];
           k=i;
        }
        /*else
        {
            max=a[i];
        }*/

    }
    printf("\n max value=%d\n longest line=%d",max,k+1);
    }


int m=0,c=0;
if(c<a)
{
  c=a;
  printf("%d\n",c);
}
if(c>m)
{
m=c;
k=i;
else
{
  m=m;
  printf("the longest line is %d",k);
}
}

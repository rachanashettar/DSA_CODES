#include<stdio.h>
void bubblesort(int arr[10000],int n);
void main()
{
    int n,i;
    printf("enter number of array numbers:\n");
    scanf("%d",&n);
    int arr[100];
    printf("enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printf("sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void bubblesort(int arr[10000],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
}

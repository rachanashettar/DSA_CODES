#include <stdio.h>
int binarySearch(int arr[],int i,int j,int n);
int main()
{
    int arr[]={5,81,32,16,38,21,91};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n,pos;
    printf("enter n:\n");
    scanf("%d",&n);
    pos=binarySearch(arr,0,size-1,n);
    if (pos!=-1)
    printf("%d is present at position %d.\n", n, pos);
    else
    printf("%d is not found in the array.\n", n);
    return 0;
}
int binarySearch(int arr[],int i,int j,int n)
{
    while (i<=j)
    {
        int mid=i+(j-i)/2;
        if(arr[mid]==n)
        return mid;
        if(arr[mid]<n)
        i=mid+1;
        else
        j=mid-1;
    }
    return -1;
}

/*max number in an array*/
#include<stdio.h>
max_num(int arr[],int i,int j);
int main()
{
    int max;
    int arr[7]={11,56,90,32,5,100,45};
    max=max_num(arr,0,7);
    printf("the maximum number in array is:%d\n",max);
}
max_num(int arr[],int i,int j)
{
    int m,mid;
    if(i==j)
    return arr[i];
    if(i==j-1)
    {
        if(arr[i]>arr[j])
        return arr[i];
        else
        return arr[j];
    }
    mid=(i+j)/2;
    m=max_num(arr,i+1,j);
    if(arr[i]>m)
    return arr[i];
    else
    return m;
}

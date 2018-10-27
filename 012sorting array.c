#include<stdio.h>
void sort012(int *arr,int size);
void swap(int*,int*);
int main()
{
 int a[10]={0,1,2,1,0,0,2,1,0,0};
 int i,j,k;

 printf("the array before sorting:\n");
  for(i=0;i<10;i++)
    printf("%2d",a[i]);
    printf("\n the array after sorting :\n");
    sort012(a,10);
   for(i=0;i<10;i++)
    printf("%2d",a[i]);



}

void sort012(int *arr,int size)
{

    int low,mid,high;
    int i,j;
    low=mid=0;
    high=size-1;

    while(mid<high)
    {
        switch(arr[mid])
        {
            case 0:
             swap(&arr[low++],&arr[mid++]);
               break;
            case 1:
               mid++;
               break;
           case 2:
            swap(&arr[mid],&arr[high--]);
            break;
        }

    }
}

void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}



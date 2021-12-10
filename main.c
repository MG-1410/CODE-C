#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20],size;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);
    printf("Enter the Array Elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

void selectionSort(int* arr, int size)
{
    for(int i=0;i<size;i++)
    {
        int last=size-i-1;
        int max=findMax(arr,0,last);
        swap(arr,max,last);
    }
}

int findMax(int* arr, int start ,int end)
{
    int max=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[max]<arr[i])
        {
            max=i;
        }
    }
    return max;
}

void swap(int* arr,int first,int second)
{
    int temp=arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}

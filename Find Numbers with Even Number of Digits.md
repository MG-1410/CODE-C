#include <stdio.h>
int main()
{
    int arr[100],size;
    printf("Enter the Size of  Array: ");
    scanf("%d",&size);
    printf("Enter the Elements of Array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Max Even numbers with Digits is : %d",findNumbers(arr,size));
}

int findNumbers(int* arr,int size)
{
        int i,j,count=0,s=0;
        for(i=0;i<size;i++)
        {
            int n=arr[i];
            while(n!=0)
            {
                int c;
                c=n%10;
                count++;
                n=n/10;
            }
            if(count%2==0)
            {
                s++;
            }
            count=0;
        }
        return s;
}


// FINDING ANY ELEMENT IN THE ARRAY BY USING LINERAR SEARCHING .................
#include<stdio.h>
int main ()
{
    int arr[50];
    int i=0,item,size;
    printf("Enter the size of array you want:");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    scanf("%d", &arr[i]);
    printf("Enter the item you want to search:");
    scanf("%d",&item);
    i=0;
    while(i<size)
    {
        if(arr[i]==item)
        {
            printf("Item found at the position %d",i);
            break;
        }++i;
        
    } 
    if(i>=size)
    {
        printf("item not found");
    }
    return 0;
    
}
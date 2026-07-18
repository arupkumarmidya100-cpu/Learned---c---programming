#include<stdio.h>
int main(){
    int i, num ,smallest ;
    printf("Enter number of element :" );
    scanf("%d",&num);
    int arr[num];
    printf("Enter %d numbers:\n", num);
    for(i=0 ; i<num ; i++){
    scanf("%d",&arr[i]);}
     smallest=arr[0];
    for(i=1;i<num;i++){
    if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Smallest number is %d\n", smallest);

    return 0;}



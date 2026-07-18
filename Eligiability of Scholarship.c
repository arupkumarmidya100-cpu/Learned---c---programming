#include <stdio.h>
int main ()
{
    int marks ;
    printf("Enter your marks :");
    scanf ("%d", & marks);
    if (marks>= 50)
    {
        printf("Passed.\n");
        if (marks>=90)
        {
            printf("eligiable for scholarship.\n");
        }
        else{
            printf("not eligiable for scholarship.\n");
        }
    }
    else 
    {
        printf("failed.\n");
    }
    return 0;
}
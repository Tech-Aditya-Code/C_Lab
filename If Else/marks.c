#include <stdio.h>

int main()
{   
    int m; // marks
    printf("Enter marks: ");
    scanf("%d",&m);
    // more than 80 -> A 
    // more than 70 -> B 
    // more than 60 -> C
    // more than 40 -> D 
    // if(m > 80){
    //     printf("A grade\n");
    // }
    // else if(m > 70){
    //     printf("B grade\n");
    // }
    // else if(m > 60){
    //     printf("C grade\n");
    // }
    // else{
    //     printf("D grade");
    // }
    if(m > 80){
        printf("A grade\n");
    }
    else{
        if(m > 60){
            printf("B grade\n");
        }
        else{
            if(m > 40){
                printf("C grade");
            }
            else{
                printf("D grade");
            }
        }
    }


    return 0;
}
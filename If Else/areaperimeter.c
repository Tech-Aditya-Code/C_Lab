#include <stdio.h>

int main()
{
    int length;
    printf("Enter length: ");
    scanf("%d",&length);
    int breadth;
    printf("Enter breadth: ");
    scanf("%d",&breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if(area > perimeter){
        printf("area greater than perimeter");
    }
    if(perimeter > area){
        printf("perimeter greater than area");
    }
    if(perimeter == area){
        printf("area equal to perimeter");
    }

    return 0;
}
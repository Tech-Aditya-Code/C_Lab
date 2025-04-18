#include <stdio.h>

int main()
{
    int ram;
    printf("Enter ram age: ");
    scanf("%d",&ram);
    int shyam;
    printf("Enter shyam age: ");
    scanf("%d",&shyam);
    int ajay;
    printf("Enter ajay age: ");
    scanf("%d",&ajay);

    if (ram < shyam && ram < ajay){
        printf("ram is youngest");
    }
    if (shyam < ram && shyam < ajay){
        printf("shyam is youngest");
    }
    if (ajay < ram && ajay < shyam){
        printf("ajay is youngest");
    }


    return 0;
}
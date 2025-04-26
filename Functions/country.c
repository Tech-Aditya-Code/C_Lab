#include <stdio.h>
void england(){
    printf("i am in england\n");
    return;
}

void australia(){
    printf("i am in australia\n");
    england();
    return;
}

void india(){
    printf("i am in india\n");
    australia();
    return;
}

int main()
{
    india();
    return 0;
}
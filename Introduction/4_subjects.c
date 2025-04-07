#include <stdio.h>

int main()
{
    float maths_marks = 88;
    float eng_marks = 77;
    float hindi_marks = 55;
    float history_marks = 68;
    float percentage = (maths_marks + eng_marks + hindi_marks + history_marks) / 4;
    printf("The percenatge of 4 subjects is: %f",percentage);

    return 0;
}
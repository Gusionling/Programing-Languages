//입력을 확인하기 위한 예제 

#include <stdio.h>

long get_long(void)
{
    printf("Please input an integer and press enter.\n");

    long input;
    char c;

    while (scanf_s("%ld", &input) != 1)
    {
        printf("your input: ");

        //정수가 아닌 것을 입력했을 때
        //scanf가 제대로된 입력을 받지 못하면 입력받은 값은 버퍼에 그냥 남아있다. 
        while ((c = getchar()) != '\n')
            putchar(c); //input left in buffer
        printf(" is not an integer, Try it again\n");
    }
    printf("Your input %ld is an integer. Thank you.\n", input);

    return input;

}

int main()
{
    printf("input number between 1 and 100\n");
    long number = get_long();

    if (number > 1 && number < 100)
        printf("ok");
    else
        printf("wrong input");

    return 0;
}
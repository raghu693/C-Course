#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "r");

    char ch;

    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break the loop !
        if (ch == EOF) // EOF stands for End Of File
        {
            break;
        }
        printf("%c", ch);
    }   
    return 0;
}
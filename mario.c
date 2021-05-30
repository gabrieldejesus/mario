#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;

    // TODO: Take the user's height if it is between the numbers 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height >= 9);

    // TODO: Build pyramid
    for (int hashes = 1; hashes <= height; hashes++)
    {
        // TODO: Get height for pyramid and the line number
        // TODO: Find out how many points you need on that line
        int dots = height;

        while (dots > hashes)
        {
            dots--;
            printf(" ");
        }

        for (int hasheLeft = 0; hasheLeft < hashes; hasheLeft++)
        {
            printf("#");
        }
        printf(" ");
        printf(" ");

        // TODO: add 2 spaces next to the left pyramid and then add a pyramid to the right
        for (int hasheRight = 0; hasheRight < hashes; hasheRight++)
        {
            printf("#");
        }

        printf("\n");
    }

}

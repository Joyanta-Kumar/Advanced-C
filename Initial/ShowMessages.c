#include <stdio.h>
#include <stdlib.h>

void showMessage()
{
    int* myFirstMemoryCell = (int*) malloc(1);
    printf("\e[44;1;4m I started here: %p \e[0m\n", myFirstMemoryCell);
    printf("\e[44;1;4m I am not so sure about that.     \e[0m\n");
    int* mySecondMemoryCell = (int*) malloc(1);
    printf("\e[44;1;4m Now, I am here: %p \e[0m\n", mySecondMemoryCell);
}
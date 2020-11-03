#include <stdio.h>
#include <stdlib.h>

int counter;
int * populateArray(int len);
void printArray(int * array, int len);
int * push(int element, int len, int * array);
int len = 0;

int main()
{
    int * testArray;
    //int len;
    printf("Vyvedete golemina na masiva..\n");
    scanf("%d", &len);
    testArray = populateArray(len);
    printArray(testArray, len);
    testArray = push(10, len, testArray);
    //printf("%d\n", sizeoftestArray);
    //printf("%d\n", sizeof * testArray);
    //len = (int)(sizeof(testArray[0]) * len / sizeof(testArray[0]));
    printArray(testArray, len);
    return 0;
}

int * populateArray(int len)
{
    int * array = (int*)malloc(sizeof(int) * len);
    for(counter = 0; counter<len; counter++)
    {
        printf("Enter %d element:\n", counter);
        scanf("%d", &array[counter]);
    }

    return array;
}

void printArray(int * array, int len)
{
    printf("Array:\n");
    for(counter = 0; counter < len; counter++)
    {
        printf("Index %d: %d\t",counter,  array[counter]);
    }
    printf("\n");
}

int sizeOfArray(int len)
{
    return len;
}

int * push(int element, int len, int * array)
{
    array[len] = element;
    len++;

    len = (sizeOfArray(len));
    //printArray(array, len);

    return array;
}


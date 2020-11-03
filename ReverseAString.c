#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverseAString(char * sentence);

int main()
{
    char * input = "Hi my name is Alex.";
    char * result = reverseAString(input);
    
    printf("%s\n", result);

    return 0;
}

char * reverseAString(char * sentence)
{
    int begin, end, count = 0;
    char * result;
    while(sentence[count] != '\0')
    {
        count++;
    }

    result = malloc((count + 1) * sizeof(char));

    end = count - 1;

    for(begin = 0; begin < count; begin++)
    {
        result[begin] = sentence[end];
        end--;
    }

    result[begin] = '\0';

    return result;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I-am-a-student";
    char* token;
    char* rest = str;

    while ((token = strtok_r(rest, "-", &rest)))
        printf("%s\n", token);

    return 0;
}


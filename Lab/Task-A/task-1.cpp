#include <fstream>

int main ()
{
    FILE *fp;

    char massage[100];

    fp=fopen("expression.txt","r");

    if(fp==NULL)
    {
        printf("Source cant't be opened");

    }
    while(!feof(fp))
    {
        fgets(massage, 100, fp);
        printf("%s",massage);
    }
    printf("\n\n\n");

    fseek(fp,0,SEEK_SET);



    fclose(fp);

    return 0;
}


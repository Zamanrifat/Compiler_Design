#include <fstream>

int main ()
{
    FILE *fp;
    int vowel=0, consonant=0;
    char ch;
    char massage[100];

    fp=fopen("input.txt","r");

    if(fp==NULL)
    {
        printf("Source cant't be opened");
        exit(-1);
    }
    while(feof(fp))
    {
        fgets(massage, 200, fp);
        printf("%s",massage);
    }
    printf("\n\n\n");

    fseek(fp,0,SEEK_SET);

    while(ch!=EOF)
    {
        ch=fgetc(fp);

        if((ch=='a') || (ch=='A') || (ch=='e') || (ch=='E')||(ch=='i') || (ch=='I') || (ch=='o') || (ch=='O') || (ch=='u') || (ch=='U'))
       {
          vawel++;
          printf("%c",ch);
       }
       else if ((ch>=65&&ch<=90) || (ch>= 97 &&ch<=122))
       {
           consonant++;
           printf("%c", ch);
       }
    }
    fclose(fp);
    printf("\nNumber of vowels are = %d\nNumber of consonents are = %d, vowel,consonent ");
    return 0;
}

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
        //exit(-1);
    }
    while(!feof(fp))
    {
        fgets(massage, 100, fp);
        printf("%s",massage);
    }
    printf("\n\n\n");

    fseek(fp,0,SEEK_SET);

    while(ch!=EOF)
    {
        ch=fgetc(fp);

        if((ch=='a') || (ch=='A') || (ch=='e') || (ch=='E')||(ch=='i') || (ch=='I') || (ch=='o') || (ch=='O') || (ch=='u') || (ch=='U'))
       {
          vowel++;
          printf("(%c)",ch);
       }
       else if ((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
       {
           consonant++;
           printf("%c", ch);
       }
    }
    fclose(fp);
    printf("\nNumber of vowels are = %d\nNumber of consonents are = %d", vowel,consonant );
    return 0;
}

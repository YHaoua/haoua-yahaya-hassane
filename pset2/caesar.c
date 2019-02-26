// #haoua yahaya hassane
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main (int argc, string argv[])

{
    if (argc==2)
    {

 string haoua;
 int k = atoi(argv[1]);

 haoua=get_string("plaintext: ");

 printf("cyphertext:/");

 for (int i=0; i<strlen(haoua); i++)

if(isalpha(haoua[i]))
{
    if (islower(haoua[i]))
    {
        printf("%c",(((haoua[i]- 97)+k)%26)+ 97);
    }
    if(isupper(haoua[i]))
    {
        printf("%c",(((haoua[i]- 65)+k)%26)+ 65);
    }
}
else
{
     printf("%c",haoua[i]);
}
     printf("\n");
}
}
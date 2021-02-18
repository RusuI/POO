
#include <stdio.h>
#include <string>
#include <iostream>

int main()
{
    char str[26], *p, *word[100], *aux;
    int count = 0;
    printf("Insert the senctence here:");
    scanf("%[^\n]", str); //fortam citirea pana la enter
    p = strtok(str, " ");

    while (p != NULL)
    {
        word[count] = p;
        //printf(".%s.", array[i]);
        count++;
        p = strtok(NULL, " ");
        
    }
    //sortare:
    for (int i = 0; i < count-1; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if ((strlen(word[i])) < (strlen(word[j])))
            {
                aux = word[i];
                word[i] = word[j];
                word[j] = aux;
            }
            else if ((strlen(word[i])) == (strlen(word[j])))
                if (strcmp(word[i], word[j]) > 0)
                {
                    aux = word[i];
                    word[i] = word[j];
                    word[j] = aux;
                }

        }

    }
    //afisare:
    for (int k = 0; k < count; k++)
    {
        printf("%s\n", word[k]);
    }
    return 0;
}







#include <stdio.h>
#include <iostream>
#include <string.h>

int convert(char s)
{
    int x;
    x = s - '0';
    return x;
}


int main()
{
   
    int sum = 0, i = 0, len = 0, nr = 0;
    char s;
    FILE* pFile; 
    if (fopen_s(&pFile,"Text.txt","r")!=0)
    {
        printf("Could not open the file.\n");
    }
    else
    {
        while (1)
        {
            s = (char)fgetc(pFile);



            if (feof(pFile))
            {
                sum = sum + nr;
                break;
            }
            if (s == '  ' || s == '\n' || s == '\0' || s == '\t')
            {

                i++;
                len = 0;
                sum = sum + nr;
                nr = 0;
            }
            else
            {

                nr = nr * 10 + convert(s);

                len++;
            }
        }
        fclose(pFile);
    }
    printf("%d", sum);
  
   
    

   
}



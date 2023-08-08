#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
char s[50];
int main(int argc , char* argv[])
{
    // Check the CLarg
    if (argc == 2 && isdigit(*argv[1]))
    {
        //int j = atoi(argv[1]); // convert keyvalue to int
        //char s[50]; // input
        printf("plaintext: ");
        scanf("%s", s);

        printf("ciphertext: ");
    }
    else
    {
        printf("Use ./caesar 'key' \n");
        return 1;
    }
    int j = atoi(argv[1]);
    for (int i = 0 , n = strlen(s) ; i < n ; i++) // goes through input letter by letter
    {
        // checking if it is lowercase 97 = a to 112 = z and if it + 13 characters along.
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", (((s[i] - 'a') + j) % 26) + 'a') ; // print lowercase with key

        }
        else if (s[i] >= 'A' && s[i] <= 'Z') //checking for uppercase
        {
            printf("%c", (((s[i] - 'A') + j) % 26) + 'A') ; // prints uppercase with key
        }
        else
        {
            printf("%c", s[i]);
        }
        printf("\n");
        return n;
        
    }
    
    
}

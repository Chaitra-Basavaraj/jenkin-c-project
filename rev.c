#include <stdio.h>
#include <string.h>
void reverse() {
        char string[20], temp;
        int i,length;
        printf("Enter a string:");
        // read string
        scanf("%s", string);
        length = strlen(string)-1;
        for(i=0; i<strlen(string)/2; i++)
        {
                temp = string[i];
                string[i] = string[length];
                string[length--] = temp;
        }
        printf("The reverse of the string is:%s \n", string);
}

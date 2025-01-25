#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define commentSign '#'  // Define the comment sign
#define bufferLength 255 // Define buffer length

// Function to find the position of a character in a string
int findPosOfChar(char *buffer, char charToFind, int length) {
    int i;
    for(i = 0; i < length; i++) {
        if(buffer[i] == charToFind )
        {
            return i;
        }
    }
    return 0;
}

int main(int argc, char *argv[]) 
{
    FILE *filePointer = fopen("file15.c", "r"); // Open the file
    char buffer[bufferLength];
    char *p = (char*)malloc(sizeof(char) * 255);
    char line[100];

    while(fgets(buffer, bufferLength, filePointer))
   { // Read each line
        if (strcmp(line, "#\n") != 0) 
        {
            printf("%s", line);
        }
        else if (strcmp(line, "/\n") != 0) 
        {
            printf("%s", line);
        }
        else if (strcmp(line, "()\n") != 0) 
        {
            printf("%s", line);
        }

    }

    fclose(filePointer); // Close the file
    free(p); // Free allocated memory
    return 0;
}
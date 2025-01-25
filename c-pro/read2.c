#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("file15.c", "r");
    if (file == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        for(int i = 0; i< sizeof(line)/sizeof(line[0]); i++)
        {
            if(line[i] == '#')
            {
                break;
            }
            else if(line[i] == '{')
            {
                break;
            }
            else if(line[i] == '}')
            {
                break;
            }
            else if(line[3] == '(')
            {
                break;
            }
            else if(line[i] != '{')
            {
             printf("%s", line);
             break;
            }
        }
        
            
    
        
    }

    fclose(file);
    return 0;
}
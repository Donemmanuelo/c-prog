#include <stdio.h>
int main ()
{
FILE *fptr;
// open the file
fptr = fopen("file.txt", "w");
 // closing the file
fclose(fptr);
//printf(" %/s", file.txt);
return 0;

}
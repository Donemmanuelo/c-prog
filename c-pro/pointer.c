#include<stdio.h>

int main(void)
{
    int age = 27;
    int *p;
    p = &age;

    printf("age = %dThe contert of p = %d\nAddress of age = %p\n", age, *p, &age);
    printf("Address pointer by p = %p\n", p);
    printf("Address of p = %p\n", &p);
    
    *p = 22;
    printf(" Content of p = %d\age = %d\n", *p, age);
    
    age = 35;
    printf("Content of p = %d\n age = %d\n", *p, age);
    return 0;
}
struct person
{
 char s_name[20];
 char f_name[20];
 char date[20];
 char address[20];
 int age;
};
#include<stdio.h>
int main()
{
    struct person person1, person2;
    
    printf("please enter your surname\n");
    scanf("%s", person1.s_name);
    printf("please enter your first name\n");
    scanf("%s", person1.f_name);
    printf("please enter your date of birth\n");
    scanf("%s", person1.date);
    printf("please enter your address\n");
    scanf("%s", person1.address);
    printf("please enter your age\n");
    scanf("%d", &person1.age);


    printf("please enter your surname\n");
    scanf("%s", person2.s_name);
    printf("please enter your first name\n");
    scanf("%s", person2.f_name);
    printf("please enter your date of birth\n");
    scanf("%s", person2.date);
    printf("please enter your address\n");
    scanf("%s", person2.address);
    printf("please enter your age\n");
    scanf("%d", &person2.age);

    if(person1.age < person2.age)
    {
        printf("person2 is older \n");
    }
    else
    {
        printf("person1 is older \n");
    }
printf("persons:  surname:  firstname:  date_of_birth:  age:  address:\n");
printf("person1    %s        %s         %s   %d     %s\n", person1.s_name, person1.f_name, person1.date, person1.age, person1.address);
printf("person2    %s        %s         %s   %d     %s\n", person2.s_name, person2.f_name, person2.date, person2.age, person2.address);
return 0;
}

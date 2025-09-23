#include<stdio.h>
int main() {
printf("My name is Linda Nalonda, I am 24 years.i like to read\n");
char name[50];
int age;
printf("Enter name\n");
scanf("%s", name);
printf("Enter age\n");
scanf("%d", &age);
printf("Hello %s,you are %d years old", name, age);
return 0;
}

#include <stdio.h>
/**
 * main -  a program to print size of datatypes
 * Return: 0 (Successful!!!)
 */
int main(void)
{
int age;
double double_num;
char character;
float float_num;
long long_num;
long long int long_int;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(age));
printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(long_num));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long_int));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float_num));
return (0);
}

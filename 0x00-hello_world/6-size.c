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

printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(charater));
printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(age));
printf("Size of an long: %lu byte(s)", (unsigned long)sizeof(long_num));
printf("Size of an long long int: %lu byte(s)", (unsigned long)sizeof(long_int));
printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float_num));
return (0)
}

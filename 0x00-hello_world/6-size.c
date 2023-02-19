#include <stdio.h>

/**
 * main -function
 *
 * Return: 0 on successs
 */

int main(void)
{
pritf("Size of char: %lu byte(s)", sizeof(char));
printf("size of int: %lu byte(s)",sizeof(int));
printf("size of a long int: %lu byte(s)",sizeof(long int));
pritf("Size of a long long int: %lu byte(s)", sizeof(long long int));
pritf("size of a float: %lu byte(s)",sizeof(float));
return (0);
}	

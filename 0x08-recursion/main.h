#ifndef _MAINH
#define _MAINH

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c);

/**
 *  * _puts_recursion - prints a string, followed by a new line.
 *   * @s: The string
 *    */

void _puts_recursion(char *s);

/**
 *  * _print_rev_recursion - print reversed string
 *   * @s: The string
 *    */

void _print_rev_recursion(char *s);

/**
 *  * _strlen_recursion - return string length
 *   * @s: string
 *    * Return: string length
 *     */

int _strlen_recursion(char *s);

/**
 *  * factorial - calculates the factorial
 *   * @n: number
 *    * Return: factorial
 *     */
int factorial(int n);

/**
 *  * _pow_recursion - power function x raised to y
 *   * @x: Base
 *    * @y: power
 *     * Return: the result
 *      */

int _pow_recursion(int x, int y);

/**
 *  * _sqrt_recursion - find natural square root of n
 *   * @n: n
 *    * Return: natural square root, or -1 if not natural root
 *     */

int _sqrt_recursion(int n);

/**
 *  * is_prime_number - tells if number is prime
 *   * @n: number to check
 *    * Return: 1 if prime, 0 otherwise
 *     */
int is_prime_number(int n);

/**
 *  * is_palindrome - check if palindrome
 *   * @s: string to check
 *    * Return: 1 if palindrome, 0 if not
 *     */

int is_palindrome(char *s);


#endif

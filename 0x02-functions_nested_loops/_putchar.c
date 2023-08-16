#include <unistd.h>

/**
 * Main - Entry point
 *
 * Description: Prints _putchar and a new line
 *
 * Return: Always 0(success)
 *
 * _putchar - prints out the character, c
 *
 * return: 1 on success and -1 on failure
 *
 * return (write(1, &c, 1));:This line is
 * the function body. It uses the write function
 * from the <unistd.h> header to output
 * the character c to the standard output.
 * The write function takes three arguments:
 * The file descriptor 1, which corresponds
 * to the standard output (STDOUT).
 * The address of the character c
 * (passed as a pointer to &c).
 * The number 1, indicating that only one
 * byte (character) should be written.
 * The write function returns the number
 * of bytes written (which should be 1 in
 * this case),
 * and that value is returned by the
 *  _putchar function.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}

#include "main.h"
#include <unistd.h>

/**
 * -putchar -writes the caracter c to stdout
 *  @c: caracter to  be printed
 *  Return: on success 1
 *  on error, -1 ,and errno is set appropriately
 */

int _putchar(char c)
{       
        
        return (write(1, &c, 1));
}

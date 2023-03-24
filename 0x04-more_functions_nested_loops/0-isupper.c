#include "main.h"

/**
 * _isuppper - check if a letter is upper letter
 * @x: the number to be checked
 * return:1 for upper letter or 0 for any else
 */
int _isupper(int x)
{
	if	(x >=65 && x <= 90)
	{
		return(1);
	}
	return (0);
}

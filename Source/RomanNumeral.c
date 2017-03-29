/*!
 * @file
 * @brief Generates Roman Numerals from
 */

#include <stdio.h>
#include "RomanNumeral.h"

static char * Append(char *output, const char *toAppend)
{
   return output + sprintf(output, "%s", toAppend);
}

void RomanNumeral_Convert(unsigned input, char *output)
{
}

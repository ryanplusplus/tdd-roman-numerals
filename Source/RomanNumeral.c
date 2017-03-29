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

typedef struct
{
   unsigned base;
   const char * s;
} TableEntry_t;

static const TableEntry_t table[] =
   {
      { 100, "C" },
      { 90, "XC" },
      { 50, "L" },
      { 40, "XL" },
      { 10, "X" },
      { 9, "IX" },
      { 5, "V" },
      { 4, "IV" },
      { 1, "I" }
   };

void RomanNumeral_Convert(unsigned input, char *output)
{
   for(size_t i = 0; i < sizeof(table)/sizeof(table[0]); i++)
   {
      while(input >= table[i].base)
      {
         output = Append(output, table[i].s);
         input -= table[i].base;
      }
   }
}

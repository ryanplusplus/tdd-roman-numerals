/*!
 * @file
 * @brief Generates Roman numerals for provided numbers.
 */

#ifndef ROMANNUMERAL_H
#define ROMANNUMERAL_H

/*!
 * Convert to a Roman numeral.
 * @pre The output must be large enough to contain the Roman numeral as a string.
 * @param input The number to convert.
 * @param output String buffer in which to store the converted Roman numeral.
 */
void RomanNumeral_Convert(unsigned input, char *output);

#endif

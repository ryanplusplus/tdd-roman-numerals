/*!
 * @file
 * @brief Tests for Roman numeral conversion.
 */

extern "C"
{
#include "RomanNumeral.h"
}

#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include <string.h>

TEST_GROUP(RomanNumeral)
{
   void ShouldConvert(unsigned n, const char *expected)
   {
      char actual[1000];
      RomanNumeral_Convert(n, actual);
      STRCMP_EQUAL(expected, actual);
   }
};

TEST(RomanNumeral, SuperTest)
{
   ShouldConvert(1, "I");
   ShouldConvert(2, "II");
   ShouldConvert(3, "III");
   ShouldConvert(4, "IV");
   ShouldConvert(5, "V");
   ShouldConvert(6, "VI");
   ShouldConvert(7, "VII");
   ShouldConvert(8, "VIII");
   ShouldConvert(9, "IX");
   ShouldConvert(10, "X");
   ShouldConvert(11, "XI");
   ShouldConvert(12, "XII");
   ShouldConvert(13, "XIII");
   ShouldConvert(14, "XIV");
   ShouldConvert(15, "XV");
   ShouldConvert(16, "XVI");
   ShouldConvert(17, "XVII");
   ShouldConvert(18, "XVIII");
   ShouldConvert(19, "XIX");
   ShouldConvert(20, "XX");
   ShouldConvert(21, "XXI");
   ShouldConvert(22, "XXII");
   ShouldConvert(23, "XXIII");
   ShouldConvert(24, "XXIV");
   ShouldConvert(25, "XXV");
   ShouldConvert(26, "XXVI");
   ShouldConvert(27, "XXVII");
   ShouldConvert(28, "XXVIII");
   ShouldConvert(29, "XXIX");
   ShouldConvert(30, "XXX");
   ShouldConvert(31, "XXXI");
   ShouldConvert(32, "XXXII");
   ShouldConvert(33, "XXXIII");
   ShouldConvert(34, "XXXIV");
   ShouldConvert(35, "XXXV");
   ShouldConvert(36, "XXXVI");
   ShouldConvert(37, "XXXVII");
   ShouldConvert(38, "XXXVIII");
   ShouldConvert(39, "XXXIX");
   ShouldConvert(40, "XL");
   ShouldConvert(41, "XLI");
   ShouldConvert(42, "XLII");
   ShouldConvert(43, "XLIII");
   ShouldConvert(44, "XLIV");
   ShouldConvert(45, "XLV");
   ShouldConvert(46, "XLVI");
   ShouldConvert(47, "XLVII");
   ShouldConvert(48, "XLVIII");
   ShouldConvert(49, "XLIX");
   ShouldConvert(50, "L");
   ShouldConvert(51, "LI");
   ShouldConvert(52, "LII");
   ShouldConvert(53, "LIII");
   ShouldConvert(54, "LIV");
   ShouldConvert(55, "LV");
   ShouldConvert(56, "LVI");
   ShouldConvert(57, "LVII");
   ShouldConvert(58, "LVIII");
   ShouldConvert(59, "LIX");
   ShouldConvert(60, "LX");
   ShouldConvert(61, "LXI");
   ShouldConvert(62, "LXII");
   ShouldConvert(63, "LXIII");
   ShouldConvert(64, "LXIV");
   ShouldConvert(65, "LXV");
   ShouldConvert(66, "LXVI");
   ShouldConvert(67, "LXVII");
   ShouldConvert(68, "LXVIII");
   ShouldConvert(69, "LXIX");
   ShouldConvert(70, "LXX");
   ShouldConvert(71, "LXXI");
   ShouldConvert(72, "LXXII");
   ShouldConvert(73, "LXXIII");
   ShouldConvert(74, "LXXIV");
   ShouldConvert(75, "LXXV");
   ShouldConvert(76, "LXXVI");
   ShouldConvert(77, "LXXVII");
   ShouldConvert(78, "LXXVIII");
   ShouldConvert(79, "LXXIX");
   ShouldConvert(80, "LXXX");
   ShouldConvert(81, "LXXXI");
   ShouldConvert(82, "LXXXII");
   ShouldConvert(83, "LXXXIII");
   ShouldConvert(84, "LXXXIV");
   ShouldConvert(85, "LXXXV");
   ShouldConvert(86, "LXXXVI");
   ShouldConvert(87, "LXXXVII");
   ShouldConvert(88, "LXXXVIII");
   ShouldConvert(89, "LXXXIX");
   ShouldConvert(90, "XC");
   ShouldConvert(91, "XCI");
   ShouldConvert(92, "XCII");
   ShouldConvert(93, "XCIII");
   ShouldConvert(94, "XCIV");
   ShouldConvert(95, "XCV");
   ShouldConvert(96, "XCVI");
   ShouldConvert(97, "XCVII");
   ShouldConvert(98, "XCVIII");
   ShouldConvert(99, "XCIX");
   ShouldConvert(100, "C");
   ShouldConvert(153, "CLIII");
}

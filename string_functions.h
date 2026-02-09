#ifndef STRING_FUNCTIONS_H__ // header guard: to avoid the problem of multiple inclusion
#define STRING_FUNCTIONS_H__
/**
 * Concatenates str1 and str2, placing str2 at the end of str1.
 * Result is stored in dest, str1 and str2 are not modified.
 *
 * @param dest - concatenated result
 * @param str1 - left side string for concatenation
 * @param str2 - right side string for concatenation
 */
void concat(char* const dest, const char* const str1, const char* const str2);

/**
 * Returns a substring from another string. Result is stored in dest.
 * This function assumes start_index and len are valid given the input string.
 *
 * @param dest - resulting substring
 * @param src - original string
 * @param start_index - index (0-based) of start of substring
 * @param len - number of characters to include for the substring.
 *              If -1, the substring goes to the end of the string from the start_index
 *              (e.g., input string "Hello" with start_index=2 and len=-1 --> "llo").
 */
void substring(char* const dest, const char* const src, int start_index, int len);

/**
 * Reverses the characters of a string. Result is stored in dest.
 * @param dest - resulting reversed string
 * @param src - original string
 */
void reverse(char* const dest, const char* const src);

/**
 * Removes " " from the beginning of a string.
 *
 * @param dest - resulting string without " " at the beginning
 *               (e.g., "    hello" --> "hello")
 * @param src - original string
 */
void ltrim(char* const dest, const char* const src);
#endif

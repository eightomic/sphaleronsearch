#include <stddef.h>

char sphaleronsearch_first(const char *haystack, size_t haystack_length,
                           const char *needle, size_t needle_length,
                           size_t *position) {
  char tail_character;
  char mismatch_character;
  size_t i;
  size_t j;
  size_t k;

  if (
    needle_length &&
    needle_length <= haystack_length
  ) {
    i = needle_length - 1;
    tail_character = needle[i];

    while (i < haystack_length) {
      if (haystack[i] != tail_character) {
        i++;
        continue;
      }

      j = i;
      k = needle_length - 1;

      while (k) {
        j--;
        k--;

        if (haystack[j] != needle[k]) {
          break;
        }
      }

      if (haystack[j] == needle[k]) {
        *position = j;
        return 1;
      }

      mismatch_character = needle[k];

      while (i < haystack_length) {
        i++;
        j++;

        if (haystack[j] == mismatch_character) {
          break;
        }
      }
    }
  }

  return 0;
}

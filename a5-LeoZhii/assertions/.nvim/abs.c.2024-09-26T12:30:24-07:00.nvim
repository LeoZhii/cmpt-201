#include <assert.h>
#include <stdint.h>

int32_t absolute_value(int32_t num) {
  int32_t ret = 0;

  // If INT32_MIN is multiplied by -1, it will cause an overflow error.
  assert(num != INT32_MIN);

  if (num < 0) {
    ret = -num;
  } else {
    ret = num;
  }

  assert(ret >= 0);
  return ret;
}

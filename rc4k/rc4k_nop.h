#include <limits.h>

void rc4Transcrypt(uint8_t * const out_block, const uint8_t * const in_BLOCK, const uint8_t in_BLOCK_SIZE, const uint8_t in_KEY[16]) {
  memcpy(out_block, in_BLOCK, in_BLOCK_SIZE);
}


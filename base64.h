#ifndef BASE64_H
#define BASE64_H

#include <stdint.h>

#define BASE64_ENCODE_OUT_SIZE(s) ((uint32_t)((((s) + 2) / 3) * 4 + 1))
#define BASE64_DECODE_OUT_SIZE(s) ((uint32_t)(((s) / 4) * 3))

/*
 * out is null-terminated encode string.
 * return values is out length, exclusive terminating `\0'
 */
uint32_t
base64_encode(const uint8_t *in, uint32_t inlen, char *out);

/*
 * return values is out length
 */
uint32_t
base64_decode(const char *in, uint32_t inlen, uint8_t *out, uint32_t outlen);

#endif /* BASE64_H */
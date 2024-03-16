#ifndef FILE_H_
#define FILE_H_
#include <stdint.h>

#define u8  uint8_t  // 8-bit unsigned integer
#define u16 uint16_t // 16-bit unsigned integer
#define u32 uint32_t // 32-bit unsigned integer
#define u64 uint64_t // 64-bit unsigned integer

#define SET_BIT(x,bit_no) x|(1<<bit_no)
#define CL_BIT(x,bit_no) x&~(1<<bit_no)
#define TOG_BIT(x,bit_no) x^(1<<bit_no)
#define READ_BIT(x,bit_no) (((x)>>(bit_no-1))&1)

#endif

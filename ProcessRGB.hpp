#ifndef __PROCESSRGB_HPP__
#define __PROCESSRGB_HPP__

#include <stdint.h>
#ifndef __ARM_NEON
#define QUICKETC2_HQ
#endif

void CompressEtc1Rgb( const uint32_t* src, uint64_t* dst, uint32_t blocks, size_t width );
void CompressEtc1RgbDither( const uint32_t* src, uint64_t* dst, uint32_t blocks, size_t width );
#ifdef QUICKETC2_HQ
void CompressEtc2Rgb(const uint32_t* src, uint64_t* dst, uint32_t blocks, size_t width, int useHeuristics);
void CompressEtc2Rgba(const uint32_t* src, uint64_t* dst, uint32_t blocks, size_t width, int useHeuristics);
#else
void CompressEtc2Rgb(const uint32_t* src, uint64_t* dst, uint32_t blocks, size_t width, bool useHeuristics);
void CompressEtc2Rgba(const uint32_t* src, uint64_t* dst, uint32_t blocks, size_t width, bool useHeuristics);
#endif


void CompressEacR( const uint32_t* src, uint64_t* dst, uint32_t blocks, size_t width );
void CompressEacRg( const uint32_t* src, uint64_t* dst, uint32_t blocks, size_t width );

#endif

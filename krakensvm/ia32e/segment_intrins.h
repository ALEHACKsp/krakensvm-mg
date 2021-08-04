// got this Semantics idea from Daax& XEROXZ
// XEROXZ - (https://githacks.org/_xeroxz/bluepill/-/blob/master/segment_intrin.asm)
// Daax - 7 Days virtualization

#pragma once
#include <stdint.h>

extern "C" uint16_t __reades();
extern "C" uint16_t __readcs();
extern "C" uint16_t __readss();
extern "C" uint16_t __readds();
extern "C" uint16_t __readfs();
extern "C" uint16_t __readgs();
extern "C" uint16_t __readtr();
extern "C" uint16_t __readldt();
extern "C" uint64_t __readrsp();
extern "C" __forceinline uint64_t __readrip();
extern "C" __forceinline uint64_t __readrflags();

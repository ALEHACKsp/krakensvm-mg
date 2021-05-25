/* This file is part of mg-hypervisor by medievalghoul, licensed under the MIT license:
*
* MIT License
*
* Copyright (c) medievalghoul 2021
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#pragma once

#define HV_POOL_TAG       'VHGM'
#define CPUID_MAX_REGS    4

#include <ntddk.h>
#include <intrin.h>

/*
// Simple use cases
void* operator new(size_t size)
{
	return ExAllocatePoolWithTag(NonPagedPool, size, HV_POOL_TAG);
}

void* operator new[](size_t size)
{
	return ExAllocatePoolWithTag(NonPagedPool, size, HV_POOL_TAG);
}

void operator delete(void* what)
{
	ExFreePool(what);
}

void operator delete(void* what, unsigned long long size)
{
	ExFreePool(what);
}

void operator delete[](void* what)
{
	ExFreePool(what);
}

void operator delete[](void* what, unsigned long long size)
{
	ExFreePool(what);
}
*/

// CPUID

inline void __cpuid(int[CPUID_MAX_REGS], int);
#pragma intrinsic(__cpuid)

inline void __cpuidex(int[CPUID_MAX_REGS], int, int);
#pragma intrinsic(__cpuidex)




#ifndef shadow_h__
#define shadow_h__

#include "pub_tool_basics.h"
#include "pub_tool_tooliface.h"
#include "pub_tool_mallocfree.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef int SM_Int;
typedef size_t SM_SizeT;
typedef unsigned long int SM_Addr;
#include "shadow-lib.h"

void  shadow_free(void* addr) { VG_(free)(addr); }
void *shadow_malloc(size_t size) { return VG_(malloc)("Test",size); }
void *shadow_calloc(size_t nmemb, size_t size) { return VG_(calloc)("test", nmemb, size); }
void  shadow_memcpy(void* dst, void* src, size_t size) { VG_(memcpy)(dst,src,size); }
void  shadow_out_of_memory() {
  VG_(printf)("ERROR: Ran out of memory while allocating shadow memory.\n");
	VG_(exit)(1);
}

#endif // shadow_h__

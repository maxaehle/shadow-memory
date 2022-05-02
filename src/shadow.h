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

void  shadow_free(void* addr);
void* shadow_malloc(SM_SizeT size);
void* shadow_calloc(SM_SizeT nmemb, SM_SizeT size);
void  shadow_out_of_memory();
void  shadow_memcpy(void* dst, void* src, SM_SizeT size);


#endif // shadow_h__

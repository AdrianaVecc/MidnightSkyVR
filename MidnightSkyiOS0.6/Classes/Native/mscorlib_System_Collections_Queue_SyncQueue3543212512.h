﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Queue
struct Queue_t1759945451;

#include "mscorlib_System_Collections_Queue1759945451.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/SyncQueue
struct  SyncQueue_t3543212512  : public Queue_t1759945451
{
public:
	// System.Collections.Queue System.Collections.Queue/SyncQueue::queue
	Queue_t1759945451 * ___queue_6;

public:
	inline static int32_t get_offset_of_queue_6() { return static_cast<int32_t>(offsetof(SyncQueue_t3543212512, ___queue_6)); }
	inline Queue_t1759945451 * get_queue_6() const { return ___queue_6; }
	inline Queue_t1759945451 ** get_address_of_queue_6() { return &___queue_6; }
	inline void set_queue_6(Queue_t1759945451 * value)
	{
		___queue_6 = value;
		Il2CppCodeGenWriteBarrier(&___queue_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

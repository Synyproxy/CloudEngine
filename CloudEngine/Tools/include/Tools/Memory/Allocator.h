#pragma once

#include "Tools/stdafx.h"

namespace Tools
{
	namespace Memory
	{
		union Ptr
		{
			uintptr_t asSize;
			void* asPtr;
		};

		class Allocator
		{
		public:
			Allocator(const size_t p_totalSize);
			virtual ~Allocator();

			virtual void* Allocate(const size_t p_size, const uint8_t p_alignment = 0) = 0;
			virtual void Free(void* ptr) = 0;

			virtual void Init() = 0;

		protected:
			size_t m_totalSize;

			Ptr m_startPtr;
			size_t m_offset;

			size_t m_peak;
		};
	}
}

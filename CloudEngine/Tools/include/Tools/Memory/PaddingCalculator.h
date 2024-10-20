#pragma once

#include "Tools/Memory/Allocator.h"

namespace Tools
{
	namespace Memory
	{
		size_t CalculatePadding(Ptr p_currentAddress, size_t p_alignment);
		size_t CalculatePadding(const Ptr p_currentAddress,
		                               const size_t p_alignment,
		                               const size_t p_headerSize);
	}
}

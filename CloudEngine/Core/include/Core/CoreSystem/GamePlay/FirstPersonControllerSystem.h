#pragma once

#include <Core/stdafx.h>
#include <Core/ECS/System/System.h>

namespace Core
{
	namespace Systems
	{
		class FirstPersonControllerSystem : public Core::System<FirstPersonControllerSystem>
		{
		public:
			virtual void PreUpdate(double p_deltaTime) override;

		};
	}
}
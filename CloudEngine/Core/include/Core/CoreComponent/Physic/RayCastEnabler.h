#pragma once

#include "Core/CoreComponent/Physic/PhysicObject.h"

namespace Core
{
	namespace Components
	{
		// Add this component on non physic objects to use raycast on them
		class RayCastEnabler : Component<RayCastEnabler>
		{
		public:
			RayCastEnabler();

		protected:
			void Init() override;

		private:
			std::shared_ptr<PhysicObject> m_physicObject;
		};
	}
}

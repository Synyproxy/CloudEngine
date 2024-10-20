#pragma once

#include <Core/ECS/System/System.h>
#include "Core/Scene/SceneNode.h"

namespace Core
{
	namespace Systems
	{
		class WorldTransformSystem : public System<WorldTransformSystem>
		{
		public:
			WorldTransformSystem();
			~WorldTransformSystem() = default;

			void Awake() override;
			void PostUpdate(double p_deltaTime) override;

		private:
			void UpdateTransformRecursive(Core::SceneNode* p_sceneNode) const;
		};
	}
}

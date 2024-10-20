#pragma once

#include <Core/ECS/Entity/Entity.h>

namespace Core
{
	namespace Entities
	{
		class Daemon : public Entity<Daemon>
		{
		public:
			explicit Daemon(std::string p_name = {"Daemon"});

		private:
			std::string m_name;
		};
	}
}
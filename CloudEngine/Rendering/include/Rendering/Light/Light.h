#pragma once

#include "Rendering/stdafx.h"
#include "CloudMath.h"

namespace Rendering
{
	class Light
	{
	public:
		Light();
		~Light();

		void SetPosition(const CloudMath::Vector3f& p_position);
		void SetDiffuse(const CloudMath::Vector3f& p_diffuse);

		CloudMath::Vector3f Position() const;
		CloudMath::Vector3f Diffuse() const;

	protected:
		CloudMath::Vector3f m_position;
		CloudMath::Vector3f m_diffuse;
	};
}
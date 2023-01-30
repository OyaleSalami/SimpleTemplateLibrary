#pragma once
#include "Container.h"

namespace Stl
{
	template <class T>
	class Container
	{
	public:
		~Container();

	private:
		T* body = nullptr;
		int len = 0;
		int maxSize = 0;
	};
}

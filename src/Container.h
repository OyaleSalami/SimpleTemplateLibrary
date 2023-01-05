#pragma once
#include "Container.h"

namespace Ltl
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

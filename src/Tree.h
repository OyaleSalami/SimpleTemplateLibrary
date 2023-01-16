#pragma once

namespace Ltl
{
	template<class T>
	class Tree
	{
	public:
		Tree(){}

	private:
		class Node
		{
		public:
			Node() 
			{
				L = nullptr;
				R = nullptr;
			}

			T Value;
			Node* L, R;
		};
	};
}
#include "stdafx.h"
#include "TBinary.h"
#include <iostream>
int main()
{
	{
		TBinaryTree tree;


		try
		{
			tree.Insert(10);
			tree.Insert(20);
			tree.Insert(1);
			tree.Insert(2);
			tree.Insert(15);

			tree.Insert(-10); 
			tree.Insert(10);
		}
		catch (const TExistElementException & e)
		{
			std::cout << e.what();
		}

		std::cout << tree << std::endl;

		try
		{
			TBinaryTree::TNode * found = tree.Find(-10);
			if (found)
			{
				std::cout << found->Data;
			}
		}
		catch (const TNotFoundException & e)
		{
			std::cout << e.what();
		}
	}
	system("pause");
}

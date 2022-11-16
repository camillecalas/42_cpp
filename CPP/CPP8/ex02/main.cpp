#include "MutantStack.tpp"

int main()
{
	std::cout << "*****************************\n";
	std::cout << "************ STACK **********\n";
	{
		MutantStack<int>
		mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "*****************************\n";
	std::cout << "************ LIST ***********\n";
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "*****************************\n";
	std::cout << "************ COPY ***********\n";
	{
		typedef typename MutantStack<int>::iterator iterator;

		MutantStack<int> A;
		A.push(1);
		A.push(2);
		A.push(3);

		MutantStack<int> B(A);
		MutantStack<int> C;


		iterator it_end = A.end();
		for (iterator it_begin = A.begin(); it_begin != it_end; ++it_begin)
			std::cout << *it_begin << std::endl;
		std::cout << "**\n";

		iterator it_end2 = B.end();
		for (iterator it_begin = B.begin(); it_begin != it_end2; ++it_begin)
			std::cout << *it_begin << std::endl;
		std::cout << "**\n";
		
		B.push(4);
		C = B;

		iterator it_end3 = C.end();
		for (iterator it_begin = C.begin(); it_begin != it_end3; ++it_begin)
			std::cout << *it_begin << std::endl;

	}
	return (0);

}
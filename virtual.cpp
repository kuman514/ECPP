#include <iostream>

class kuman
{
	public:
		kuman() {std::cout << "kuman" << std::endl;}
		//~kuman() {std::cout << "~kuman" << std::endl;}
		virtual ~kuman() {std::cout << "~kuman" << std::endl;}
};

class koishi : public kuman
{
	public:
		koishi() {std::cout << "koishi" << std::endl;}
		//~koishi() {std::cout << "~koishi" << std::endl;}
		virtual ~koishi() {std::cout << "~koishi" << std::endl;}
};

int main(void)
{
	kuman *test = new koishi;
	delete test;

	test = new kuman;
	delete test;
	return 0;
}

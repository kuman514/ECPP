#include <iostream>

class cat
{
	public:
		cat() {std::cout << "cat" << std::endl; meow();}
		~cat() {std::cout << "~cat" << std::endl;}
		virtual void meow(void) const = 0;
		//virtual void meow(void) const {std::cout << "meow" << std::endl;}
};

class lion : public cat
{
	public:
		lion() {std::cout << "lion" << std::endl;}
		~lion() {std::cout << "~lion" << std::endl;}
		virtual void meow(void) const {std::cout << "GRRRRRRR..." << std::endl;}
};

int main(void)
{
	lion LION;
	return 0;
}

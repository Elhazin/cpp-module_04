#include <string>
#include <iostream>
	void f(){
		std::cout << "f" << std::endl;
	}
	void g(){
		std::cout << "g" << std::endl;
	}
	void h(){
		std::cout << "h" << std::endl;
	}
	void a(){
		std::cout << "a" << std::endl;
	}
	class d{
		public:
			virtual void f() = 0;
			void func2(){std::cout << "fun2" << std::endl;}
			void func3(){std::cout << "fun3" << std::endl;}
	};

	class dd : public  d{
		public :
			void f(){std::cout << "f" << std::endl;}
			void fun1() const{std::cout << "fun1" << std::endl;}
	};
int main()
{
	const dd var1;
	dd s;
	s.fun1();
}

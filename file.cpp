#include <string>
#include <iostream>
	// void f(){
	// 	std::cout << "f" << std::endl;
	// }
	// void g(){
	// 	std::cout << "g" << std::endl;
	// }
	// void h(){
	// 	std::cout << "h" << std::endl;
	// }
	// void a(){
	// 	std::cout << "a" << std::endl;
	// }
	// class d{
	// 	public:
	// 		virtual void f() = 0;
	// 		void func2(){std::cout << "fun2" << std::endl;}
	// 		void func3(){std::cout << "fun3" << std::endl;}
	// };

	// class dd : public  d{
	// 	public :
	// 		void f(){std::cout << "f" << std::endl;}
	// 		void fun1() const{std::cout << "fun1" << std::endl;}
	// };

#include <iostream>
#include <string>

using namespace std;

// class Exception {

// public:
//    Exception(const string& msg) : msg_(msg) {}
//   ~Exception() {}

//    string getMessage() const {return(msg_);}
// private:
//    string msg_;
// };

// void f() {
//    throw(Exception("Mr. Sulu"));
// }

// int main() {
// 	std::cout << "hello! What is you age?" << std::endl;
// 	int age;
// 	try {
// 		cin >> age;
// 		if (age < 18)
// 			throw (1);
// 		else throw (2);
// 	}
// 	catch(int i)
// 	{
// 		if (i == 1)
// 			std::cout << "access denid : plese try when you will be at the age of 18" << std::endl;
// 		else 
// 			std::cout << "You are old enough please check your email" << std::endl;
// 	}
// }

class d{
	int j;
	public :
		d(){std::cout << "d" << std::endl;};
		d(int d) {std::cout << "holya" << std::endl;}
		~d(){std::cout << "destoucter" << std::endl;};


};


class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}

    void operator+(const MyClass& other) {
        value += other.value;
        // Returning void, no value to use for chaining
    }
};

int main() {
	d f;
	f = d(7);
	std::cout << "hello" << std::endl;

}

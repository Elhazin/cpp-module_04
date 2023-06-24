#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string nn) : ClapTrap(nn)
{
	std::cout << "\e[0;30mThe parametred constroucter of ScavClap is called\e[0m" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "\e[0;30mThe constroucter of ScavClap is called\e[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& copy)
{
	std::cout << "The constroucter of ScavClap is called" << std::endl;
	string	=	copy.string;
	hit		=	copy.hit;
	enegry	=	copy.enegry;
	damage	=	copy.damage;
	return *this;
}

ScavTrap::ScavTrap()
{
	std::cout << "\e[0;30mThe constroucter of ScavClap is called\e[0m" << std::endl;
	hit		=	100;
	enegry	=	50;
	damage	=	20;
}

void ScavTrap::guardGate()
{
	if (hit < 0 || enegry < 0)
		std::cout << "\e[0;31m" << string <<" is Dead\e[0m" << std::endl;
	
	else
		std::cout << string <<" is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hit > 0 && enegry > 0)
	{
		std::cout << "ScavTrap : "  << string << " attack " << target << ", causing " << damage << " points of damage!" << std::endl;
		hit--;
		enegry--;
	}
	else
		std::cout << "\e[0;31m" <<  string << " is dead, So he can not ATTACK\e[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mThe destroucter of ScavClap is called\e[0m" << std::endl;
}










#include <iostream>

#include <cmath>

class Fixed {
	private :
		int fixed_point_value;
		static const int fractional_bits = 8;
	public :
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator+(const Fixed &fixed);
		Fixed &operator-(const Fixed &fixed);
		Fixed &operator*(const Fixed &fixed);   
		Fixed &operator/(const Fixed &fixed);
		bool operator>(const Fixed &fixed);
		bool operator<(const Fixed &fixed);
		bool operator>=(const Fixed &fixed);
		bool operator<=(const Fixed &fixed);
		bool operator==(const Fixed &fixed);
		bool operator!=(const Fixed &fixed);
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed &operator=(const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &a, Fixed &b);
};



Fixed::Fixed() {
	std::cout << "Default constructor called of Fixed class called" << std::endl;
}

void Fixed::setRawBits(int const raw) {
	fixed_point_value = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point_value;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called of Fixed class called" << std::endl;
	fixed_point_value = n << fractional_bits;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called of Fixed class called" << std::endl;
	fixed_point_value = roundf(n * (1 << fractional_bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called of Fixed class called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called of Fixed class called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "\e[40m \e[32m Assignation operator called of Fixed class called \e[0m \e[0m" << std::endl;
	fixed_point_value = fixed.getRawBits();
	return *this;
}

Fixed &Fixed::operator-(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator- called of Fixed class called \e[0m \e[0m" << std::endl;
	this->fixed_point_value -= Fixed.getRawBits();
	return *this;
}


Fixed& Fixed::operator+(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator+ called of Fixed class called \e[0m \e[0m" << std::endl;
	this->fixed_point_value += Fixed.getRawBits();
	return *this;
}

Fixed& Fixed::operator*(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator* called of Fixed class called \e[0m \e[0m" << std::endl;
	this->fixed_point_value *= Fixed.getRawBits();
	return *this;
}

Fixed& Fixed::operator/(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator/ called of Fixed class called \e[0m \e[0m" << std::endl;
	this->fixed_point_value /= Fixed.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator> called of Fixed class called \e[0m \e[0m" << std::endl;
	return (this->fixed_point_value > Fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator< called of Fixed class called \e[0m \e[0m" << std::endl;
	return (this->fixed_point_value < Fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator>= called of Fixed class called \e[0m \e[0m" << std::endl;
	return (this->fixed_point_value >= Fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator<= called of Fixed class called \e[0m \e[0m" << std::endl;
	return (this->fixed_point_value <= Fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator== called of Fixed class called \e[0m \e[0m" << std::endl;
	return (this->fixed_point_value == Fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &Fixed)
{
	std::cout << "\e[40m \e[32m operator!= called of Fixed class called \e[0m \e[0m" << std::endl;
	return (this->fixed_point_value != Fixed.getRawBits());
}


static Fixed &min(Fixed &a, Fixed &b)
{
	std::cout << "\e[40m \e[32m min called of Fixed class called \e[0m \e[0m" << std::endl;
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}
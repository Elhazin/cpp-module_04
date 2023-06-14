#include "Fixed.hpp"

class Fixed {
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
    private:
        int fixedpoint;
        static const int bits = 8;
};

Fixed::Fixed() {
    std::cout  << "Default constructor called" << std::endl;
    fixedpoint = 0;
}

Fixed::~Fixed() {
    std::cout  << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout  << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout  << "Assignation operator called" << std::endl;
    if (this != &fixed)
        fixedpoint = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout  << "getRawBits member function called" << std::endl;
    return fixedpoint;
}

void Fixed::setRawBits(int const raw) {
    std::cout  << "setRawBits member function called" << std::endl;
    fixedpoint = raw;
}

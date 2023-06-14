

#include <iostream>

#include <cmath>

class Fixed {
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
}
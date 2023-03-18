#include "contact.hpp"

class PhoneBook{
        Contact account[8];
    public:
        int size;
        void add(int i);
        void print_index(int i);
        void search();
        void print();
};


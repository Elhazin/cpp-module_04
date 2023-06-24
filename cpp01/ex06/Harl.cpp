
#include "Harl.hpp"

Harl::Harl(std::string name){
    std::cout << "Harl " << name << " is born" << std::endl;
        this->name = name;
}

Harl::~Harl(){
    std::cout << "Harl " << this->name << " is dead" << std::endl;
}


void Harl::debug(){
    std::cout << "[DEBUG]  " << "Try to debug yourself  First" << std::endl;
}

void Harl::error(){
    std::cout << "[ERROR]  " << "PLease fix your error" << std::endl;
}

void Harl::info(){
    std::cout << "[INFO]  " << "You are a good student" << std::endl;
}

void Harl::warning(){
    std::cout << "[WARNING]  " << "I think I deserve to have some extra bacon for free. \nI've been coming for years whereas you started working here since last month" << std::endl;
}
std::string Harl::get_name(){
    return this->name;
}

void Harl::set_name(std::string name){
    this->name = name;
}

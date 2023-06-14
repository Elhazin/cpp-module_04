

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(Brain &brain);
		Brain& operator=(Brain &brain);
		std::string ideas[100];
		void set_ideas(std::string idea, int index);
		std::string get_ideas(int index) const;
};



#endif
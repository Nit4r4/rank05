#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <vector>
# include "ATarget.hpp"

class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget *target);
		void	forgetTargetType(std::string const &targetName);
		ATarget	*createTarget(std::string const &targetName);

	private:
		TargetGenerator(TargetGenerator const &src);
		TargetGenerator	&operator=(TargetGenerator const &rhs);

		std::vector<ATarget*>	_generator;
};

#endif
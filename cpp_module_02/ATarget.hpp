#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;
class ATarget {
	public:
		ATarget(std::string const &type);
		virtual ~ATarget();
		ATarget(ATarget const &src);
		ATarget	&operator=(ATarget const &rhs);

		std::string	const &getType()const;

		virtual ATarget	*clone() const = 0;

		void	getHitBySpell(ASpell const &spell) const;

	private:
		std::string	_type;
};

#endif
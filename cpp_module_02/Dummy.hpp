#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>
# include "ATarget.hpp"

class Dummy : public ATarget {
	public:
		Dummy();
		virtual ~Dummy();

		virtual ATarget	*clone() const;
};

#endif
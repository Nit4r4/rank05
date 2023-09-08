#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget *target) {
	if (target) {
		for(std::vector<ATarget*>::iterator it = _generator.begin(); it != _generator.end(); it++) {
			if((*it)->getType() == target->getType())
				return ;
		}
		_generator.push_back(target->clone());
	}
}

void	TargetGenerator::forgetTargetType(std::string const &targetName) {
	for(std::vector<ATarget*>::iterator it = _generator.begin(); it != _generator.end(); it++) {
		if((*it)->getType() == targetName) {
			delete(*it);
			_generator.erase(it);
			return ;
		}
	}
}
ATarget	*TargetGenerator::createTarget(std::string const &targetName) {
	for(std::vector<ATarget*>::iterator it = _generator.begin(); it != _generator.end(); it++) {
		if((*it)->getType() == targetName) {
			return (*it);
		}
	}
	return (NULL);
}
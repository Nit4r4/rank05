#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string	const &Warlock::getName()const {
	return _name;
}

std::string	const &Warlock::getTitle() const {
	return _title;
}

void	Warlock::setTitle(std::string const &title) {
	_title = title;
}

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << '!' << std::endl; //warning spaces
}

void	Warlock::learnSpell(ASpell *spell) {
	_spellBook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string const &spellName) {
	_spellBook.forgetSpell(spellName);
}

void	Warlock::launchSpell(std::string const &spellName, ATarget &target) {
	ASpell	*spell;

	spell = _spellBook.createSpell(spellName);

	if(spell) {
		spell->launch(target);
	}
	// (_spellBook.createSpell(spellName))->launch(target); //works too
}

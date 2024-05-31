#pragma once
#include "ASpell.hpp"
#include <map>
class SpellBook{
	std::map<std::string, ASpell*> Spell_Book;
	SpellBook(const SpellBook &obj);
	SpellBook &operator=(const SpellBook &obj);
	public:
		SpellBook();
		void		learnSpell(ASpell *spell);
		void		forgetSpell(std::string &spellName);
		ASpell*		createSpell(std::string &spellName);
		~SpellBook();
};
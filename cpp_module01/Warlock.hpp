#pragma once
#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>

class Warlock{
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell*> book;
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		const std::string &getName()const;
		const std::string &getTitle()const;
		void				setTitle(const std::string &title);
		void				introduce()const;
		void				learnSpell(ASpell
		 *spell);
		void				forgetSpell(std::string spellName);
		void				launchSpell(std::string spellName, const ATarget &target);
};
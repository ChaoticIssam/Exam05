#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell{
	protected:
		std::string _name;
		std::string _effects;
		ASpell(const ASpell &obj);
		ASpell &operator=(const ASpell &obj);
	public:
		ASpell(const std::string &name, const std::string &effects);
		~ASpell();
		const std::string	&getName()const;
		const std::string	&getEffects()const;
		void				launch(const ATarget &target);
		virtual ASpell		*clone()const = 0;
};
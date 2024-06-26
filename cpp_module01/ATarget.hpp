#pragma once
#include "ASpell.hpp"

class ASpell;
class ATarget{
	protected:
		std::string	_type;
		ATarget(const ATarget &obj);
		ATarget& operator=(const ATarget &obj);
	public:
		ATarget(const std::string &type);
		~ATarget();
		const std::string	&getType()const;
		virtual ATarget		*clone() const = 0;
		void	getHitBySpell(const ASpell &spell)const;
};
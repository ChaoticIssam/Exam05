#pragma once
#include "ATarget.hpp"
#include <map>
class TargetGenerator{
	std::map<std::string, ATarget*> Target_Book;
	TargetGenerator(const TargetGenerator &obj);
	TargetGenerator &operator=(const TargetGenerator &obj);
	public:
		TargetGenerator();
		void		learnTargetType(ATarget *Target);
		void		forgetTargetType(std::string const &TargetName);
		ATarget*	createTarget(std::string const &TargetName);
		~TargetGenerator();
};
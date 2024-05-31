#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){

}
TargetGenerator::TargetGenerator(const TargetGenerator &obj){
	*this = obj;
}
TargetGenerator &TargetGenerator::operator=(const TargetGenerator &obj){
	this->Target_Book = obj.Target_Book;
	return (*this);
}
TargetGenerator::~TargetGenerator(){

}
void		TargetGenerator::learnTargetType(ATarget *spell){
	if (spell)
		if (Target_Book.find(spell->getType()) == Target_Book.end())
			Target_Book[spell->getType()] = spell->clone();
}
void		TargetGenerator::forgetTargetType(std::string const &TargetName){
	if (Target_Book.find(TargetName) != Target_Book.end())
		Target_Book.erase(Target_Book.find(TargetName));
}
ATarget*		TargetGenerator::createTarget(std::string const &TargetName){
	if (Target_Book.find(TargetName) != Target_Book.end())
		return Target_Book[TargetName]->clone();
	return NULL;
}
#include "ATarget.hpp"

ATarget::ATarget(const std::string &type){
	_type = type;
}
ATarget::ATarget(const ATarget &obj){
	*this = obj;
}
ATarget &ATarget::operator=(const ATarget &obj){
	this->_type = obj._type;
	return (*this);
}
ATarget::~ATarget(){

}
const std::string	&ATarget::getType()const{
	return (_type);
}
void	ATarget::getHitBySpell(const ASpell &spell)const{
	std::cout << _type << " has been " << spell.getEffects() << "!\n";
}
#include "SpellBook.hpp"

SpellBook::SpellBook(){

}
SpellBook::SpellBook(const SpellBook &obj){
	*this = obj;
}
SpellBook &SpellBook::operator=(const SpellBook &obj){
	this->Spell_Book = obj.Spell_Book;
	return (*this);
}
SpellBook::~SpellBook(){

}
void		SpellBook::learnSpell(ASpell *spell){
	if (spell)
		if (Spell_Book.find(spell->getName()) == Spell_Book.end())
			Spell_Book[spell->getName()] = spell->clone();
}
void		SpellBook::forgetSpell(std::string &spellName){
	if (Spell_Book.find(spellName) != Spell_Book.end())
		Spell_Book.erase(Spell_Book.find(spellName));
}
ASpell*		SpellBook::createSpell(std::string &spellName){
	if (Spell_Book.find(spellName) != Spell_Book.end())
		return Spell_Book[spellName]->clone();
	return NULL;
}
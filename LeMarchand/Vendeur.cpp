#include "Vendeur.h"

Vendeur::Vendeur()
{
	for (int i = 0; i < 5; i++)
	{
		etal.push_back(Factory::GetRandomArme());
	}
}
Vendeur::~Vendeur()
{
	etal.clear();
}

std::vector<Arme*> Vendeur::GetEtal()
{
	
	return etal;
}

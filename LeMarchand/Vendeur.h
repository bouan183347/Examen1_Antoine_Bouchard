#pragma once
#include <vector>
#include "Arme.h"
#include "Factory.h"
class Vendeur
{
private :
	std::vector<Arme*> etal;
	std::string tot;
	int i;

public:
	Vendeur();
	~Vendeur();	
	enum class Humeur
	{
		marabout = 1,
		neutre = 2,
		heureux = 3,
		meilleur_ami = 4 
	};

	std::vector<Arme*> GetEtal();

};


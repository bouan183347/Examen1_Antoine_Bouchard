#pragma once
#include "Arme.h"
#include <vector>
#include<string>
class Aventurier
{
private :
	int attaque, force, orDispo;
	Arme* monArme;
	std::vector<Arme*> vecArme;
	void PerdreOr(int orPerdu);
	std::string tot;

public:
	Aventurier(std::string nom);
	~Aventurier();

	int GetAtt();
	void AcheterArme(Arme* arme);
	void AjouterArme(Arme* arme);
	void ChangerArme(Arme* arme);

	std::string To_string();

protected:
	std::string nom;


};


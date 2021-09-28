#pragma once
#include "Utils.h"
#include <string>
class Arme
{
private:
	int valeur;

public:
	int attaque, durabilite;
	float poid;
	std::string nom,tot;
	

	enum class Rarete
	{
		commun = 1,
		rare = 2,
		epique = 3,
		legendaire = 4
	};
	Rarete rarete;

	Arme(int _valeur);
	Arme(std::string nom, int atk);
	~Arme();
	int GetValeur();
	int GetAtt();
	int GetDur();
	float GetPoids();
	std::string GetNom();
	Rarete GetRarete();

	std::string to_string();



};


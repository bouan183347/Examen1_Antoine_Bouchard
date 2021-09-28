#pragma once
#include "Vendeur.h"
#include "Aventurier.h"
#include <iostream>
class Affichage
{
public:
	Affichage();
	void Play();

	enum class MENU
	{
		MENU_Intro = 1,
		MENU_Principal = 2,
		MENU_Personnage = 3,
		MENU_Marche = 4

	};

	MENU menuAfficher;

	void ChangerMenu(MENU menu);
	void AfficherMenu(MENU menu);
private:
	Vendeur* vendeur;
	Aventurier* aventurier;
	std::string input,tot;
	int i;
	void AfficherEtal();
};


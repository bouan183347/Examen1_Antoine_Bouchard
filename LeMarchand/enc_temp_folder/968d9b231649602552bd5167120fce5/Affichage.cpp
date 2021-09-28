#include "Affichage.h"

Affichage::Affichage()
{

}

void Affichage::Play()
{
	ChangerMenu(MENU::MENU_Intro);
	std::cin>>input;
	ChangerMenu(MENU::MENU_Principal);
	std::cin >> input;
	while (input != "quit")
	{
		if (input == "1")
		{
			ChangerMenu(MENU::MENU_Personnage);
			std::cin >> input;
		}
		else if (input == "2")
		{
			ChangerMenu(MENU::MENU_Marche);

		}
	}
}

void Affichage::ChangerMenu(MENU menu)
{
	system("CLS");
	menuAfficher = menu;
	AfficherMenu(menu);
}
void Affichage::AfficherEtal()
{
	i = 1;
	for (Arme* arme : vendeur->GetEtal())
	{
		tot.append(i + "- ");
		tot.append(arme->to_string());
		tot.append("\n");
		i += 1;
	}
	std::cout << tot << std::endl;
}

void Affichage::AfficherMenu(MENU menu)
{
	system("CLS");
	switch (menu)
	{
	case MENU::MENU_Intro:
		std::cout << "bienvenue voyageur, que puis-je faire pour toi aujourd'hui\n\n\n\n\n\n rentre 'c' pour continuer" << std::endl;
		break;
	case MENU::MENU_Principal:
		std::cout << "1 - status de l'aventurier\n2 - voir les Armes disponible au marche\n3- changer d'arme equipee" << std::endl;
		break;
	case MENU::MENU_Personnage :
		std::cout << "votre personnage : \n" << std::endl;
		std::cout << aventurier->To_string() << std::endl;
		break;
	case MENU::MENU_Marche:
		std::cout << "voici le contenu de mon etal\n"<<std::endl;
		AfficherEtal();
		break;
		

		
		
	}
}

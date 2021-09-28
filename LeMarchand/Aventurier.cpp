#include "Aventurier.h"

Aventurier::Aventurier(std::string nom)
{
	attaque = 500;
	force = 200;
	orDispo = 10;
	this->nom = nom;
	monArme = new Arme("bout de bois",1);
}
Aventurier::~Aventurier()
{
	vecArme.clear();
	monArme = NULL;
}

void Aventurier::PerdreOr(int orPerdu)
{
	orDispo -= orPerdu;
}

int Aventurier::GetAtt()
{
	return attaque + monArme->GetAtt();
}
void Aventurier::AcheterArme(Arme* arme)
{

}

void Aventurier::AjouterArme(Arme* arme)
{
	vecArme.push_back(arme);
}
void Aventurier::ChangerArme(Arme* arme)
{
	monArme = arme;
}
std::string Aventurier::To_string()
{
	tot.append("nom: "+ nom + " attaque: " + std::to_string(attaque) + " arme equipe: \n" + monArme->to_string() );
	return tot;
}

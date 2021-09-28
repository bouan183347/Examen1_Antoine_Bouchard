#include "Arme.h"

 Arme::Arme(int _rarete)
{
	 if (_rarete == 1)
	 {
		 rarete = Rarete::commun;
		 valeur = 1;
	 }
	 else if (_rarete == 2)
	 {
		 rarete = Rarete::rare;
		 valeur = 3;
	 }
	 else if (_rarete == 3)
	 {
		 rarete = Rarete::epique;
		 valeur = 6;
	 }
	 else
	 {
		 rarete = Rarete::legendaire;
		 valeur = 10;
	 }
}
 Arme::Arme(std::string nom, int atk)
 {
	 this->nom = nom;
	 attaque = atk;
 }
 Arme::~Arme()
 {

 }

 int Arme::GetValeur()
 {
	 return valeur;
 }

 int Arme::GetAtt()
 {
	 return attaque;
 }

 int Arme::GetDur()
 {
	 return durabilite;
 }

 float Arme::GetPoids()
 {
	 return poid;
 }
 
 std::string Arme::GetNom()
 {
	 return nom;
 }

 Arme::Rarete Arme::GetRarete()
 {
	 return rarete;
 }

 std::string Arme::to_string()
 {
	 tot.append("nom : " + nom + "\nattaque : "+ std::to_string(attaque));
	 return tot;
 }
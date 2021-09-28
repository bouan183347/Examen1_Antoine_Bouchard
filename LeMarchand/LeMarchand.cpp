#include <time.h>
#include <stdlib.h>
#include<vector>
#include <iostream>
#include "Arme.h"
#include "Rapiere.h"
#include "Hache.h"
#include "Arc.h"
#include "Utils.h"
#include "Factory.h"
#include "Affichage.h"






int main()
{
	srand(time(NULL));
	
	Affichage* affichage = new Affichage();
	affichage->Play();
	
}
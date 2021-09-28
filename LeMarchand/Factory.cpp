#include "Factory.h"

int Factory::rnd = 0;

 Arme* Factory::GetRandomArme()
{
	 rnd = Utils::Random(3);
	 
	 if ( rnd == 1)
	 {
		 Rapiere* rapiere = nullptr;
		 rapiere = new Rapiere(Utils::Random(4));
		 return rapiere;
	 }
	 else if (rnd == 2)
	 {
		 Hache* hache = nullptr;
		 hache = new Hache(Utils::Random(4));
		 return hache;
	 }
	 else
	 {
		 Arc* arc = nullptr;
		 arc = new Arc(Utils::Random(4));
		 return arc;
	 }
		 
}
 

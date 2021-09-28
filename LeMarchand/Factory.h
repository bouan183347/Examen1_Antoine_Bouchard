#pragma once
#include "Arme.h"
#include "Arc.h"
#include "Hache.h"
#include "Rapiere.h"
#include "Utils.h"
class Factory
{
	public:
		static Arme* GetRandomArme();
		static int rnd;
};


#pragma once
#include "accesBdd.h"
#include "MapLivre.h"

namespace Services {
	ref class GestionLivre
	{
	public:
		GestionLivre();
		DataSet^ listeLivre(String^);
	private:
		AccesBdd^ acces_bdd;
		MapLivre^ livre;
		DataSet^ ds;

	};
}


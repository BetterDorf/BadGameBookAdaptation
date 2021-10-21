#include <iostream>
#include "crew.h"
#include "ship.h"
#include <vector>
int main()
{

	crew michel = crew(1, 1, commandant);
	crew michelle = crew(1, 1, medic);
	crew Patrik = crew(1, 1, sientifique);
	crew jean_chie = crew(1, 1, malabar);
	crew jean_pleur = crew(1, 1, pilote);

	ship vaisseau = ship(1, 1);

	std::cout << michel.get_endu() << " " << michel.get_habil() << std::endl;
	std::cout << std::endl;
	std::cout << michelle.get_endu() << " " << michelle.get_habil() << std::endl;
	std::cout << std::endl;
	std::cout << Patrik.get_endu() << " " << Patrik.get_habil() << std::endl;
	std::cout << std::endl;
	std::cout << jean_chie.get_endu() << " " << jean_chie.get_habil() << std::endl;
	std::cout << std::endl;
	std::cout << jean_pleur.get_endu() << " " << jean_pleur.get_habil() << std::endl;

}
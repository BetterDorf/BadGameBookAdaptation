#include <iostream>
#include "crew.h"
#include "ship.h"
#include <vector>
#include "../_Common/dice.h"


int main()
{

	dices des;

	crew michel = crew(des.dices_total(1)/2+1, des.dices_total(5), commandant);
	crew michelle = crew(des.dices_total(1)/2+1, des.dices_total(5), medic);
	crew Patrik = crew(des.dices_total(1)/2+1, des.dices_total(5), sientifique);
	crew jean_chie = crew(des.dices_total(1)/2+1, des.dices_total(5), malabar);
	crew jean_pleur = crew(des.dices_total(1)/2+1, des.dices_total(5), pilote);

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
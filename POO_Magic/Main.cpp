#include"Personnage.h"
#include"Magicien.h"
#include"Guerrier.h"

int main() {
	magicien_de_glace m = magicien_de_glace("Maxime",567/* m.set_pv()*/, m.set_smartness(), m.set_force());
	m.display();
	magicien_de_feu magic = magicien_de_feu("Quentin", 600/*m.set_pv()*/, m.set_smartness(), m.set_force());
	magic.display();

	while (m.get_pv() > 0 && magic.get_pv() > 0) {
		if (magic.get_mana() > 30) {
			magic.attaque_speciale(&m);
		}
		else { magic.baston(&magic); }
		if (m.get_mana() > 25) {
			m.attaque_speciale(&magic);
		}
		else { m.baston(&magic); }

		magic.display();
		//cout << "magic attaque" << endl;
		m.display();
		if (m.get_pv() < 0) { cout << "magic le magicien de feu a gagne le combat" << endl; };
		if (magic.get_pv() < 0) { cout << "m le magicien de glace a gagne le combat" << endl; };
	};
	return 0;
}
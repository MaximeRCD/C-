#include <iostream>
#include"Fonctions.h"
#include"Affichage.h"
using namespace std;


void init_bestiaire(especePokemon bestiaire[]) {
	for (int i = 0; i < 150; i++) {
        bestiaire[i].estEvolue = 1;
	}

    // set all evolved pokemon to true
    bestiaire[0].estEvolue = 0;
    bestiaire[3].estEvolue = 0;
    bestiaire[6].estEvolue = 0;
    bestiaire[9].estEvolue = 0;
    bestiaire[12].estEvolue = 0;
    bestiaire[15].estEvolue = 0;
    bestiaire[18].estEvolue = 0;
    bestiaire[20].estEvolue = 0;
    bestiaire[22].estEvolue = 0;
    bestiaire[24].estEvolue = 0;
    bestiaire[26].estEvolue = 0;
    bestiaire[28].estEvolue = 0;
    bestiaire[31].estEvolue = 0;
    bestiaire[34].estEvolue = 0;
    bestiaire[36].estEvolue = 0;
    bestiaire[38].estEvolue = 0;
    bestiaire[40].estEvolue = 0;
    bestiaire[42].estEvolue = 0;
    bestiaire[45].estEvolue = 0;
    bestiaire[47].estEvolue = 0;
    bestiaire[49].estEvolue = 0;
    bestiaire[51].estEvolue = 0;
    bestiaire[53].estEvolue = 0;
    bestiaire[55].estEvolue = 0;
    bestiaire[57].estEvolue = 0;
    bestiaire[59].estEvolue = 0;
    bestiaire[62].estEvolue = 0;
    bestiaire[65].estEvolue = 0;
    bestiaire[68].estEvolue = 0;
    bestiaire[71].estEvolue = 0;
    bestiaire[73].estEvolue = 0;
    bestiaire[76].estEvolue = 0;
    bestiaire[78].estEvolue = 0;
    bestiaire[80].estEvolue = 0;
    bestiaire[82].estEvolue = 0;
    bestiaire[83].estEvolue = 0;
    bestiaire[107].estEvolue = 0;
    bestiaire[108].estEvolue = 0;
    bestiaire[110].estEvolue = 0;
    bestiaire[112].estEvolue = 0;
    bestiaire[113].estEvolue = 0;
    bestiaire[114].estEvolue = 0;
    bestiaire[115].estEvolue = 0;
    bestiaire[117].estEvolue = 0;
    bestiaire[119].estEvolue = 0;
    bestiaire[121].estEvolue = 0;
    bestiaire[122].estEvolue = 0;
    bestiaire[123].estEvolue = 0;
    bestiaire[124].estEvolue = 0;
    bestiaire[125].estEvolue = 0;
    bestiaire[126].estEvolue = 0;
    bestiaire[127].estEvolue = 0;
    bestiaire[128].estEvolue = 0;
    bestiaire[130].estEvolue = 0;
    bestiaire[131].estEvolue = 0;
    bestiaire[132].estEvolue = 0;
    bestiaire[136].estEvolue = 0;
    bestiaire[137].estEvolue = 0;
    bestiaire[139].estEvolue = 0;
    bestiaire[141].estEvolue = 0;
    bestiaire[142].estEvolue = 0;
    bestiaire[143].estEvolue = 0;
    bestiaire[144].estEvolue = 0;
    bestiaire[145].estEvolue = 0;
    bestiaire[146].estEvolue = 0;
    bestiaire[149].estEvolue = 0;

    bestiaire[0].nom = "Bulbizarre";
    bestiaire[0].type = Herbe;
    bestiaire[0].nb_bonbon_to_evolv = 25;
    bestiaire[0].evolution = "Herbizarre";

    bestiaire[1].nom = "Herbizarre";
    bestiaire[1].type = Herbe;
    bestiaire[1].nb_bonbon_to_evolv = 100;
    bestiaire[1].evolution = "Florizarre";

    bestiaire[2].nom = "Florizarre";
    bestiaire[2].type = Herbe;
    bestiaire[2].nb_bonbon_to_evolv = 0;
    bestiaire[2].evolution = "Aucune evolution";

    bestiaire[3].nom = "Salameche";
    bestiaire[3].type = Feu;
    bestiaire[3].nb_bonbon_to_evolv = 25;
    bestiaire[3].evolution = "Reptincel";

    bestiaire[4].nom = "Reptincel";
    bestiaire[4].type = Feu;
    bestiaire[4].nb_bonbon_to_evolv = 100;
    bestiaire[4].evolution = "Dracaufeu";

    bestiaire[5].nom = "Dracaufeu";
    bestiaire[5].type = Feu;
    bestiaire[5].nb_bonbon_to_evolv = 0;
    bestiaire[5].evolution = "Aucune evolution";

    bestiaire[6].nom = "Carapuce";
    bestiaire[6].type = Eau;
    bestiaire[6].nb_bonbon_to_evolv = 25;
    bestiaire[6].evolution = "Carabaffe";

    bestiaire[7].nom = "Carabaffe";
    bestiaire[7].type = Eau;
    bestiaire[7].nb_bonbon_to_evolv = 100;
    bestiaire[7].evolution = "Tortank";

    bestiaire[8].nom = "Tortank";
    bestiaire[8].type = Eau;
    bestiaire[8].nb_bonbon_to_evolv = 0;
    bestiaire[8].evolution = "Aucune evolution";

    bestiaire[9].nom = "Chenipan";
    bestiaire[9].type = Bug;
    bestiaire[9].nb_bonbon_to_evolv = 12;
    bestiaire[9].evolution = "Chrysacier";

    bestiaire[10].nom = "Chrysacier";
    bestiaire[10].type = Bug;
    bestiaire[10].nb_bonbon_to_evolv = 50;
    bestiaire[10].evolution = "Papillusion";

    bestiaire[11].nom = "Papillusion";
    bestiaire[11].type = Bug;
    bestiaire[11].nb_bonbon_to_evolv = 0;
    bestiaire[11].evolution = "Aucune evolution";

    bestiaire[12].nom = "Aspicot";
    bestiaire[12].type = Bug;
    bestiaire[12].nb_bonbon_to_evolv = 12;
    bestiaire[12].evolution = "Coconfort";

    bestiaire[13].nom = "Coconfort";
    bestiaire[13].type = Bug;
    bestiaire[13].nb_bonbon_to_evolv = 50;
    bestiaire[13].evolution = "Dardargnan";

    bestiaire[14].nom = "Dardargnan";
    bestiaire[14].type = Bug;
    bestiaire[14].nb_bonbon_to_evolv = 0;
    bestiaire[14].evolution = "Aucune evolution";

    bestiaire[15].nom = "Roucool";
    bestiaire[15].type = Normal;
    bestiaire[15].nb_bonbon_to_evolv = 12;
    bestiaire[15].evolution = "Roucoups";

    bestiaire[16].nom = "Roucoups";
    bestiaire[16].type = Normal;
    bestiaire[16].nb_bonbon_to_evolv = 50;
    bestiaire[16].evolution = "Roucarnage";

    bestiaire[17].nom = "Roucarnage";
    bestiaire[17].type = Normal;
    bestiaire[17].nb_bonbon_to_evolv = 0;
    bestiaire[17].evolution = "Aucune evolution";

    bestiaire[18].nom = "Rattata";
    bestiaire[18].type = Normal;
    bestiaire[18].nb_bonbon_to_evolv = 25;
    bestiaire[18].evolution = "Rattatac";

    bestiaire[19].nom = "Rattatac";
    bestiaire[19].type = Normal;
    bestiaire[19].nb_bonbon_to_evolv = 0;
    bestiaire[19].evolution = "Aucune evolution";

    bestiaire[20].nom = "Piafabec";
    bestiaire[20].type = Normal;
    bestiaire[20].nb_bonbon_to_evolv = 50;
    bestiaire[20].evolution = "Rapasdepic";

    bestiaire[21].nom = "Rapasdepic";
    bestiaire[21].type = Normal;
    bestiaire[21].nb_bonbon_to_evolv = 0;
    bestiaire[21].evolution = "Aucune evolution";

    bestiaire[22].nom = "Abo";
    bestiaire[22].type = Poison;
    bestiaire[22].nb_bonbon_to_evolv = 50;
    bestiaire[22].evolution = "Arbok";

    bestiaire[23].nom = "Arbok";
    bestiaire[23].type = Poison;
    bestiaire[23].nb_bonbon_to_evolv = 0;
    bestiaire[23].evolution = "Aucune evolution";

    bestiaire[24].nom = "Pikachu";
    bestiaire[24].type = Electrique;
    bestiaire[24].nb_bonbon_to_evolv = 50;
    bestiaire[24].evolution = "Raichu";

    bestiaire[25].nom = "Raichu";
    bestiaire[25].type = Electrique;
    bestiaire[25].nb_bonbon_to_evolv = 0;
    bestiaire[25].evolution = "Aucune evolution";

    bestiaire[26].nom = "Sabelette";
    bestiaire[26].type = Sol;
    bestiaire[26].nb_bonbon_to_evolv = 50;
    bestiaire[26].evolution = "Sablaireau";

    bestiaire[27].nom = "Sablaireau";
    bestiaire[27].type = Sol;
    bestiaire[27].nb_bonbon_to_evolv = 0;
    bestiaire[27].evolution = "Aucune evolution";

    bestiaire[28].nom = "Nidoran meuf";
    bestiaire[28].type = Poison;
    bestiaire[28].nb_bonbon_to_evolv = 25;
    bestiaire[28].evolution = "Nidorina";

    bestiaire[29].nom = "Nidorina";
    bestiaire[29].type = Poison;
    bestiaire[29].nb_bonbon_to_evolv = 100;
    bestiaire[29].evolution = "Nidoqueen";

    bestiaire[30].nom = "Nidoqueen";
    bestiaire[30].type = Poison;
    bestiaire[30].nb_bonbon_to_evolv = 0;
    bestiaire[30].evolution = "Aucune evolution";

    bestiaire[31].nom = "Nidoran kem";
    bestiaire[31].type = Poison;
    bestiaire[31].nb_bonbon_to_evolv = 25;
    bestiaire[31].evolution = "Nidorino";

    bestiaire[32].nom = "Nidorino";
    bestiaire[32].type = Poison;
    bestiaire[32].nb_bonbon_to_evolv = 100;
    bestiaire[32].evolution = "Nidoking";

    bestiaire[33].nom = "Nidoking";
    bestiaire[33].type = Poison;
    bestiaire[33].nb_bonbon_to_evolv = 0;
    bestiaire[33].evolution = "Aucune evolution";

    bestiaire[34].nom = "Melofee";
    bestiaire[34].type = Normal;
    bestiaire[34].nb_bonbon_to_evolv = 50;
    bestiaire[34].evolution = "Melodelfe";

    bestiaire[35].nom = "Melodelfe";
    bestiaire[35].type = Normal;
    bestiaire[35].nb_bonbon_to_evolv = 0;
    bestiaire[35].evolution = "Aucune evolution";

    bestiaire[36].nom = "Goupix";
    bestiaire[36].type = Feu;
    bestiaire[36].nb_bonbon_to_evolv = 50;
    bestiaire[36].evolution = "Feunard";

    bestiaire[37].nom = "Feunard";
    bestiaire[37].type = Feu;
    bestiaire[37].nb_bonbon_to_evolv = 0;
    bestiaire[37].evolution = "Aucune evolution";

    bestiaire[38].nom = "Rondoudou";
    bestiaire[38].type = Normal;
    bestiaire[38].nb_bonbon_to_evolv = 50;
    bestiaire[38].evolution = "Grodoudou";

    bestiaire[39].nom = "Grodoudou";
    bestiaire[39].type = Normal;
    bestiaire[39].nb_bonbon_to_evolv = 0;
    bestiaire[39].evolution = "Aucune evolution";

    bestiaire[40].nom = "Nosferapti";
    bestiaire[40].type = Poison;
    bestiaire[40].nb_bonbon_to_evolv = 50;
    bestiaire[40].evolution = "Nosferalto";

    bestiaire[41].nom = "Nosferalto";
    bestiaire[41].type = Poison;
    bestiaire[41].nb_bonbon_to_evolv = 0;
    bestiaire[41].evolution = "Aucune evolution";

    bestiaire[42].nom = "Mystherbe";
    bestiaire[42].type = Herbe;
    bestiaire[42].nb_bonbon_to_evolv = 25;
    bestiaire[42].evolution = "Ortide";

    bestiaire[43].nom = "Ortide";
    bestiaire[43].type = Herbe;
    bestiaire[43].nb_bonbon_to_evolv = 100;
    bestiaire[43].evolution = "Rafflesia";

    bestiaire[44].nom = "Rafflesia";
    bestiaire[44].type = Herbe;
    bestiaire[44].nb_bonbon_to_evolv = 0;
    bestiaire[44].evolution = "Aucune evolution";

    bestiaire[45].nom = "Paras";
    bestiaire[45].type = Bug;
    bestiaire[45].nb_bonbon_to_evolv = 50;
    bestiaire[45].evolution = "Parasect";

    bestiaire[46].nom = "Parasect";
    bestiaire[46].type = Bug;
    bestiaire[46].nb_bonbon_to_evolv = 0;
    bestiaire[46].evolution = "Aucune evolution";

    bestiaire[47].nom = "Mimitoss";
    bestiaire[47].type = Bug;
    bestiaire[47].nb_bonbon_to_evolv = 50;
    bestiaire[47].evolution = "Aeromite";

    bestiaire[48].nom = "Aeromite";
    bestiaire[48].type = Bug;
    bestiaire[48].nb_bonbon_to_evolv = 0;
    bestiaire[48].evolution = "Aucune evolution";

    bestiaire[49].nom = "Taupiqueur";
    bestiaire[49].type = Sol;
    bestiaire[49].nb_bonbon_to_evolv = 50;
    bestiaire[49].evolution = "Triopikeur";

    bestiaire[50].nom = "Triopikeur";
    bestiaire[50].type = Sol;
    bestiaire[50].nb_bonbon_to_evolv = 0;
    bestiaire[50].evolution = "Aucune evolution";

    bestiaire[51].nom = "Miaouss";
    bestiaire[51].type = Normal;
    bestiaire[51].nb_bonbon_to_evolv = 50;
    bestiaire[51].evolution = "Persian";

    bestiaire[52].nom = "Persian";
    bestiaire[52].type = Normal;
    bestiaire[52].nb_bonbon_to_evolv = 0;
    bestiaire[52].evolution = "Aucune evolution";

    bestiaire[53].nom = "Psykokwak";
    bestiaire[53].type = Eau;
    bestiaire[53].nb_bonbon_to_evolv = 50;
    bestiaire[53].evolution = "Akwakwak";

    bestiaire[54].nom = "Akwakwak";
    bestiaire[54].type = Eau;
    bestiaire[54].nb_bonbon_to_evolv = 0;
    bestiaire[54].evolution = "Aucune evolution";

    bestiaire[55].nom = "Ferosinge";
    bestiaire[55].type = Combat;
    bestiaire[55].nb_bonbon_to_evolv = 50;
    bestiaire[55].evolution = "Colossinge";

    bestiaire[56].nom = "Colossinge";
    bestiaire[56].type = Combat;
    bestiaire[56].nb_bonbon_to_evolv = 0;
    bestiaire[56].evolution = "Aucune evolution";

    bestiaire[57].nom = "Caninos";
    bestiaire[57].type = Feu;
    bestiaire[57].nb_bonbon_to_evolv = 50;
    bestiaire[57].evolution = "Arcanin";

    bestiaire[58].nom = "Arcanin";
    bestiaire[58].type = Feu;
    bestiaire[58].nb_bonbon_to_evolv = 0;
    bestiaire[58].evolution = "Aucune evolution";

    bestiaire[59].nom = "Ptitard";
    bestiaire[59].type = Eau;
    bestiaire[59].nb_bonbon_to_evolv = 25;
    bestiaire[59].evolution = "Tetarte";

    bestiaire[60].nom = "Tetarte";
    bestiaire[60].type = Eau;
    bestiaire[60].nb_bonbon_to_evolv = 100;
    bestiaire[60].evolution = "Tartard";

    bestiaire[61].nom = "Tartard";
    bestiaire[61].type = Eau;
    bestiaire[61].nb_bonbon_to_evolv = 0;
    bestiaire[61].evolution = "Aucune evolution";

    bestiaire[62].nom = "Abra";
    bestiaire[62].type = Psychique;
    bestiaire[62].nb_bonbon_to_evolv = 25;
    bestiaire[62].evolution = "Kadabra";

    bestiaire[63].nom = "Kadabra";
    bestiaire[63].type = Psychique;
    bestiaire[63].nb_bonbon_to_evolv = 100;
    bestiaire[63].evolution = "Alakazam";

    bestiaire[64].nom = "Alakazam";
    bestiaire[64].type = Psychique;
    bestiaire[64].nb_bonbon_to_evolv = 0;
    bestiaire[64].evolution = "Aucune evolution";

    bestiaire[65].nom = "Machop";
    bestiaire[65].type = Combat;
    bestiaire[65].nb_bonbon_to_evolv = 25;
    bestiaire[65].evolution = "Machopeur";

    bestiaire[66].nom = "Machopeur";
    bestiaire[66].type = Combat;
    bestiaire[66].nb_bonbon_to_evolv = 100;
    bestiaire[66].evolution = "Mackogneur";

    bestiaire[67].nom = "Mackogneur";
    bestiaire[67].type = Combat;
    bestiaire[67].nb_bonbon_to_evolv = 0;
    bestiaire[67].evolution = "Aucune evolution";

    bestiaire[68].nom = "Chetiflor";
    bestiaire[68].type = Herbe;
    bestiaire[68].nb_bonbon_to_evolv = 25;
    bestiaire[68].evolution = "Boustiflor";

    bestiaire[69].nom = "Boustiflor";
    bestiaire[69].type = Herbe;
    bestiaire[69].nb_bonbon_to_evolv = 100;
    bestiaire[69].evolution = "Empiflor";

    bestiaire[70].nom = "Empiflor";
    bestiaire[70].type = Herbe;
    bestiaire[70].nb_bonbon_to_evolv = 0;
    bestiaire[70].evolution = "Aucune evolution";

    bestiaire[71].nom = "Tentacool";
    bestiaire[71].type = Eau;
    bestiaire[71].nb_bonbon_to_evolv = 50;
    bestiaire[71].evolution = "Tentacruel";

    bestiaire[72].nom = "Tentacruel";
    bestiaire[72].type = Eau;
    bestiaire[72].nb_bonbon_to_evolv = 0;
    bestiaire[72].evolution = "Aucune evolution";

    bestiaire[73].nom = "Racaillou";
    bestiaire[73].type = Roche;
    bestiaire[73].nb_bonbon_to_evolv = 25;
    bestiaire[73].evolution = "Gravalanch";

    bestiaire[74].nom = "Gravalanch";
    bestiaire[74].type = Roche;
    bestiaire[74].nb_bonbon_to_evolv = 100;
    bestiaire[74].evolution = "Grolem";

    bestiaire[75].nom = "Grolem";
    bestiaire[75].type = Roche;
    bestiaire[75].nb_bonbon_to_evolv = 0;
    bestiaire[75].evolution = "Aucune evolution";

    bestiaire[76].nom = "Ponyta";
    bestiaire[76].type = Feu;
    bestiaire[76].nb_bonbon_to_evolv = 50;
    bestiaire[76].evolution = "Galopa";

    bestiaire[77].nom = "Galopa";
    bestiaire[77].type = Feu;
    bestiaire[77].nb_bonbon_to_evolv = 0;
    bestiaire[77].evolution = "Aucune evolution";

    bestiaire[78].nom = "Ramoloss";
    bestiaire[78].type = Eau;
    bestiaire[78].nb_bonbon_to_evolv = 50;
    bestiaire[78].evolution = "Flagadoss";

    bestiaire[79].nom = "Flagadoss";
    bestiaire[79].type = Eau;
    bestiaire[79].nb_bonbon_to_evolv = 0;
    bestiaire[79].evolution = "Aucune evolution";

    bestiaire[80].nom = "Magneti";
    bestiaire[80].type = Electrique;
    bestiaire[80].nb_bonbon_to_evolv = 50;
    bestiaire[80].evolution = "Magneton";

    bestiaire[81].nom = "Magneton";
    bestiaire[81].type = Electrique;
    bestiaire[81].nb_bonbon_to_evolv = 0;
    bestiaire[81].evolution = "Aucune evolution";

    bestiaire[82].nom = "Canarticho";
    bestiaire[82].type = Normal;
    bestiaire[82].nb_bonbon_to_evolv = 0;
    bestiaire[82].evolution = "Aucune evolution";

    bestiaire[83].nom = "Doduo";
    bestiaire[83].type = Normal;
    bestiaire[83].nb_bonbon_to_evolv = 50;
    bestiaire[83].evolution = "Dodrio";

    bestiaire[84].nom = "Dodrio";
    bestiaire[84].type = Normal;
    bestiaire[84].nb_bonbon_to_evolv = 0;
    bestiaire[84].evolution = "Aucune evolution";

    bestiaire[85].nom = "Otaria";
    bestiaire[85].type = Eau;
    bestiaire[85].nb_bonbon_to_evolv = 50;
    bestiaire[85].evolution = "Lamantine";

    bestiaire[86].nom = "Lamantine";
    bestiaire[86].type = Eau;
    bestiaire[86].nb_bonbon_to_evolv = 0;
    bestiaire[86].evolution = "Aucune evolution";

    bestiaire[87].nom = "Tadmorv";
    bestiaire[87].type = Poison;
    bestiaire[87].nb_bonbon_to_evolv = 50;
    bestiaire[87].evolution = "Grotadmorv";

    bestiaire[88].nom = "Grotadmorv";
    bestiaire[88].type = Poison;
    bestiaire[88].nb_bonbon_to_evolv = 0;
    bestiaire[88].evolution = "Aucune evolution";

    bestiaire[89].nom = "Kokiyas";
    bestiaire[89].type = Eau;
    bestiaire[89].nb_bonbon_to_evolv = 50;
    bestiaire[89].evolution = "Crustabri";

    bestiaire[90].nom = "Crustabri";
    bestiaire[90].type = Eau;
    bestiaire[90].nb_bonbon_to_evolv = 0;
    bestiaire[90].evolution = "Aucune evolution";

    bestiaire[91].nom = "Fantominus";
    bestiaire[91].type = Fantome;
    bestiaire[91].nb_bonbon_to_evolv = 25;
    bestiaire[91].evolution = "Spectrum";

    bestiaire[92].nom = "Spectrum";
    bestiaire[92].type = Fantome;
    bestiaire[92].nb_bonbon_to_evolv = 100;
    bestiaire[92].evolution = "Ectoplasma";

    bestiaire[93].nom = "Ectoplasma";
    bestiaire[93].type = Fantome;
    bestiaire[93].nb_bonbon_to_evolv = 0;
    bestiaire[93].evolution = "Aucune evolution";

    bestiaire[94].nom = "Onix";
    bestiaire[94].type = Roche;
    bestiaire[94].nb_bonbon_to_evolv = 0;
    bestiaire[94].evolution = "Aucune evolution";

    bestiaire[95].nom = "Soporifik";
    bestiaire[95].type = Psychique;
    bestiaire[95].nb_bonbon_to_evolv = 50;
    bestiaire[95].evolution = "Hypnomade";

    bestiaire[96].nom = "Hypnomade";
    bestiaire[96].type = Psychique;
    bestiaire[96].nb_bonbon_to_evolv = 0;
    bestiaire[96].evolution = "Aucune evolution";

    bestiaire[97].nom = "Krabby";
    bestiaire[97].type = Eau;
    bestiaire[97].nb_bonbon_to_evolv = 50;
    bestiaire[97].evolution = "Krabboss";

    bestiaire[98].nom = "Krabboss";
    bestiaire[98].type = Eau;
    bestiaire[98].nb_bonbon_to_evolv = 0;
    bestiaire[98].evolution = "Aucune evolution";

    bestiaire[99].nom = "Voltorbe";
    bestiaire[99].type = Electrique;
    bestiaire[99].nb_bonbon_to_evolv = 50;
    bestiaire[99].evolution = "Electrode";

    bestiaire[100].nom = "Electrode";
    bestiaire[100].type = Electrique;
    bestiaire[100].nb_bonbon_to_evolv = 0;
    bestiaire[100].evolution = "Aucune evolution";

    bestiaire[101].nom = "Noeunoeuf";
    bestiaire[101].type = Herbe;
    bestiaire[101].nb_bonbon_to_evolv = 50;
    bestiaire[101].evolution = "Noadkoko";

    bestiaire[102].nom = "Noadkoko";
    bestiaire[102].type = Herbe;
    bestiaire[102].nb_bonbon_to_evolv = 0;
    bestiaire[102].evolution = "Aucune evolution";

    bestiaire[103].nom = "Osselait";
    bestiaire[103].type = Sol;
    bestiaire[103].nb_bonbon_to_evolv = 50;
    bestiaire[103].evolution = "Ossatueur";

    bestiaire[104].nom = "Ossatueur";
    bestiaire[104].type = Sol;
    bestiaire[104].nb_bonbon_to_evolv = 0;
    bestiaire[104].evolution = "Aucune evolution";

    bestiaire[105].nom = "Kicklee";
    bestiaire[105].type = Combat;
    bestiaire[105].nb_bonbon_to_evolv = 0;
    bestiaire[105].evolution = "Aucune evolution";

    bestiaire[106].nom = "Tygnon";
    bestiaire[106].type = Combat;
    bestiaire[106].nb_bonbon_to_evolv = 0;
    bestiaire[106].evolution = "Aucune evolution";

    bestiaire[107].nom = "Excelangue";
    bestiaire[107].type = Normal;
    bestiaire[107].nb_bonbon_to_evolv = 0;
    bestiaire[107].evolution = "Aucune evolution";

    bestiaire[108].nom = "Smogo";
    bestiaire[108].type = Poison;
    bestiaire[108].nb_bonbon_to_evolv = 50;
    bestiaire[108].evolution = "Smogogo";

    bestiaire[109].nom = "Smogogo";
    bestiaire[109].type = Poison;
    bestiaire[109].nb_bonbon_to_evolv = 0;
    bestiaire[109].evolution = "Aucune evolution";

    bestiaire[110].nom = "Rhinocorne";
    bestiaire[110].type = Sol;
    bestiaire[110].nb_bonbon_to_evolv = 50;
    bestiaire[110].evolution = "Rhinoferos";

    bestiaire[111].nom = "Rhinoferos";
    bestiaire[111].type = Sol;
    bestiaire[111].nb_bonbon_to_evolv = 0;
    bestiaire[111].evolution = "Aucune evolution";

    bestiaire[112].nom = "Leveinard";
    bestiaire[112].type = Normal;
    bestiaire[112].nb_bonbon_to_evolv = 0;
    bestiaire[112].evolution = "Aucune evolution";

    bestiaire[113].nom = "Saquedeneu";
    bestiaire[113].type = Herbe;
    bestiaire[113].nb_bonbon_to_evolv = 0;
    bestiaire[113].evolution = "Aucune evolution";

    bestiaire[114].nom = "Kangourex";
    bestiaire[114].type = Normal;
    bestiaire[114].nb_bonbon_to_evolv = 0;
    bestiaire[114].evolution = "Aucune evolution";

    bestiaire[115].nom = "Hypotrempe";
    bestiaire[115].type = Eau;
    bestiaire[115].nb_bonbon_to_evolv = 50;
    bestiaire[115].evolution = "Hypocean";

    bestiaire[116].nom = "Hypocean";
    bestiaire[116].type = Eau;
    bestiaire[116].nb_bonbon_to_evolv = 0;
    bestiaire[116].evolution = "Aucune evolution";

    bestiaire[117].nom = "Poissirene";
    bestiaire[117].type = Eau;
    bestiaire[117].nb_bonbon_to_evolv = 50;
    bestiaire[117].evolution = "Poissoroy";

    bestiaire[118].nom = "Poissoroy";
    bestiaire[118].type = Eau;
    bestiaire[118].nb_bonbon_to_evolv = 0;
    bestiaire[118].evolution = "Aucune evolution";

    bestiaire[119].nom = "Stari";
    bestiaire[119].type = Eau;
    bestiaire[119].nb_bonbon_to_evolv = 50;
    bestiaire[119].evolution = "Staross";

    bestiaire[120].nom = "Staross";
    bestiaire[120].type = Eau;
    bestiaire[120].nb_bonbon_to_evolv = 0;
    bestiaire[120].evolution = "Aucune evolution";

    bestiaire[121].nom = "Mr.Mime";
    bestiaire[121].type = Psychique;
    bestiaire[121].nb_bonbon_to_evolv = 0;
    bestiaire[121].evolution = "Aucune evolution";

    bestiaire[122].nom = "Insecateur";
    bestiaire[122].type = Bug;
    bestiaire[122].nb_bonbon_to_evolv = 0;
    bestiaire[122].evolution = "Aucune evolution";

    bestiaire[123].nom = "Lippoutou";
    bestiaire[123].type = Glace;
    bestiaire[123].nb_bonbon_to_evolv = 0;
    bestiaire[123].evolution = "Aucune evolution";

    bestiaire[124].nom = "Elektek";
    bestiaire[124].type = Electrique;
    bestiaire[124].nb_bonbon_to_evolv = 0;
    bestiaire[124].evolution = "Aucune evolution";

    bestiaire[125].nom = "Magmar";
    bestiaire[125].type = Feu;
    bestiaire[125].nb_bonbon_to_evolv = 0;
    bestiaire[125].evolution = "Aucune evolution";

    bestiaire[126].nom = "Scarabrute";
    bestiaire[126].type = Bug;
    bestiaire[126].nb_bonbon_to_evolv = 0;
    bestiaire[126].evolution = "Aucune evolution";

    bestiaire[127].nom = "Tauros";
    bestiaire[127].type = Normal;
    bestiaire[127].nb_bonbon_to_evolv = 0;
    bestiaire[127].evolution = "Aucune evolution";

    bestiaire[128].nom = "Magicarpe";
    bestiaire[128].type = Eau;
    bestiaire[128].nb_bonbon_to_evolv = 400;
    bestiaire[128].evolution = "Gyarados";

    bestiaire[129].nom = "Leviator";
    bestiaire[129].type = Eau;
    bestiaire[129].nb_bonbon_to_evolv = 0;
    bestiaire[129].evolution = "Aucune evolution";

    bestiaire[130].nom = "Lokhlass";
    bestiaire[130].type = Eau;
    bestiaire[130].nb_bonbon_to_evolv = 0;
    bestiaire[130].evolution = "Aucune evolution";

    bestiaire[131].nom = "Metamorph";
    bestiaire[131].type = Normal;
    bestiaire[131].nb_bonbon_to_evolv = 0;
    bestiaire[131].evolution = "Aucune evolution";

    bestiaire[132].nom = "Evoli";
    bestiaire[132].type = Normal;
    bestiaire[132].nb_bonbon_to_evolv = 25;
    bestiaire[132].evolution = "Vaporeon, Jolteon ou Flareon (hasard)";

    bestiaire[133].nom = "Aquali";
    bestiaire[133].type = Eau;
    bestiaire[133].nb_bonbon_to_evolv = 0;
    bestiaire[133].evolution = "Aucune evolution";

    bestiaire[134].nom = "Voltali";
    bestiaire[134].type = Electrique;
    bestiaire[134].nb_bonbon_to_evolv = 0;
    bestiaire[134].evolution = "Aucune evolution";

    bestiaire[135].nom = "Pyroli";
    bestiaire[135].type = Feu;
    bestiaire[135].nb_bonbon_to_evolv = 0;
    bestiaire[135].evolution = "Aucune evolution";

    bestiaire[136].nom = "Porygon";
    bestiaire[136].type = Normal;
    bestiaire[136].nb_bonbon_to_evolv = 0;
    bestiaire[136].evolution = "Aucune evolution";

    bestiaire[137].nom = "Amonita";
    bestiaire[137].type = Roche;
    bestiaire[137].nb_bonbon_to_evolv = 50;
    bestiaire[137].evolution = "Amonistar";

    bestiaire[138].nom = "Amonistar";
    bestiaire[138].type = Roche;
    bestiaire[138].nb_bonbon_to_evolv = 0;
    bestiaire[138].evolution = "Aucune evolution";

    bestiaire[139].nom = "Kabuto";
    bestiaire[139].type = Roche;
    bestiaire[139].nb_bonbon_to_evolv = 50;
    bestiaire[139].evolution = "Kabutops";

    bestiaire[140].nom = "Kabutops";
    bestiaire[140].type = Roche;
    bestiaire[140].nb_bonbon_to_evolv = 0;
    bestiaire[140].evolution = "Aucune evolution";

    bestiaire[141].nom = "Ptera";
    bestiaire[141].type = Roche;
    bestiaire[141].nb_bonbon_to_evolv = 0;
    bestiaire[141].evolution = "Aucune evolution";

    bestiaire[142].nom = "Ronflex";
    bestiaire[142].type = Normal;
    bestiaire[142].nb_bonbon_to_evolv = 0;
    bestiaire[142].evolution = "Aucune evolution";

    bestiaire[143].nom = "Artikodin";
    bestiaire[143].type = Glace;
    bestiaire[143].nb_bonbon_to_evolv = 0;
    bestiaire[143].evolution = "Aucune evolution";

    bestiaire[144].nom = "Electhor";
    bestiaire[144].type = Electrique;
    bestiaire[144].nb_bonbon_to_evolv = 0;
    bestiaire[144].evolution = "Aucune evolution";

    bestiaire[145].nom = "Sulfura";
    bestiaire[145].type = Feu;
    bestiaire[145].nb_bonbon_to_evolv = 0;
    bestiaire[145].evolution = "Aucune evolution";

    bestiaire[146].nom = "Minidraco";
    bestiaire[146].type = Dragon;
    bestiaire[146].nb_bonbon_to_evolv = 25;
    bestiaire[146].evolution = "Draco";

    bestiaire[147].nom = "Draco";
    bestiaire[147].type = Dragon;
    bestiaire[147].nb_bonbon_to_evolv = 100;
    bestiaire[147].evolution = "Dracolosse";

    bestiaire[148].nom = "Dracolosse";
    bestiaire[148].type = Dragon;
    bestiaire[148].nb_bonbon_to_evolv = 0;
    bestiaire[148].evolution = "Aucune evolution";

    bestiaire[149].nom = "Mewtwo";
    bestiaire[149].type = Psychique;
    bestiaire[149].nb_bonbon_to_evolv = 0;
    bestiaire[149].evolution = "Aucune evolution";
}

void tri(especePokemon bestiaire[])
    {   // un entier qui sert de m�moire pour l'indGlace des pok�mons
        int a = 0;
        // parcours du bestiaire.
        while (a < 150)
        {
            //comparaison des noms des pok�mons 1 � 1
            for (int i = 0; i < 149; i++)
            {   // tri des pok�mons par noms
                if (bestiaire[i].nom > bestiaire[i + 1].nom)
                {
                    especePokemon echange;
                    echange = bestiaire[i];
                    bestiaire[i] = bestiaire[i + 1];
                    bestiaire[i + 1] = echange;
                }
            }
            //incr�mentation du parcours
            a++;
        }
 
}

string cherchertypepok(especePokemon bestiaire[], string pokemoncherche, string* tab)
{   // entier qui sert de m�moire pour aller chercher le type de pokemeon dans le tab des especes
    int i=0;
    // parcours des pokemons pour trouver le pokemeons dans le bestiaire pour avoir son type
    for (int a = 0; a < 150; a++)
    {
        if (pokemoncherche == bestiaire[a].nom)
        {
            i = bestiaire[a].type;
            break;
        }
    }
    return tab[i];//i est le numero de type de pokemon
}

pokemon* initTableauDynPokedex(const int size) {
    pokemon* p = new pokemon[size];
    return p;
}

void initPokedex(Pokedex* po) {
    po->nbPokemon = 0;
    po->capacite = 10;
    po->mesPokemons = initTableauDynPokedex(10);
}

void insertPokemon(Pokedex* po, pokemon* p) {
    if (po->nbPokemon == po->capacite)
    {
       
        // entier qui garde en m�moire la taille du tableau pr�c�dent
        int taille_precedente = po->capacite;
       
        // Cr�er un tableau dyn 50% plus grand
        po->capacite = floor(po->capacite* 1.5);
     
        // cr�er un nv tableau dyn de taille 2 fois plus grande
        pokemon* monNouveauTabDePoke = initTableauDynPokedex(po->capacite);

        // copier le pr�c�dent tableau dans le nouveau
        for (int i = 0; i < (taille_precedente); i++)
        {
            monNouveauTabDePoke[i] = po->mesPokemons[i];
        }
        // on affecte � la structure pokedex le nv tab dyn
        po->mesPokemons = monNouveauTabDePoke;
        po->mesPokemons[po->nbPokemon] = *p;
        po->nbPokemon += 1;
    }

    else
    {
        po->mesPokemons[po->nbPokemon] = *p;
        po->nbPokemon += 1;
    }


    /*int a = 0 ;
    while(a<po.nbPokemon)
    {
        for (int i = 0 ; i<po.nbPokemon-1; i++)
        {
            int res = strcmp(po.mesPokemons[i].nom,po.mesPokemons[i+1].nom);
            if ( res > 0)
            {
                pokemon echange;
                echange=po.mesPokemons[i];
                po.mesPokemons[i] = po.mesPokemons[i+1];
                po.mesPokemons[i+1]= echange;
            }
        }

        a++;
    }*/
}

// For random(), RAND_MAX
// Assumes 0 <= max <= RAND_MAX
// Returns in the closed interval [0, max]
long random_at_most(long max)
{
    /*unsigned long
        // max <= RAND_MAX < ULONG_MAX, so this is okay.
        num_bins = (unsigned long)max + 1,
        num_rand = (unsigned long)RAND_MAX + 1,
        bin_size = num_rand / num_bins,
        defect = num_rand % num_bins;
    long x;
    do
    {
        x = rand();
    }
    // This is carefully written not to overflow
    while (num_rand - defect <= (unsigned long)x);
    // Truncated division is intentional
    return x / bin_size;*/
    srand(time(NULL));
    long x = rand() % max;
    return x;
}

void init_pokemon(pokemon* p, string name, int exp, int pdv, int niv, int cp) {
    p->nom = name;
    p->xp = exp;
    p->pv = pdv;
    p->niv = niv;
    p->cp = cp;
}

pokemon genererPokemon(especePokemon* bestiaire) {

    int i;
    //cherche un pokemon non �volu� et affecte son num�ro dans le bestiaire
    do {
        i = random_at_most(150);
    } while (bestiaire[i].estEvolue);
    // cr�er le pok�mon en question
    pokemon a;
    init_pokemon(&a, bestiaire[i].nom,0, long(30) + random_at_most(470), 0, long(200) + random_at_most(800));
    return a;
}

void nouv_ress(ressources* r) {

    r->bonbons += random_at_most(10);

    r->poussieres += 100;
}

void powerUp(pokemon* p, ressources* r)
{
    if (r->bonbons >= 10 and r->poussieres >= 300)
    {
        r->bonbons -= 10;
        r->poussieres -= 500;
        p->cp = floor(float(p->cp + random_at_most(4)*p->cp));
    }
    else
    {
        cout << "erreur pas assez de ressources allez attraper plus de pokemons" << endl;
        
    }
    
}

void evolve(pokemon* p, especePokemon* bestiaire, ressources* r, historique* mon_historique)
{
    for (int i = 0; i < 150; i++)
    {
        //int res = strcmp(bestiaire[i].evolvesTo, "Aucune evolution");
        if (bestiaire[i].nom == p->nom && bestiaire[i].evolution != "Aucune evolution")
        {
            if (r->bonbons >= (int)bestiaire[i].nb_bonbon_to_evolv)
            {
                insert_evolution(mon_historique, p->nom, bestiaire[i].evolution);
                r->bonbons -= bestiaire[i].nb_bonbon_to_evolv;
                p->nom = bestiaire[i].evolution;
                p->niv++;
                p->pv += 500;
                cout << "votre pokemon a evoluer en " << p->nom << " felicitation !!! " << endl;
                
            }
            else
            {
                cout << "il vous manque des bonbons retourner capturer plus de pokemons !!! " << endl;

            }break;

        }
        
    }
}

void insert_evolution(historique* mon_historique, string from, string to) {
    /*Cr�ation du nouvel �l�ment*/
    Evolution* nouveau = new evolution;
    if (mon_historique == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->ev_from = from;
    nouveau->ev_to = to;

    /* Insertion de l'�l�ment au d�but de la liste */
    nouveau->suivant = mon_historique->debut;
    mon_historique->debut = nouveau;
    mon_historique->nombre++;
}

Historique* initialisation()
{
    Historique* mon_historique = new historique;
    Evolution* element = new evolution;

    if (mon_historique == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->ev_from = "";
    element->ev_to = "";
    element->suivant = NULL;
    mon_historique->debut = element;
    mon_historique->nombre = 0;

    return mon_historique;
}

int hashfct(string str, int max)
{
    unsigned long hash = 5381;
    int c;
    for (char c : str) {
        hash = hash * 33+ c;
    }
    return (hash % max) ;
}

CombatEspece* getalveole(HashTable* myHashtable, string key) {
    // recurep�re la valeur de hachage associ� au type voulu
    int c = hashfct(key, 26);
    
    // si ce pointeur n'est pas null 
    if (myHashtable->tab[c] != nullptr){
    
        //alors sauv prend la valeur de la premi�re espece dans l'alveole correspondante
        
        CombatEspece* sauv = myHashtable->tab[c]->first;
        
        //tant que l'espece suiviante n'est pas un pointeur null ie fin de liste et que le type de pokemon ne correspond pas au type chercher
        while (sauv != nullptr && sauv->nature != key) {
        
            //on parcourt la liste
            sauv = sauv->next;
        }
        
        // on renvoie le pointeur vers la bonne espece
        return (sauv);
    }
    
}

bool contains(HashTable* myHashtable, CombatEspece* c) {
    CombatEspece* element = getalveole(myHashtable, c->nature);
    return (element != nullptr);
}

void insert(CombatEspece* c, HashTable* myHashtable) {
    // renvoie la valeur de hachage du type voulu
    int alveole = hashfct(c->nature, 26);
    // montre dans quelle alveole est l'espece de type donn�
    //cout <<c->nature <<  "   " << alveole << endl;
    
    // si la t�te de list est un pointeur null, ie , pas d'espece dans l'alveole
    if (myHashtable->tab[alveole] == nullptr) {
        // cr�eation et initialisation d'une t�te de liste
        Head* tabhead = new Head;
        tabhead->hash = alveole;
        tabhead->nbr_espece = 0;
        // la premi�re espece et en t�t de liste
        tabhead->first = c;
        // l'alveole de num�ro valeur hachage pointe vers la t�te de liste
        myHashtable->tab[alveole] = tabhead;
        // incr�mentation du nombre d'espece dans l'alveole
        myHashtable->tab[alveole]->nbr_espece++;
        // incrementation du nombre d'espece dans la table de hachage
        myHashtable->nbr_ele++;

    }
    else
    {
        // decallage de la t�te de liste
        c->next = myHashtable->tab[alveole]->first;
        // mise de l'espece en t�te de liste
        myHashtable->tab[alveole]->first = c;
        //incrementation des nbr
        myHashtable->tab[alveole]->nbr_espece++;
        myHashtable->nbr_ele++;

    }
}

HashTable* initHashTable(HashTable* hashtable)
{
    
    //HashTable myhashtable; variable local initialis� sur la pile
    //HashTable* hashtable = &myhashtable; // pointeur sur l'adresse d'une variable sur la pile avec la port�e initHT 
    //HashTable* hashtable = new HashTable; // pointeur sur la pile (m�moire de faible capacit" qui enregistre les appels entre les fonctions) vers une variable sur le tas. malloc et new est une allocation de la m�moire vive 
    hashtable->nbr_ele = 0;
    hashtable->nbr_alveole = 18;
    //Head* cases[26]; //
    hashtable->tab = new Head*[26];

    // Initialisation
    for (int k = 0; k < 26; k++)
    {
        hashtable->tab[k]= nullptr;
    }

    // Insertions successives
    CombatEspece* bug = new CombatEspece;
    bug->nature = "Bug";
    bug->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        bug->strongAgainst[i] = "none";
        bug->weakAgainst[i] = "none";
    }
    bug->strongAgainst[0] = "Dark";
    bug->strongAgainst[1] = "Herbe";
    bug->strongAgainst[2] = "Psychique";
    bug->weakAgainst[0] = "Feu";
    bug->weakAgainst[1] = "Flying";
    bug->weakAgainst[2] = "Roche";
    insert(bug, hashtable);

    CombatEspece* dark = new CombatEspece;
    dark->nature = "Dark";
    dark->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        dark->strongAgainst[i] = "none";
        dark->weakAgainst[i] = "none";
    }
    dark->strongAgainst[0] = "Fantome";
    dark->strongAgainst[1] = "Psychique";
    dark->weakAgainst[0] = "Bug";
    dark->weakAgainst[1] = "Fairy";
    dark->weakAgainst[2] = "Fight";
    insert(dark, hashtable);

    CombatEspece* dragon = new CombatEspece;
    dragon->nature = "Dragon";
    dragon->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        dragon->strongAgainst[i] = "none";
        dragon->weakAgainst[i] = "none";
    }
    dragon->strongAgainst[0] = "Dragon";
    dragon->weakAgainst[0] = "Dragon";
    dragon->weakAgainst[1] = "Fairy";
    dragon->weakAgainst[2] = "Glace";
    insert(dragon, hashtable);

    CombatEspece* Electrique = new CombatEspece;
    Electrique->nature = "Electrique";
    Electrique->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Electrique->strongAgainst[i] = "none";
        Electrique->weakAgainst[i] = "none";
    }
    Electrique->strongAgainst[0] = "Flying";
    Electrique->strongAgainst[1] = "Eau";
    Electrique->weakAgainst[0] = "Sol";
    insert(Electrique, hashtable);

    CombatEspece* fairy = new CombatEspece;
    fairy->nature = "Fairy";
    fairy->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        fairy->strongAgainst[i] = "none";
        fairy->weakAgainst[i] = "none";
    }
    fairy->strongAgainst[0] = "Dark";
    fairy->strongAgainst[1] = "Dragon";
    fairy->strongAgainst[2] = "Fight";
    fairy->weakAgainst[0] = "Poison";
    fairy->weakAgainst[1] = "Steel";
    insert(fairy, hashtable);

    CombatEspece* fighting = new CombatEspece;
    fighting->nature = "Fighting";
    fighting->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        fighting->strongAgainst[i] = "none";
        fighting->weakAgainst[i] = "none";
    }
    fighting->strongAgainst[0] = "Dark";
    fighting->strongAgainst[1] = "Glace";
    fighting->strongAgainst[2] = "Normal";
    fighting->strongAgainst[3] = "Roche";
    fighting->strongAgainst[4] = "Steel";
    fighting->weakAgainst[0] = "Fairly";
    fighting->weakAgainst[1] = "Flying";
    fighting->weakAgainst[2] = "Psychique";
    insert(fighting, hashtable);

    CombatEspece* Feu = new CombatEspece;
    Feu->nature = "Feu";
    Feu->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Feu->strongAgainst[i] = "none";
        Feu->weakAgainst[i] = "none";
    }
    Feu->strongAgainst[0] = "Bug";
    Feu->strongAgainst[1] = "Herbe";
    Feu->strongAgainst[2] = "Glace";
    Feu->strongAgainst[3] = "Steel";
    Feu->weakAgainst[0] = "Sol";
    Feu->weakAgainst[1] = "Roche";
    Feu->weakAgainst[2] = "Eau";
    insert(Feu, hashtable);

    CombatEspece* flying = new CombatEspece;
    flying->nature = "Flying";
    flying->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        flying->strongAgainst[i] = "none";
        flying->weakAgainst[i] = "none";
    }
    flying->strongAgainst[0] = "Bug";
    flying->strongAgainst[1] = "Fight";
    flying->strongAgainst[2] = "Herbe";
    flying->weakAgainst[0] = "Electrique";
    flying->weakAgainst[1] = "Glace";
    flying->weakAgainst[2] = "Roche";
    insert(flying, hashtable);

    CombatEspece* Fantome = new CombatEspece;
    Fantome->nature = "Fantome";
    Fantome->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Fantome->strongAgainst[i] = "none";
        Fantome->weakAgainst[i] = "none";
    }
    Fantome->strongAgainst[0] = "Fantome";
    Fantome->strongAgainst[1] = "Psychique";
    Fantome->weakAgainst[0] = "Dark";
    Fantome->weakAgainst[1] = "Fantome";
    insert(Fantome, hashtable);

    CombatEspece* Herbe = new CombatEspece;
    Herbe->nature = "Herbe";
    Herbe->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Herbe->strongAgainst[i] = "none";
        Herbe->weakAgainst[i] = "none";
    }
    Herbe->strongAgainst[0] = "Sol";
    Herbe->strongAgainst[1] = "Roche";
    Herbe->strongAgainst[2] = "Eau";
    Herbe->weakAgainst[0] = "Bug";
    Herbe->weakAgainst[1] = "Feu";
    Herbe->weakAgainst[2] = "Flying";
    Herbe->weakAgainst[3] = "Glace";
    Herbe->weakAgainst[4] = "Poison";
    insert(Herbe, hashtable);

    CombatEspece* Sol= new CombatEspece;
    Sol->nature = "Sol";
    Sol->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Sol->strongAgainst[i] = "none";
        Sol->weakAgainst[i] = "none";
    }
    Sol->strongAgainst[0] = "Electrique";
    Sol->strongAgainst[1] = "Feu";
    Sol->strongAgainst[2] = "Poison";
    Sol->strongAgainst[3] = "Roche";
    Sol->strongAgainst[4] = "Steel";
    Sol->weakAgainst[0] = "Herbe";
    Sol->weakAgainst[1] = "Glace";
    Sol->weakAgainst[2] = "Eau";
    insert(Sol, hashtable);

    CombatEspece* Glace = new CombatEspece;
    Glace->nature = "Glace";
    Glace->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Glace->strongAgainst[i] = "none";
        Glace->weakAgainst[i] = "none";
    }
    Glace->strongAgainst[0] = "Dragon";
    Glace->strongAgainst[1] = "Flying";
    Glace->strongAgainst[2] = "Herbe";
    Glace->strongAgainst[3] = "Sol";
    Glace->weakAgainst[0] = "Fight";
    Glace->weakAgainst[1] = "Feu";
    Glace->weakAgainst[2] = "Roche";
    Glace->weakAgainst[3] = "Steel";
    insert(Glace, hashtable);

    CombatEspece* normal = new CombatEspece;
    normal->nature = "Normal";
    normal->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        normal->strongAgainst[i] = "none";
        normal->weakAgainst[i] = "none";
    }
    normal->weakAgainst[0] = "Fight";
    insert(normal, hashtable); // correction ici.

    CombatEspece* poison = new CombatEspece;
    poison->nature = "Poison";
    poison->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        poison->strongAgainst[i] = "none";
        poison->weakAgainst[i] = "none";
    }
    poison->strongAgainst[0] = "Fairy";
    poison->strongAgainst[1] = "Herbe";
    poison->weakAgainst[0] = "Sol";
    poison->weakAgainst[1] = "Psychique";
    insert(poison, hashtable);

    CombatEspece* Psychique = new CombatEspece;
    Psychique->nature = "Psychique";
    Psychique->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Psychique->strongAgainst[i] = "none";
        Psychique->weakAgainst[i] = "none";
    }
    Psychique->strongAgainst[0] = "Fight";
    Psychique->strongAgainst[1] = "Poison";
    Psychique->weakAgainst[0] = "Bug";
    Psychique->weakAgainst[1] = "Dark";
    Psychique->weakAgainst[2] = "Fantome";
    insert(Psychique, hashtable);

    CombatEspece* Roche = new CombatEspece;
    Roche->nature = "Roche";
    Roche->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Roche->strongAgainst[i] = "none";
        Roche->weakAgainst[i] = "none";
    }
    Roche->strongAgainst[0] = "Bug";
    Roche->strongAgainst[1] = "Feu";
    Roche->strongAgainst[2] = "Flying";
    Roche->strongAgainst[3] = "Glace";
    Roche->weakAgainst[0] = "Fight";
    Roche->weakAgainst[1] = "Herbe";
    Roche->weakAgainst[2] = "Sol";
    Roche->weakAgainst[3] = "Steel";
    Roche->weakAgainst[4] = "Eau";
    insert(Roche, hashtable);

    CombatEspece* steel = new CombatEspece;
    steel->nature = "Steel";
    steel->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        steel->strongAgainst[i] = "none";
        steel->weakAgainst[i] = "none";
    }
    steel->strongAgainst[0] = "Fairy";
    steel->strongAgainst[1] = "Glace";
    steel->strongAgainst[2] = "Roche";
    steel->weakAgainst[0] = "Fight";
    steel->weakAgainst[1] = "Feu";
    steel->weakAgainst[2] = "Sol";
    insert(steel, hashtable);

    CombatEspece* Eau = new CombatEspece;
    Eau->nature = "Eau";
    Eau->next = nullptr;
    for (int i = 0; i < 5; i++)
    {
        Eau->strongAgainst[i] = "none";
        Eau->weakAgainst[i] = "none";
    }
    Eau->strongAgainst[0] = "Feu";
    Eau->strongAgainst[1] = "Sol";
    Eau->strongAgainst[2] = "Roche";
    Eau->weakAgainst[0] = "Electrique";
    Eau->weakAgainst[1] = "Herbe";
    insert(Eau, hashtable);
    return hashtable;
}

void combat(Pokedex* po, especePokemon* bestiaire, string* tab, HashTable* myHashtable) {
    
    cout << endl;
    cout << "################################################################################################" << endl;
    cout << "##################################### Place au combat ##########################################" << endl;
    cout << "Entrer les indices des deux pokemons a faire combattre !" << endl;
    // choix des pok�mons � faire combattre
    int a;
    int b;
    cin >> a;
    cin >> b;
    
    // r�cup�ration de leur type 

    string typea = cherchertypepok(bestiaire, po->mesPokemons[a].nom, tab);
    string typeb = cherchertypepok(bestiaire, po->mesPokemons[b].nom, tab);

    // recup�ration de leur espece de combat
    

    CombatEspece* espa = getalveole(myHashtable, typea);
    CombatEspece* espb = getalveole(myHashtable, typeb);

    // impl�mentation de l'attaque des pokemons a et b 
    // v�rification si typeb in strong against a et inversement

    int attA = floor((float(0.1* po->mesPokemons[a].cp)));
    int attB = floor((float(0.1 * po->mesPokemons[b].cp)));

    for (int i = 0; i < 5; i++) {
        if (typeb == espa->strongAgainst[i]) {
            attA *= 4;
        }
        else if (typeb == espa->weakAgainst[i]) {
            attB *= 4;
        }
    }

    //choix du premier pokemon qui attaque
    int aleatoire;
    srand(time(NULL));
    aleatoire = (rand() % 2);
    // 0 c'est pokemon a 
    int pva = po->mesPokemons[a].pv;
    int pvb = po->mesPokemons[b].pv;
    cout << po->mesPokemons[a].nom << " a une attaque � " << attA << " contre " << po->mesPokemons[b].nom << "et poss�de " << pva << " points de vie " << endl;
    cout << po->mesPokemons[b].nom << " a une attaque � " << attB << " contre " << po->mesPokemons[a].nom << "et poss�de " << pvb << " points de vie " << endl;
    if (aleatoire) {
        do {
            pvb -= attA;
            cout << po->mesPokemons[a].nom << " attaque. Il reste " << pvb << " points de vie � " << po->mesPokemons[b].nom << endl;
            pva -= attB;
            cout << po->mesPokemons[b].nom << " attaque. Il reste " << pva << " points de vie � " << po->mesPokemons[a].nom << endl;
        } while (pva > 0 && pvb > 0);
        if ((pva - pvb) > 0) {
            cout << po->mesPokemons[a].nom << " est sorti vainqueur de son duel face a " << po->mesPokemons[b].nom<< endl;
        }else{ cout << po->mesPokemons[b].nom << " est sorti vainqueur de son duel face a " << po->mesPokemons[a].nom << endl; }
    }
    else {
        do {
            pva -= attB;
            cout << po->mesPokemons[b].nom << " attaque. Il reste " << pva << " points de vie � " << po->mesPokemons[a].nom << endl;
            pvb -= attA;
            cout << po->mesPokemons[a].nom << " attaque. Il reste " << pvb << " points de vie � " << po->mesPokemons[b].nom << endl;
        } while (pva > 0 && pvb > 0);
        if ((pva - pvb) > 0) {
            cout << po->mesPokemons[a].nom << " est sorti vainqueur de son duel face a " << po->mesPokemons[b].nom << endl;
        }
        else { cout << po->mesPokemons[b].nom << " est sorti vainqueur de son duel face a " << po->mesPokemons[a].nom << endl; }
    }  
}
//
// Created by Ted on 27/05/2018.
//

#include "RegionController.h"

                                                        /* Constructor */

RegionController::RegionController()
{
    populateIberianList();
    populateFrenchList();
    populateCentralEuropeanList();
    populateEnglishAndIrishList();
    populateScandinavianList();
    populateItalianList();
    populateEasternEuropeanList();
    populateBalkanAndAnatolianList();
    populateRussianList();
}


                                                    /* Population functions */

void RegionController::populateIberianList()
{
    //Portuguese region creation. Includes colonies, but they are present only to bolster the portuguese economy
    Region lisbon = Region("Lisbon", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region porto = Region("Porto", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region beja = Region("Beja", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region portugueseGuinea = Region("Portuguese Guinea", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region goa = Region("Goa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region angola = Region("Angola", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region mozambique = Region("Mozambique", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region madeira = Region("Madeira", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region azores = Region("Azores", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region capeVerde = Region("Cape Verde", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region saoTome = Region("Sao Tome", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region portugueseTimor = Region("Portuguese Timor", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region macau = Region("Macau", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Spanish region creation
    Region madrid = Region("Madrid", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region catalonia = Region("Catalonia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region aragon = Region("Aragon", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region valencia = Region("Valencia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region murcia = Region("Murcia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region andalusia = Region("Andalusia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region extremadura = Region("Extremadura", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region galicia = Region("Galicia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region navarre = Region("Navarre", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region granada = Region("Granada", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region leon = Region("Leon", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region laMancha = Region("La Mancha", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region castille = Region("Castille", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region balearicIslands = Region("Balearic Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region canaryIslands = Region("Canary Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region spanishAfrica = Region("Spanish Africa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region equatorialGuinea = Region("Equatorial Guinea", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region rioDeOro = Region("Rio De Oro", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Addition of portuguese regions to vector
    iberianRegions.push_back(lisbon);
    iberianRegions.push_back(porto);
    iberianRegions.push_back(beja);
    iberianRegions.push_back(portugueseGuinea);
    iberianRegions.push_back(goa);
    iberianRegions.push_back(angola);
    iberianRegions.push_back(mozambique);
    iberianRegions.push_back(madeira);
    iberianRegions.push_back(azores);
    iberianRegions.push_back(capeVerde);
    iberianRegions.push_back(saoTome);
    iberianRegions.push_back(portugueseTimor);
    iberianRegions.push_back(macau);

    //Addition of spanish regions to vector
    iberianRegions.push_back(madrid);
    iberianRegions.push_back(catalonia);
    iberianRegions.push_back(aragon);
    iberianRegions.push_back(valencia);
    iberianRegions.push_back(murcia);
    iberianRegions.push_back(andalusia);
    iberianRegions.push_back(extremadura);
    iberianRegions.push_back(galicia);
    iberianRegions.push_back(navarre);
    iberianRegions.push_back(granada);
    iberianRegions.push_back(leon);
    iberianRegions.push_back(laMancha);
    iberianRegions.push_back(castille);
    iberianRegions.push_back(balearicIslands);
    iberianRegions.push_back(canaryIslands);
    iberianRegions.push_back(spanishAfrica);
    iberianRegions.push_back(equatorialGuinea);
    iberianRegions.push_back(rioDeOro);
}

void RegionController::populateFrenchList()
{
    //French region creation. Includes colonies, but they are present only to bolster the french economy
    Region corsica = Region("Corsica", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region brittany = Region("Brittany", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region normandy = Region("Normandy", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lleDeFrance = Region("lle De France", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lorraine = Region("Lorraine", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region champagne = Region("Champagne", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region aquitaine = Region("Aquitaine", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region rhone = Region("Rhone", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region provence = Region("Provence", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region languedoc = Region("Languedoc", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region poitou = Region("Poitou", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region centre = Region("Centre", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region limousin = Region("Limousin", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region auvergne = Region("Auvergne", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bourgogne = Region("Bourgogne", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region alsace = Region("Alsace", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region pasDeCalais = Region("Pas De Calais", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region loire = Region("Loire", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region midiPyrenees = Region("Midi Pyrenees", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region alpes = Region("Alpes", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region centreSud = Region("Centre-Sud", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region frenchSomaliland = Region("French Somaliland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region senegal = Region("Senegal", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region southernIndochina = Region("Southern Indochina", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region frenchGuiana = Region("FrenchGuiana", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region frenchIndia = Region("French India", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tunisia = Region("Tunisia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region algiers = Region("Algiers", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region constantine = Region("Constantine", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region casablanca = Region("Casablanca", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region marrakech = Region("Marrakech", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tlemcen = Region("Tlemcen", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region algerianDesert = Region("Algerian Desert", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region southernSahara = Region("Southern Sahara", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region gabon = Region("Gabon", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region madagascar = Region("Madagascar", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lebanon = Region("Lebanon", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region damascus = Region("Damascus", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region frenchWestAfrica = Region("French West Africa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region mauritania = Region("Mauritania", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region newCaledonia = Region("New Caledonia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tahiti = Region("Tahiti", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region equatorialAfrica = Region("Equatorial Africa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region gabes = Region("Gabes", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region laos = Region("Laos", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tonkin = Region("Tonkin", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region aleppo = Region("Aleppo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region deirAzZur = Region("Deir-Az-Zur", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region frenchCaribbean = Region("French Caribbean", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region reunion = Region("Reunion", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region comoroIslands = Region("Comoro Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kerguelen = Region("Kerguelen", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region guangzhouwan = Region("Guangzhouwan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region stPierreAndMiquelon = Region("St. Pierre and Miquelon", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region nendo = Region("Nendo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region savoy = Region("Savoy", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region cambodia = Region("Cambodia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Addition of french regions to vector
    frenchRegions.push_back(corsica);
    frenchRegions.push_back(brittany);
    frenchRegions.push_back(normandy);
    frenchRegions.push_back(lleDeFrance);
    frenchRegions.push_back(lorraine);
    frenchRegions.push_back(champagne);
    frenchRegions.push_back(aquitaine);
    frenchRegions.push_back(rhone);
    frenchRegions.push_back(provence);
    frenchRegions.push_back(languedoc);
    frenchRegions.push_back(poitou);
    frenchRegions.push_back(centre);
    frenchRegions.push_back(limousin);
    frenchRegions.push_back(auvergne);
    frenchRegions.push_back(bourgogne);
    frenchRegions.push_back(alsace);
    frenchRegions.push_back(pasDeCalais);
    frenchRegions.push_back(loire);
    frenchRegions.push_back(midiPyrenees);
    frenchRegions.push_back(alpes);
    frenchRegions.push_back(centreSud);
    frenchRegions.push_back(frenchSomaliland);
    frenchRegions.push_back(senegal);
    frenchRegions.push_back(southernIndochina);
    frenchRegions.push_back(frenchGuiana);
    frenchRegions.push_back(frenchIndia);
    frenchRegions.push_back(tunisia);
    frenchRegions.push_back(algiers);
    frenchRegions.push_back(constantine);
    frenchRegions.push_back(casablanca);
    frenchRegions.push_back(marrakech);
    frenchRegions.push_back(tlemcen);
    frenchRegions.push_back(algerianDesert);
    frenchRegions.push_back(southernSahara);
    frenchRegions.push_back(gabon);
    frenchRegions.push_back(madagascar);
    frenchRegions.push_back(lebanon);
    frenchRegions.push_back(damascus);
    frenchRegions.push_back(frenchWestAfrica);
    frenchRegions.push_back(mauritania);
    frenchRegions.push_back(newCaledonia);
    frenchRegions.push_back(tahiti);
    frenchRegions.push_back(equatorialAfrica);
    frenchRegions.push_back(gabes);
    frenchRegions.push_back(laos);
    frenchRegions.push_back(tonkin);
    frenchRegions.push_back(aleppo);
    frenchRegions.push_back(deirAzZur);
    frenchRegions.push_back(frenchCaribbean);
    frenchRegions.push_back(reunion);
    frenchRegions.push_back(comoroIslands);
    frenchRegions.push_back(kerguelen);
    frenchRegions.push_back(guangzhouwan);
    frenchRegions.push_back(stPierreAndMiquelon);
    frenchRegions.push_back(nendo);
    frenchRegions.push_back(savoy);
    frenchRegions.push_back(cambodia);
}

void RegionController::populateEnglishAndIrishList()
{
    //United Kingdom region creation. Includes colonies, but they are present only to bolster the british economy
    Region aberdeenshire = Region("Aberdeenshire", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region abuDhabi = Region("Abu Dhabi", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region aden = Region("Aden", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region alexandria = Region("Alexandria", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region andaman = Region("Andaman", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ascension = Region("Ascension", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region aswan = Region("Aswan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bechuanaland = Region("Bechuanaland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bermuda = Region("Bermuda", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region britishGuyana = Region("British Guyana", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region britishHonduras = Region("British Honduras", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region britishSomaliland = Region("British Somailand", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region cairo = Region("Cairo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ceylon = Region("Ceylon", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region christmasIsland = Region("ChristmansIsland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region cocosIslands = Region("Cocos Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region cyprus = Region("Cyprus", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region diegoGarcia = Region("Diego Garcia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region eastAnglia = Region("East Anglia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region eastMidlands = Region("East Midlands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region easternDesert = Region("Eastern Desert", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region elliceIslands = Region("Ellice Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region falklandIslands = Region("Falkland Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region fiji = Region("Fiji", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region gambia = Region("Gambia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ghana = Region("Ghana", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region gibraltar = Region("Gibraltar", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region gilbertIslands = Region("Gilbert Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region gloucestershire = Region("Gloucestershire", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region greaterLondonArea = Region("Greater London Area", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region hongKong = Region("Hong Kong", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region jamaica = Region("Jamaica", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region jordan = Region("Jordan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kenya = Region("Kenya", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region khartoum = Region("Khartoum", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kuwait = Region("Kuwait", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region labrador = Region("Labrador", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lanark = Region("Lanark", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lancashire = Region("Lancashire", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region leewardIslands = Region("Leeward Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lothian = Region("Lothian", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region malawi = Region("Malawi", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region maldives = Region("Maldives", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region malta = Region("Malta", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region marsaMatruh = Region("Marsa Matruh", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region mauritius = Region("Mauritius", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region nauru = Region("Nauru", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region newfoundland = Region("Newfoundland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region nigeria = Region("Nigeria", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northDarfur = Region("North Darfur", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northernBahamas = Region("Northern Bahamas", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northernEngland = Region("Northern England", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northernIreland = Region("Northern Ireland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region palestine = Region("Palestine", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region pitcairnIsland = Region("Pitcairn Island", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region qatar = Region("Qatar", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region rhodesia = Region("Rhodesia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region saintHelena = Region("Saint Helena", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region scottishHighlands = Region("Scottish Highlands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region seychelles = Region("Seychelles", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sierraLeone = Region("Sierra Leone", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sinai = Region("Sinai", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region southGeorgia = Region("South Georgia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region southWestEngland = Region("South-West England", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region southernBahamas = Region("Southern Bahamas", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sudan = Region("Sudan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sussex = Region("Susses", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tanganyika = Region("Tanganyika", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region trinidad = Region("Trinidad", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region uganda = Region("Uganda", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region wales = Region("Wales", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region westMidlands = Region("West Midlands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region westernDesert = Region("Western Desert", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region windwardIslands = Region("Windward Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region yorkshire = Region("Yorkshire", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region zambia = Region("Zambia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Irish region creation
    Region connaught = Region("Connaught", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region leinster = Region("Leinster", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region munster = Region("Munster", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Addition of british isle regions to vector
    englishAndIrishRegions.push_back(aberdeenshire);
    englishAndIrishRegions.push_back(abuDhabi);
    englishAndIrishRegions.push_back(aden);
    englishAndIrishRegions.push_back(alexandria);
    englishAndIrishRegions.push_back(andaman);
    englishAndIrishRegions.push_back(ascension);
    englishAndIrishRegions.push_back(aswan);
    englishAndIrishRegions.push_back(bechuanaland);
    englishAndIrishRegions.push_back(bermuda);
    englishAndIrishRegions.push_back(britishGuyana);
    englishAndIrishRegions.push_back(britishHonduras);
    englishAndIrishRegions.push_back(britishSomaliland);
    englishAndIrishRegions.push_back(cairo);
    englishAndIrishRegions.push_back(ceylon);
    englishAndIrishRegions.push_back(christmasIsland);
    englishAndIrishRegions.push_back(cocosIslands);
    englishAndIrishRegions.push_back(cyprus);
    englishAndIrishRegions.push_back(diegoGarcia);
    englishAndIrishRegions.push_back(eastAnglia);
    englishAndIrishRegions.push_back(eastMidlands);
    englishAndIrishRegions.push_back(easternDesert);
    englishAndIrishRegions.push_back(elliceIslands);
    englishAndIrishRegions.push_back(falklandIslands);
    englishAndIrishRegions.push_back(fiji);
    englishAndIrishRegions.push_back(gambia);
    englishAndIrishRegions.push_back(ghana);
    englishAndIrishRegions.push_back(gibraltar);
    englishAndIrishRegions.push_back(gilbertIslands);
    englishAndIrishRegions.push_back(gloucestershire);
    englishAndIrishRegions.push_back(greaterLondonArea);
    englishAndIrishRegions.push_back(hongKong);
    englishAndIrishRegions.push_back(jamaica);
    englishAndIrishRegions.push_back(jordan);
    englishAndIrishRegions.push_back(kenya);
    englishAndIrishRegions.push_back(khartoum);
    englishAndIrishRegions.push_back(kuwait);
    englishAndIrishRegions.push_back(labrador);
    englishAndIrishRegions.push_back(lanark);
    englishAndIrishRegions.push_back(lancashire);
    englishAndIrishRegions.push_back(leewardIslands);
    englishAndIrishRegions.push_back(lothian);
    englishAndIrishRegions.push_back(malawi);
    englishAndIrishRegions.push_back(maldives);
    englishAndIrishRegions.push_back(malta);
    englishAndIrishRegions.push_back(marsaMatruh);
    englishAndIrishRegions.push_back(mauritius);
    englishAndIrishRegions.push_back(nauru);
    englishAndIrishRegions.push_back(newfoundland);
    englishAndIrishRegions.push_back(nigeria);
    englishAndIrishRegions.push_back(northDarfur);
    englishAndIrishRegions.push_back(northernBahamas);
    englishAndIrishRegions.push_back(northernEngland);
    englishAndIrishRegions.push_back(northernIreland);
    englishAndIrishRegions.push_back(palestine);
    englishAndIrishRegions.push_back(pitcairnIsland);
    englishAndIrishRegions.push_back(qatar);
    englishAndIrishRegions.push_back(rhodesia);
    englishAndIrishRegions.push_back(saintHelena);
    englishAndIrishRegions.push_back(scottishHighlands);
    englishAndIrishRegions.push_back(seychelles);
    englishAndIrishRegions.push_back(sierraLeone);
    englishAndIrishRegions.push_back(sinai);
    englishAndIrishRegions.push_back(southGeorgia);
    englishAndIrishRegions.push_back(southWestEngland);
    englishAndIrishRegions.push_back(southernBahamas);
    englishAndIrishRegions.push_back(sudan);
    englishAndIrishRegions.push_back(sussex);
    englishAndIrishRegions.push_back(tanganyika);
    englishAndIrishRegions.push_back(trinidad);
    englishAndIrishRegions.push_back(uganda);
    englishAndIrishRegions.push_back(wales);
    englishAndIrishRegions.push_back(westMidlands);
    englishAndIrishRegions.push_back(westernDesert);
    englishAndIrishRegions.push_back(windwardIslands);
    englishAndIrishRegions.push_back(yorkshire);
    englishAndIrishRegions.push_back(zambia);

    //Addition of irish regions to vector
    englishAndIrishRegions.push_back(connaught);
    englishAndIrishRegions.push_back(leinster);
    englishAndIrishRegions.push_back(munster);
}

void RegionController::populateCentralEuropeanList()
{
    //Belgian region creation
    Region vlaanderen = Region("Vlaanderen", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region wallonie = Region("Wallonie", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region leopoldville = Region("Leopoldville", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region centralCongo = Region("Central Congo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region stanleyville = Region("Stanleyville", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Dutch region creation. Includes colonies, but they are present only to bolster the dutch economy
    Region holland = Region("Holland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region brabant = Region("Brabant", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region friesland = Region("Friesland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region suriname = Region("Suriname", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region curacao = Region("Curacao", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region aurIslands = Region("Aur Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region java = Region("Java", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kalimantan = Region("Kalimantan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lesserSundaIslands = Region("Lesser Sunda Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sulawesi = Region("Sulawesi", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sumatra = Region("Sumatra", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region theMoluccas = Region("The Moluccas", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region westPapua = Region("West Papua", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //German region creation
    Region ostpreussen = Region("Ostpreussen", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region moselland = Region("Moselland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region wurttemberg = Region("Wurttemberg", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region rhineland = Region("Rhineland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region oberbayern = Region("Oberbayern", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region niederbayern = Region("Niederbayern", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region franken = Region("Franken", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region hessen = Region("Hessen", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region weserEms = Region("Weser-Ems", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region westfalen = Region("Westfalen", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region schleswigHolstein = Region("Schleswig-Holstein", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region hannover = Region("Hannover", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region thuringen = Region("Thuringen", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region mecklenburg = Region("Mecklenburg", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region pommern = Region("Pommern", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region hinterpommern = Region("Hinterpommern", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region brandenburg = Region("Brandenburg", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sachsen = Region("Sachsen", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region niederschlesien = Region("Niederschlesien", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region oberschlesien = Region("Oberschlesien", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ostmark = Region("Ostmark", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Danish region creation
    Region sjaelland = Region("Sjaelland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region jutland = Region("Jutland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region iceland = Region("Iceland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region greenland = Region("Greenland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region faroeIslands = Region("Faroe Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Swiss region creation
    Region switzerland = Region("Switzerland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region easternSwitzerland = Region("Eastern Switzerland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Austrian region creation
    Region lowerAustria = Region("Lower Austria", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region upperAustria = Region("Upper Austria", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tyrol = Region("Tyrol", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Addition of belgian regions to vector
    centralEuropeanRegions.push_back(vlaanderen);
    centralEuropeanRegions.push_back(wallonie);
    centralEuropeanRegions.push_back(leopoldville);
    centralEuropeanRegions.push_back(centralCongo);
    centralEuropeanRegions.push_back(stanleyville);

    //Addition of dutch regions
    centralEuropeanRegions.push_back(holland);
    centralEuropeanRegions.push_back(brabant);
    centralEuropeanRegions.push_back(friesland);
    centralEuropeanRegions.push_back(suriname);
    centralEuropeanRegions.push_back(curacao);
    centralEuropeanRegions.push_back(aurIslands);
    centralEuropeanRegions.push_back(java);
    centralEuropeanRegions.push_back(kalimantan);
    centralEuropeanRegions.push_back(lesserSundaIslands);
    centralEuropeanRegions.push_back(sulawesi);
    centralEuropeanRegions.push_back(sumatra);
    centralEuropeanRegions.push_back(theMoluccas);
    centralEuropeanRegions.push_back(westPapua);

    //Addition of german regions to vector
    centralEuropeanRegions.push_back(ostpreussen);
    centralEuropeanRegions.push_back(moselland);
    centralEuropeanRegions.push_back(wurttemberg);
    centralEuropeanRegions.push_back(rhineland);
    centralEuropeanRegions.push_back(oberbayern);
    centralEuropeanRegions.push_back(niederbayern);
    centralEuropeanRegions.push_back(franken);
    centralEuropeanRegions.push_back(hessen);
    centralEuropeanRegions.push_back(weserEms);
    centralEuropeanRegions.push_back(westfalen);
    centralEuropeanRegions.push_back(schleswigHolstein);
    centralEuropeanRegions.push_back(hannover);
    centralEuropeanRegions.push_back(thuringen);
    centralEuropeanRegions.push_back(mecklenburg);
    centralEuropeanRegions.push_back(pommern);
    centralEuropeanRegions.push_back(hinterpommern);
    centralEuropeanRegions.push_back(brandenburg);
    centralEuropeanRegions.push_back(sachsen);
    centralEuropeanRegions.push_back(niederschlesien);
    centralEuropeanRegions.push_back(oberschlesien);

    //Addition of danish regions to vector
    centralEuropeanRegions.push_back(sjaelland);
    centralEuropeanRegions.push_back(jutland);
    centralEuropeanRegions.push_back(iceland);
    centralEuropeanRegions.push_back(greenland);
    centralEuropeanRegions.push_back(faroeIslands);

    //Addition of swiss regions to vector
    centralEuropeanRegions.push_back(switzerland);
    centralEuropeanRegions.push_back(easternSwitzerland);

    //Addition of austrian regions to vector
    centralEuropeanRegions.push_back(lowerAustria);
    centralEuropeanRegions.push_back(upperAustria);
    centralEuropeanRegions.push_back(tyrol);
}

void RegionController::populateScandinavianList()
{
    //Creation of swedish regions
    Region gotland = Region("Gotland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lappland = Region("Lappland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region norrland = Region("Norrland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region scania = Region("Scania", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region smaland = Region("Smaland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region svealand = Region("Svealand", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region vastergotland = Region("Vastergotland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Creation of norwegian regions
    Region nordNorge = Region("Nord-Norge", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region trondelag = Region("Trondelag", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region vestlandet = Region("Vestlandet", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ostlandet = Region("Ostlandet", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Creation of finnish regions
    Region karjala = Region("Karjala", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lappi = Region("Lappi", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region petsamo = Region("Petsamo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region pohjanmaa = Region("Pohjanmaa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region salla = Region("Salla", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region savo = Region("Savo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region uusimaa = Region("Uusimaa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region aland = Region("Aland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Addition of swedish regions to vector
    scandinavianRegions.push_back(gotland);
    scandinavianRegions.push_back(lappland);
    scandinavianRegions.push_back(norrland);
    scandinavianRegions.push_back(scania);
    scandinavianRegions.push_back(smaland);
    scandinavianRegions.push_back(svealand);
    scandinavianRegions.push_back(ostlandet);

    //Addition of norwegian regions to vector
    scandinavianRegions.push_back(nordNorge);
    scandinavianRegions.push_back(trondelag);
    scandinavianRegions.push_back(vestlandet);
    scandinavianRegions.push_back(ostlandet);

    //Addition of finnish regions to vector
    scandinavianRegions.push_back(karjala);
    scandinavianRegions.push_back(lappi);
    scandinavianRegions.push_back(petsamo);
    scandinavianRegions.push_back(pohjanmaa);
    scandinavianRegions.push_back(salla);
    scandinavianRegions.push_back(savo);
    scandinavianRegions.push_back(uusimaa);
    scandinavianRegions.push_back(aland);
}

void RegionController::populateItalianList()
{
    //Creation of italian regions
    Region abruzzo = Region("Abruzzo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region benghasi = Region("Benghasi", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region calabria = Region("Calabria", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region campania = Region("Campania", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region cyrenaica = Region("Cyrenaica", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region derna = Region("Derna", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region dodecanese = Region("Dodecanese", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region elAgheila = Region("El Agheila", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region emiliaRomagna = Region("Emilia Romagna", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region eritrea = Region("Eritrea", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region istria = Region("Istria", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region latium = Region("Latium", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region libyanDesert = Region("Libyan Desert", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lombardy = Region("Lombardy", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region piedmont = Region("Piedmont", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sardinia = Region("Sardinia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sicily = Region("Sicily", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sirte = Region("Sirte", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region somaliland = Region("Somaliland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region southTyrol = Region("South Tyrol", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tripoli = Region("Tripoli", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tripolitania = Region("Tripolitania", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tuscany = Region("Tuscany", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region veneto = Region("Veneto", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region zara = Region("Zara", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Addition to italian vector
    italianRegions.push_back(abruzzo);
    italianRegions.push_back(benghasi);
    italianRegions.push_back(calabria);
    italianRegions.push_back(campania);
    italianRegions.push_back(cyrenaica);
    italianRegions.push_back(derna);
    italianRegions.push_back(dodecanese);
    italianRegions.push_back(elAgheila);
    italianRegions.push_back(emiliaRomagna);
    italianRegions.push_back(eritrea);
    italianRegions.push_back(istria);
    italianRegions.push_back(latium);
    italianRegions.push_back(libyanDesert);
    italianRegions.push_back(lombardy);
    italianRegions.push_back(piedmont);
    italianRegions.push_back(sardinia);
    italianRegions.push_back(sicily);
    italianRegions.push_back(sirte);
    italianRegions.push_back(somaliland);
    italianRegions.push_back(southTyrol);
    italianRegions.push_back(tripoli);
    italianRegions.push_back(tripolitania);
    italianRegions.push_back(tuscany);
    italianRegions.push_back(veneto);
    italianRegions.push_back(zara);
}

void RegionController::populateEasternEuropeanList()
{
    //Creation of polish regions
    Region bialystok = Region("Bialystok", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region danzig = Region("Danzig", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region katowice = Region("Katowice", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kielce = Region("Kielce", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region krakow = Region("Krakow", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lublin = Region("Lublin", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lwow = Region("Lwow", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region nowogrodek = Region("Nowogrodek", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region polesie = Region("Polesie", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region poznan = Region("Poznan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region plock = Region("Plock", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region stanislawow = Region("Stanislawow", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region warszawa = Region("Warszawa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region wilejka = Region("Wilejka", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region wilno = Region("Wilno", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region wolyn = Region("Wolyn", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lodz = Region("Lodz", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Creation of czechoslovakian regions
    Region bohemia = Region("Bohemia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region carpathianRuthenia = Region("Carpathian Ruthenia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region easternSlovakia = Region("Eastern Slovakia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region easternSudetenland = Region("Eastern Sudetenland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region moravia = Region("Moravia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region southernSlovakia = Region("Southern Slovakia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sudetenland = Region("Sudetenland", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region westernSlovakia = Region("Western Slovakia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region zaolzie = Region("Zaolzie", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Creation of hungarian regions
    Region alfold = Region("Alfold", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northernHungary = Region("Northern Hungary", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region transdanubia = Region("Transdanubia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Addition of polish regions to vector
    easternEuropeanRegions.push_back(bialystok);
    easternEuropeanRegions.push_back(danzig);
    easternEuropeanRegions.push_back(katowice);
    easternEuropeanRegions.push_back(kielce);
    easternEuropeanRegions.push_back(krakow);
    easternEuropeanRegions.push_back(lublin);
    easternEuropeanRegions.push_back(lwow);
    easternEuropeanRegions.push_back(nowogrodek);
    easternEuropeanRegions.push_back(polesie);
    easternEuropeanRegions.push_back(poznan);
    easternEuropeanRegions.push_back(plock);
    easternEuropeanRegions.push_back(stanislawow);
    easternEuropeanRegions.push_back(warszawa);
    easternEuropeanRegions.push_back(wilejka);
    easternEuropeanRegions.push_back(wilno);
    easternEuropeanRegions.push_back(wolyn);
    easternEuropeanRegions.push_back(lodz);

    //Addition of czechoslovakian regions to vector
    easternEuropeanRegions.push_back(bohemia);
    easternEuropeanRegions.push_back(carpathianRuthenia);
    easternEuropeanRegions.push_back(easternSlovakia);
    easternEuropeanRegions.push_back(easternSudetenland);
    easternEuropeanRegions.push_back(moravia);
    easternEuropeanRegions.push_back(southernSlovakia);
    easternEuropeanRegions.push_back(sudetenland);
    easternEuropeanRegions.push_back(westernSlovakia);
    easternEuropeanRegions.push_back(zaolzie);

    //Addition of hungarian regions to vector
    easternEuropeanRegions.push_back(alfold);
    easternEuropeanRegions.push_back(northernHungary);
    easternEuropeanRegions.push_back(transdanubia);
}

void RegionController::populateBalkanAndAnatolianList()
{
    //Creation of romanian regions
    Region banat = Region("Banat", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bessarabia = Region("Bessarabia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bucovina = Region("Bucovina", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region crisana = Region("Crisana", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region dobrudja = Region("Dobrudja", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region moldova = Region("Moldova", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region muntenia = Region("Muntenia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northTransylvania = Region("North Transylvania", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region oltenia = Region("Oltenia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region southernBessarabia = Region("Southern Bessarabia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region transylvania = Region("Transylvania", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Creation of yugoslavian regions
    Region bosnia = Region("Bosnia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region croatia = Region("Croatia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region dalmatia = Region("Dalmatia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region macedonia = Region("Macedonia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region montenegro = Region("Montenegro", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region morava = Region("Morava", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region serbia = Region("Serbia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region slovenia = Region("Slovenia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region vojvodina = Region("Vojvodina", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region westBanat = Region("West Banat", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Creation of bulgarian regions
    Region burgas = Region("Burgas", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region plovdiv = Region("Plovdiv", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sofia = Region("Sofia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Creation of greek regions
    Region aegeanIslands = Region("Aegean Islands", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region centralMacedonia = Region("Central Macedonia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region crete = Region("Crete", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region epirus = Region("Epirus", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region peloponnese = Region("Peloponnese", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region thessaly = Region("Thessaly", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region thrace = Region("Thrace", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Creation of turkish regions
    Region adana = Region("Adana", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region afyon = Region("Afyon", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ankara = Region("Ankara", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region antalya = Region("Antalya", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bursa = Region("Bursa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region erzurum = Region("Erzurum", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region istanbul = Region("Istanbul", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region izmir = Region("Izmir", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region izmit = Region("Izmit", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kastamonu = Region("Kastamonu", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kayseri = Region("Kayseri", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region konya = Region("Konya", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region malatya = Region("Malatya", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region mersin = Region("Mersin", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region samsun = Region("Samsun", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sivas = Region("Sivas", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region trabzon = Region("Trabzon", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region van = Region("Van", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Creation of albanian region
    Region albania = Region("Albania", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Addition of romanian regions to vector
    balkansAndAnatolianRegions.push_back(banat);
    balkansAndAnatolianRegions.push_back(bessarabia);
    balkansAndAnatolianRegions.push_back(bucovina);
    balkansAndAnatolianRegions.push_back(crisana);
    balkansAndAnatolianRegions.push_back(dobrudja);
    balkansAndAnatolianRegions.push_back(moldova);
    balkansAndAnatolianRegions.push_back(muntenia);
    balkansAndAnatolianRegions.push_back(northTransylvania);
    balkansAndAnatolianRegions.push_back(oltenia);
    balkansAndAnatolianRegions.push_back(southernBessarabia);
    balkansAndAnatolianRegions.push_back(transylvania);

    //Addition of yugoslavian regions to vector
    balkansAndAnatolianRegions.push_back(bosnia);
    balkansAndAnatolianRegions.push_back(croatia);
    balkansAndAnatolianRegions.push_back(dalmatia);
    balkansAndAnatolianRegions.push_back(macedonia);
    balkansAndAnatolianRegions.push_back(montenegro);
    balkansAndAnatolianRegions.push_back(morava);
    balkansAndAnatolianRegions.push_back(serbia);
    balkansAndAnatolianRegions.push_back(slovenia);
    balkansAndAnatolianRegions.push_back(vojvodina);
    balkansAndAnatolianRegions.push_back(westBanat);

    //Addition of bulgarian regions to vector
    balkansAndAnatolianRegions.push_back(burgas);
    balkansAndAnatolianRegions.push_back(plovdiv);
    balkansAndAnatolianRegions.push_back(sofia);

    //Addition of greek regions to vector
    balkansAndAnatolianRegions.push_back(aegeanIslands);
    balkansAndAnatolianRegions.push_back(centralMacedonia);
    balkansAndAnatolianRegions.push_back(crete);
    balkansAndAnatolianRegions.push_back(epirus);
    balkansAndAnatolianRegions.push_back(peloponnese);
    balkansAndAnatolianRegions.push_back(thessaly);
    balkansAndAnatolianRegions.push_back(thrace);

    //Addition of turkish regions to vector
    balkansAndAnatolianRegions.push_back(adana);
    balkansAndAnatolianRegions.push_back(afyon);
    balkansAndAnatolianRegions.push_back(ankara);
    balkansAndAnatolianRegions.push_back(antalya);
    balkansAndAnatolianRegions.push_back(bursa);
    balkansAndAnatolianRegions.push_back(erzurum);
    balkansAndAnatolianRegions.push_back(istanbul);
    balkansAndAnatolianRegions.push_back(izmir);
    balkansAndAnatolianRegions.push_back(izmit);
    balkansAndAnatolianRegions.push_back(kastamonu);
    balkansAndAnatolianRegions.push_back(kayseri);
    balkansAndAnatolianRegions.push_back(konya);
    balkansAndAnatolianRegions.push_back(malatya);
    balkansAndAnatolianRegions.push_back(mersin);
    balkansAndAnatolianRegions.push_back(samsun);
    balkansAndAnatolianRegions.push_back(sivas);
    balkansAndAnatolianRegions.push_back(trabzon);
    balkansAndAnatolianRegions.push_back(van);

    //Addition of albanian region to vector
    balkansAndAnatolianRegions.push_back(albania);
}

void RegionController::populateRussianList()
{
    //Creation of russian regions. Includes asian regions for resource production
    Region akhtubinsk = Region("Akhtubinsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region akmolinsk = Region("Akmolinsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region almaAta = Region("Alma-Ata", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region amur = Region("Amur", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region arkhangelsk = Region("Arkhangelsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region armenia = Region("Armenia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ashkhabad = Region("Ashkhabad", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region astrakhan = Region("Astrakhan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ayaguz = Region("Ayaguz", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region azerbaijan = Region("Azerbaijan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region barnaul = Region("Barnaul", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region belgorod = Region("Belgorod", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region birobidzhan = Region("Birobidzhan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bobruysk = Region("Bobruysk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bodaybo = Region("Bodaybo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bratsk = Region("Bratsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region bryansk = Region("Bryansk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region caucasusMountains = Region("Caucasus Mountains", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region cheboksary = Region("Cheboksary", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region chelyabinsk = Region("Chelyabinsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region cherkasy = Region("Cherkasy", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region chernigov = Region("Chernigov", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region chita = Region("Chita", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region crimea = Region("Crimea", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region dnipropetrovsk = Region("Dnipropetrovsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region elista = Region("Elista", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region engels = Region("Engels", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region georgia = Region("Georgia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region gomel = Region("Gomel", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region gorki = Region("Gorki", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region gornoAltaysk = Region("Gorno-Altaysk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region grozny = Region("Grozny", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region guryev = Region("Guryev", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region irkutsk = Region("Irkutsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ivanovo = Region("Ivanovo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region izhevsk = Region("Izhevsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kalinin = Region("Kalinin", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kaluga = Region("Kaluga", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kamchatka = Region("Kamchatka", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kazan = Region("Kazan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kemerovo = Region("Kemerovo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region khabarovsk = Region("Khabarovsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kharkov = Region("Kharkov", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kherson = Region("Kherson", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region khmelnytskyi = Region("Khmelnytskyi", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kiev = Region("Kiev", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kirensk = Region("Kirensk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kirov = Region("Kirov", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region krasnodar = Region("Krasnodar", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region krasnoyarsk = Region("Krasnoyarsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kuibyshev = Region("Kuibyshev", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kursk = Region("Kursk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kustanay = Region("Kustanay", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region kyzylOrda = Region("Kyzyl Orda", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region leningrad = Region("Leningrad", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region lipetsk = Region("Lipetsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region luga = Region("Luga", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region magnitogorsk = Region("Magnitogorsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region mikhaylovka = Region("Mikhaylovka", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region millerovo = Region("Millerovo", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region minsk = Region("Minsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region moscow = Region("Moscow", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region mozyr = Region("Mozyr", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region murmansk = Region("Murmansk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region mykolaiv = Region("Mykolaiv", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region nevel = Region("Nevel", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region nikolayevsk = Region("Nikolayevsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northSakhalin = Region("North Sakhalin", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northeastSiberia = Region("Northeast Siberia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northernUrals = Region("Northern Urals", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region northwestSiberia = Region("Northwest Siberia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region novgorod = Region("Novgorod", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region novosibirsk = Region("Novosibirsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region odessa = Region("Odessa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region okhotsk = Region("Okhotsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region olonets = Region("Olonets", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region omsk = Region("Omsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region onega = Region("Onega", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region orel = Region("Orel", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region orenburg = Region("Orenburg", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region pamir = Region("Pamir", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region pechora = Region("Pechora", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region penza = Region("Penza", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region perm = Region("Perm", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region poltava = Region("Poltava", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region pskov = Region("Pskov", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region roslavl = Region("Roslavl", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region rostov = Region("Rostov", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ryazan = Region("Ryazan", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region rzhev = Region("Rzhev", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region salekhard = Region("Salekhard", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region saratov = Region("Saratov", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region semipalatinsk = Region("Semipalatinsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region smolensk = Region("Smolensk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region stalinabad = Region("Stalinabad", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region stalingrad = Region("Stalingrad", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region stalino = Region("Stalino", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region stavropol = Region("Stavropol", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sumy = Region("Sumy", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region surgut = Region("Surgut", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region sverdlovsk = Region("Svedlovsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region syktyvkar = Region("Syktyvkar", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tambov = Region("Tambov", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tashkent = Region("Tashkent", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tikhvin = Region("Tikhvin", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tobolsk = Region("Tobolsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tomsk = Region("Tomsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tula = Region("Tula", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region tyumen = Region("Tyumen", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ufa = Region("Ufa", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ulanUde = Region("Ulan Ude", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ulyanovsky = Region("Ulyanovsky", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region uralsk = Region("Uralsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region urgench = Region("Urgench", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region ustUrt = Region("Ust Urt", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region vinnytsia = Region("Vinnytsia", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region vitebsk = Region("Vitebsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region vladivostok = Region("Vladivostok", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region volgodonsk = Region("Volgodonsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region volkhov = Region("Volkhov", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region vologda = Region("Vologda", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region voronezh = Region("Voronezh", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region voroshilovgrad = Region("Voroshilovgrad", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region yakutsk = Region("Yakutsk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region yaroslavl = Region("Yaroslavl", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region yeniseisk = Region("Yeniseisk", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region zaporozhe = Region("Zaporozhe", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region zhytomyr = Region("Zhytomyr", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    Region zlatoust = Region("Zlatoust", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);

    //Addition of russian regions to vector
    russianRegions.push_back(akhtubinsk);
    russianRegions.push_back(akmolinsk);
    russianRegions.push_back(almaAta);
    russianRegions.push_back(amur);
    russianRegions.push_back(arkhangelsk);
    russianRegions.push_back(armenia);
    russianRegions.push_back(ashkhabad);
    russianRegions.push_back(astrakhan);
    russianRegions.push_back(ayaguz);
    russianRegions.push_back(azerbaijan);
    russianRegions.push_back(barnaul);
    russianRegions.push_back(belgorod);
    russianRegions.push_back(birobidzhan);
    russianRegions.push_back(bobruysk);
    russianRegions.push_back(bodaybo);
    russianRegions.push_back(bratsk);
    russianRegions.push_back(bryansk);
    russianRegions.push_back(caucasusMountains);
    russianRegions.push_back(cheboksary);
    russianRegions.push_back(chelyabinsk);
    russianRegions.push_back(cherkasy);
    russianRegions.push_back(chernigov);
    russianRegions.push_back(chita);
    russianRegions.push_back(crimea);
    russianRegions.push_back(dnipropetrovsk);
    russianRegions.push_back(elista);
    russianRegions.push_back(engels);
    russianRegions.push_back(georgia);
    russianRegions.push_back(gomel);
    russianRegions.push_back(gorki);
    russianRegions.push_back(gornoAltaysk);
    russianRegions.push_back(grozny);
    russianRegions.push_back(guryev);
    russianRegions.push_back(irkutsk);
    russianRegions.push_back(ivanovo);
    russianRegions.push_back(izhevsk);
    russianRegions.push_back(kalinin);
    russianRegions.push_back(kaluga);
    russianRegions.push_back(kamchatka);
    russianRegions.push_back(kazan);
    russianRegions.push_back(kemerovo);
    russianRegions.push_back(khabarovsk);
    russianRegions.push_back(kharkov);
    russianRegions.push_back(kherson);
    russianRegions.push_back(khmelnytskyi);
    russianRegions.push_back(kiev);
    russianRegions.push_back(kirensk);
    russianRegions.push_back(kirov);
    russianRegions.push_back(krasnodar);
    russianRegions.push_back(krasnoyarsk);
    russianRegions.push_back(kuibyshev);
    russianRegions.push_back(kursk);
    russianRegions.push_back(kustanay);
    russianRegions.push_back(kyzylOrda);
    russianRegions.push_back(leningrad);
    russianRegions.push_back(lipetsk);
    russianRegions.push_back(luga);
    russianRegions.push_back(magnitogorsk);
    russianRegions.push_back(mikhaylovka);
    russianRegions.push_back(millerovo);
    russianRegions.push_back(minsk);
    russianRegions.push_back(moscow);
    russianRegions.push_back(mozyr);
    russianRegions.push_back(murmansk);
    russianRegions.push_back(mykolaiv);
    russianRegions.push_back(nevel);
    russianRegions.push_back(nikolayevsk);
    russianRegions.push_back(northSakhalin);
    russianRegions.push_back(northeastSiberia);
    russianRegions.push_back(northernUrals);
    russianRegions.push_back(northwestSiberia);
    russianRegions.push_back(novgorod);
    russianRegions.push_back(novosibirsk);
    russianRegions.push_back(odessa);
    russianRegions.push_back(okhotsk);
    russianRegions.push_back(olonets);
    russianRegions.push_back(omsk);
    russianRegions.push_back(onega);
    russianRegions.push_back(orel);
    russianRegions.push_back(orenburg);
    russianRegions.push_back(pamir);
    russianRegions.push_back(pechora);
    russianRegions.push_back(penza);
    russianRegions.push_back(perm);
    russianRegions.push_back(poltava);
    russianRegions.push_back(pskov);
    russianRegions.push_back(roslavl);
    russianRegions.push_back(rostov);
    russianRegions.push_back(ryazan);
    russianRegions.push_back(rzhev);
    russianRegions.push_back(salekhard);
    russianRegions.push_back(saratov);
    russianRegions.push_back(semipalatinsk);
    russianRegions.push_back(smolensk);
    russianRegions.push_back(stalinabad);
    russianRegions.push_back(stalingrad);
    russianRegions.push_back(stalino);
    russianRegions.push_back(stavropol);
    russianRegions.push_back(sumy);
    russianRegions.push_back(surgut);
    russianRegions.push_back(sverdlovsk);
    russianRegions.push_back(syktyvkar);
    russianRegions.push_back(tambov);
    russianRegions.push_back(tashkent);
    russianRegions.push_back(tikhvin);
    russianRegions.push_back(tobolsk);
    russianRegions.push_back(tomsk);
    russianRegions.push_back(tula);
    russianRegions.push_back(tyumen);
    russianRegions.push_back(ufa);
    russianRegions.push_back(ulanUde);
    russianRegions.push_back(ulyanovsky);
    russianRegions.push_back(uralsk);
    russianRegions.push_back(urgench);
    russianRegions.push_back(ustUrt);
    russianRegions.push_back(vinnytsia);
    russianRegions.push_back(vitebsk);
    russianRegions.push_back(vladivostok);
    russianRegions.push_back(volgodonsk);
    russianRegions.push_back(volkhov);
    russianRegions.push_back(vologda);
    russianRegions.push_back(voronezh);
    russianRegions.push_back(voroshilovgrad);
    russianRegions.push_back(yakutsk);
    russianRegions.push_back(yaroslavl);
    russianRegions.push_back(yeniseisk);
    russianRegions.push_back(zaporozhe);
    russianRegions.push_back(zhytomyr);
    russianRegions.push_back(zlatoust);
}

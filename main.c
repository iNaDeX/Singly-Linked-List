#include <stdio.h>
#include <stdlib.h>

#include "liste_generique_simple_chainage.h"
#include "point.h"

int main()
{
    t_liste* maliste = NULL;
    t_point* elem = NULL;
    t_point* elem2 = NULL;

    maliste = liste_creer();

    elem = point_creer(1,1);
    liste_ajout_queue(maliste, elem);
    elem2 = point_creer(2,2);
    liste_ajout_queue(maliste, elem2);
    elem2 = point_creer(3,3);
    liste_ajout_queue(maliste, elem2);

    printf("affichage maliste\n");
    liste_afficher(maliste, (tpf_afficher)point_afficher);

    elem2 = point_creer(4,4);
    liste_ajout_avant(maliste,elem2,elem);

    printf("affichage maliste\n");
    liste_afficher(maliste, (tpf_afficher)point_afficher);

    elem = liste_recup_queue(maliste);
    printf("on a recupere le dernier element:\n");
    point_afficher(elem);
    point_detruire(elem);

    printf("affichage maliste\n");
    liste_afficher(maliste, (tpf_afficher)point_afficher);

    liste_detruire(maliste, (tpf_detruire)point_detruire);

    liste_bilan();

    return 0;
}

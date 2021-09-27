#include <stdio.h>

/*** Exercice 1 ***/
/*
int main()
 {
    int entier1 = 0 , entier2 = 0 ;
    printf ( "choisissez 2 entiers :\n" ) ;
    scanf ( "%d %d" , &entier1 , &entier2 ) ;
    if ( entier1 < entier2 )
    {
        printf ( "le plus grand des entiers est : %d\n" , entier2 ) ;
    }
    else if ( entier1 > entier2 )
    {
        printf ( "le plus grand des entiers est : %d\n" , entier1 ) ;
    }
    else
    {
        printf ( "Les deux entiers sont égaux" ) ;
    }
    return 0;
}
*/



/*** Exercice 2 ***/
/*
int main()
{
    int largeur = 0 , longueur = 0 ;
    printf ( "Longueur et largeur de votre rectangle ?\n" ) ;
    scanf ( "%d %d" , &largeur , &longueur ) ;
    printf ( "Le périmètre de votre rectangle est : %d\n" , 2 * largeur + 2 * longueur ) ;
    printf ( "L'air de votre rectangle est : %d\n" , largeur * longueur ) ;
    return 0 ;
}
*/



/*** Exercice 3 ***/
/*
int main ()
{
    int entier = 0 ;
    const constante = 3 ;
    printf ( "choisissez un entier :\n" ) ;
    scanf ( "%d" , &entier ) ;
    if ( entier % constante == 0 && entier >= 10 )
    {
        printf ( "%d est un multiples de %d et supérieur ou égal à 10\n" , entier , constante ) ;
    }
    else
    {
        printf ( "%d n'est pas un multiples de %d ET supérieur ou égal à 10\n" , entier , constante ) ;
    }
    return 0 ;
}
*/


/*** Exercice 4 (sans macro) ***/
/*
int main ()
{
    int age = 0 , étudiant = 0 ;
    printf ( "Quel âge avez-vous ?\n" ) ;
    scanf ( "%d" , &age ) ;
    //test qui permet de savoir si la personne est étudiante (entre 18 et 27 exclu) :
    if ( age >= 18 && age < 27 )
    {
        printf ( "Êtes-vous un étudiant de moins de 27 ans (1=OUI , 0=NON)\n" ) ;
        scanf ( "%d" , &étudiant ) ;
    }
    //test pour savoir si la personne bénéficie du tarif enfant :
    if ( age < 12 )
    {
        printf ( "Tarif ENFANT : 4€\n" ) ;
    }
    //test pour savoir si la personne bénéficie du tarif jeune :
    else if ( ( age >= 12 && age <= 17 ) || étudiant == 1 )
    {
        printf ( "Tarif JEUNE : 6€\n" ) ;
    }
    //test pour savoir si la personne bénéficie du tarif senior :
    else if ( age >= 65 )
    {
        printf ( "Tarif SENIOR : 6€\n" ) ;
    }
    else
    {
        printf ( "Plein tarif : 9€" ) ;
    }
    return 0 ;
}
*/



/*** Exercice 4 (avec macro) ***/
/*
#define AGE_LIMITE_ENFANT 12
#define AGE_LIMITE_JEUNE 17
#define AGE_LIMITE_ETUDIANT 27
#define AGE_MINIMUM_SENIOR 65
#define TARIF_ENFANT 4
#define TARIF_JEUNE 6
#define TARIF_SENIOR 6
#define PLEIN_TARIF 9
int main ()
{
    int age = 0, étudiant = 0;
    printf("Quel âge avez-vous ?\n");
    scanf("%d", &age);
    if (age >= 18 && age < AGE_LIMITE_ETUDIANT)
    {
        //test qui permet de savoir si la personne est étudiante (entre 18 et 27 exclu) :
        printf("Êtes-vous un étudiant de moins de %d ans (1=OUI , 0=NON)\n", AGE_LIMITE_ETUDIANT);
        scanf("%d", &étudiant);
    }
    //test pour savoir si la personne bénéficie du tarif enfant :
    if (age < AGE_LIMITE_ENFANT)
    {
        printf("Tarif ENFANT : %d€\n", TARIF_ENFANT);
    }
    //test pour savoir si la personne bénéficie du tarif jeune :
    else if ((age >= AGE_LIMITE_ENFANT && age <= AGE_LIMITE_JEUNE) || étudiant == 1)
    {
        printf("Tarif JEUNE : %d€\n", TARIF_JEUNE);
    }
    //test pour savoir si la personne bénéficie du tarif senior :
    else if (age >= AGE_MINIMUM_SENIOR)
    {
        printf("Tarif SENIOR : %d€\n", TARIF_SENIOR);
    }
    else
    {
        printf("Plein tarif : %d€", PLEIN_TARIF);
    }
    return 0 ;
}
*/



/*** Exercice 5 ***/
/*
int main ()
{
    int boisson = 0 ;
    printf ( "Choisissez votre boisson\n" ) ;
    scanf ( "%d" , &boisson ) ;
    switch ( boisson )
    {
        case 1 :
        {
            printf ( "Vous avez choisi de l'eau\n" ) ;
            break ;
        }
        case 2 :
        {
            printf ( "Vous avez choisi du coca-cola\n" ) ;
            break ;
        }
        case 3 :
        {
            printf ( "Vous avez choisi de la lemonade\n" ) ;
            break ;
        }
        case 10 :
        {
            printf ( "Vous avez choisi du café\n" ) ;
            break ;
        }
        case 11 :
        {
            printf ( "Vous avez choisi du thé\n" ) ;
            break ;
        }
        default :
        {
            printf ( "ERREUR - Choisissez un autre numéro" ) ;
            break ;
        }
    }
    return 0 ;
}
*/



/*** Exercice 6 ***/
/*
int main ()
{
    float note1 = 0.0f , note2 = 0.0f , note3 = 0.0f , moyenne = 0.0f ;
    do
    {
        printf ( "Rentrez vos 3 notes :\n" ) ;
        scanf ( "%f" , &note1 ) ;
        scanf ( "%f" , &note2 ) ;
        scanf ( "%f" , &note3 ) ;
    }
    while ( ( note1 < 0.0f || note1 > 20.0f ) || ( note2 < 0.0f || note2 > 20.0f ) || ( note3 < 0.0f || note3 > 20.0f ) ) ;
    moyenne = ( note1 + note2 + note3 ) /  ( float ) 3 ;
    printf ( "votre moyenne est : %f/20\n" , moyenne ) ;

    return 0 ;
}
*/



/*** Exercice 7 ***/
/*
int main ()
{
    int nbrClasse = 0 , nbrEleve = 0 , compteur = 0 , i = 0 ;
    printf ( "Combien de classes y a-t-il ?\n" ) ;
    scanf ( "%d" , &nbrClasse ) ;
    for ( i = 1 ;  i < ( nbrClasse + 1 ) ; i++ )
    {
        printf ( "Combien d'élèves dans la classe %d ?\n" , ( i + 1 ) ) ;
        scanf ( "%d" , &compteur ) ;
        nbrEleve = nbrEleve + compteur ;
    }
    printf ( "Le nombre d'élèves dans l'école est %d" , nbrEleve ) ;
    return 0 ;
}
*/



/*** Exercice 8 ***/
/*
int main ()
{
    int entier = 0 ;
    do
    {
        printf ( "Rentrez un entier\n" ) ;
        scanf ( "%d" , &entier ) ;
    }
    while ( ( entier % 7 != 0 ) || ( entier % 2 != 0 ) ) ;
    printf ( "%d est un multiple de 2 et de 7\n" , entier ) ;
    return 0 ;
}
*/



/*** Exercice 9 ***/
/*
 int main ()
{
    int nbrPierre = 0 , nbrEtage = 0 , carre = 0 , i = 0 ;
    printf ( "Combien de pierres avez-vous ?\n" ) ;
    scanf ( "%d" , &nbrPierre ) ;
    while ( nbrPierre > i )
    {
        nbrEtage = nbrEtage + 1 ;
        i = i + 1 ;
        carre = i * i ;
        nbrPierre = nbrPierre - carre ;
    }
    printf ( "Vous pouvez faire %d étages" , nbrEtage ) ;
    return 0 ;
}
*/



/*** Exercice 10 ***/
/*
int main ()
{
    int entier = 0 , nbrEntier = 0 , sommeEntier = 0 ;
    float moyenne = 0.0f ;
    while ( entier >= 0 )
    {
        printf ( "Entrez un nombre entier positif\n" ) ;
        scanf ( "%d" , &entier ) ;
        nbrEntier = nbrEntier + 1 ;
        sommeEntier = sommeEntier + entier ;
    }
    moyenne = (float) ( sommeEntier - entier ) / (float) ( nbrEntier - 1 ) ;
    printf ( "La moyenne des nombres saisis est %f" , moyenne ) ;
    return 0 ;
}
*/



















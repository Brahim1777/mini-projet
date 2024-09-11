#include <stdio.h>

int main() {
   
    int choix;
    char prenom[50]; 
    char nom[50];    
    float note;      
    float somme = 0; 
    int Netduiant = 0; 
    float max = 0;   
    float min = 100;
    float moyenne ;

       do {
          printf("    ~~Menu~~  \n");
          printf("1 --> Ajouter un etudiant\n");
          printf("2 --> Afficher la moyenne\n");
          printf("3 --> Trouver les meilleures et moins bonnes notes\n");
          printf("4 --> Nombre d etudiants avec une note superieure a la moyenne\n");
          printf("5 --> Quitter\n");
          printf("Entrez votre choix ==>  ");
          scanf("%d", &choix);

            switch (choix) {
                case 1 :
                       printf("~~> Entrez le prenom de l etudiant <~~ ");
                    scanf("%s", prenom);
                       printf("~~>Entrez le nom de l etudiant<~~ ");
                    scanf("%s", nom); 
                       printf("~~> Entrez la note de l etudiant <~~ ");
                     scanf("%f", &note);
                     somme = somme + note;
                     Netduiant++;
                    if (note > max) {
                         max = note;
                        }
                    if (note < min) {
                        min = note;
                        }

                    break;
                case 2 :
                    if (Netduiant > 0) {
                      moyenne = somme  / Netduiant ;
                       printf("La moyenne des notes est: %.2f\n", moyenne);
                       }
                    else {
                        printf("         \n");
                       }
                    break;
                case 3 :
                    if (Netduiant> 0) {
                        printf("~~> Meilleure note %.2f\n", max);
                        printf("~~>Moins bonne note: %.2f\n", min);
                        }
                    else{
                        printf("         \n");
                        }
                    break;
                case 4 :
                if (compteur > 0) { 
                    float moyenne = somme / compteur; 
                    int ktarmn  = 0; 

                    
                    for (int i = 0; i < compteur; i++) {
                        if (note > moyenne) { 
                           ktarmn++; 
                        }
                    }
                    printf("Nombre d'étudiants avec une note supérieure à la moyenne: %d\n", ktarmn); 
                } else {
                    printf("Aucun étudiant n'a été ajouté.\n");
                }
                break;
                 case 5: 
                printf("Au revoir!\n"); 
                break;

            default: 
                printf("Choix invalide. Veuillez réessayer.\n"); 
                break;
        }
    } while (choix != 5);

    return 0; 
}
#include <stdio.h>
#include <stdlib.h>

struct student{
        char name[50],matricule[50],domaine_section [50];
        int groupe;
        double note[5];
        double average=0;

    };

int main()
{
    int dd, div,i,j;
    char module [5][10]= {"analyse\0","physique\0","algebre\0","strm\0","tce\0" };
    char new_name[30],mat[20],d_s[20];
    int gr;
    double note_m[5];
    struct student everyone [50];
    double somme=0.0;
    int nbr_etudiant ;

    printf("Vous voulez enregister combien d\' etudiant ");
    scanf("%d",&nbr_etudiant);






    for (i=0;i<nbr_etudiant;i++)
    {
          printf("Quelle est votre nom ? \n");
          scanf("%s",everyone[i].name);
          printf("Quelle est votre matricule ? \n");
          scanf("%s",everyone[i].matricule);
          printf("Quelle est votre domaine et section ? \n");
          scanf("%s",everyone[i].domaine_section);
          printf("Quelle est votre groupe ? \n");
          scanf("%d",&everyone[i].groupe);
          for (j=0;j<5;j++)
          {
              printf("Taper votre note dans le module de %s  \n",module[j]);
              scanf("%lf",&everyone[i].note[j]);
              somme+= everyone[i].note[j];

          }

          everyone[i].average=somme/5.0;




          };


        for (i=0;i<nbr_etudiant;i++)
        {
            printf("Numero %d . %s \t %s \t %s \t %d \n",i+1,everyone[i].name,everyone[i].matricule,everyone[i].domaine_section,everyone[i].groupe);
            printf("La moyenne du semestre %.2f\n",everyone[i].average);
            for (j=0;j<5;j++)
            {
                printf("%s :  %.2f /20 \n",module[j],everyone[i].note[j]);

            }
            printf("***************************************************************************\n\n");
        }






    return 0;

}

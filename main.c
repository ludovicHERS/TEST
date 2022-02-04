#include <stdio.h>
#include <unistd.h>

void viderBuffer() {
    char prochainCaractere;
    do {
        prochainCaractere = getchar();
    } while (prochainCaractere != '\n' && prochainCaractere != EOF);
}

int main() {
    int taille = 0;
    int tab1[taille];
    int tab2[taille];
    int pos1 = 0;
    int pos2;
    int good = 0;
    int tab = 1;

    printf("entrez la taille des tableaux\n");
    while(good != 1)
        if (scanf("%d", &taille) != 1) {
            printf("\nentrez un nombre !\n");
            sleep(1);
            viderBuffer();
        }
        else{
            good = 1;
        }
    for (int cpt = 0; cpt < taille; cpt++) {
        if(tab == 1) {
            pos1++;
            printf("entrez un nombre qui se trouvera a la place: %d du tableau %d\n\n", pos1, tab);
            if (scanf("%d", &tab1[cpt]) != 1) {
                printf("\nentrez un nombre !\n");
                sleep(2);
                viderBuffer();
            }
        }else
        {
            pos2 = pos1;
            printf("entrez un nombre qui se trouvera a la place: %d du tableau %d\n\n", pos2, tab);
            if (scanf("%d", &tab2[cpt]) != 1) {
                printf("\nentrez un nombre !\n");
                sleep(2);
                viderBuffer();
            }
        }
        if(tab == 1)
        {
            tab = 2;
        } else
        {
            tab = 1;
        }
    }
    printf("SALUT BENOIT:\n");

    for(int x = 0; x < taille; x++)
    {
        printf("|%d| ", tab1[x]);
    }
    printf("\n");
    printf("voici les nombres inscrit pour le tableau 2:\n");
    for(int x = 0; x < taille; x++)
    {
        printf("|%d| ", tab2[x]);
    }
    return 0;
}

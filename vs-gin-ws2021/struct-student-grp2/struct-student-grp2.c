#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {

    char Name[30];
    int matrikelnummer;
    int immJahr;
    char studiengang[30];

};
//
struct list_node {
    void *content;
    struct list_node *next;
};
//
void dateneingabe(struct Student * student) {

    printf("\nNamen eingeben:");
    scanf("%s", &student->Name);

    printf("\nMatrikelnummer:");
    scanf("%d", &student->matrikelnummer);

    printf("\nImmatrikulationsjahr:");
    scanf("%d", &student->immJahr);

    printf("\nStudiengang eingeben:");
    scanf("%s", &student->studiengang);

}
//
void datenausgabe(struct Student * student) {

    printf("%s\n", student->Name);
    printf("%d\n", student->matrikelnummer);
    printf("%d\n", student->immJahr);
    printf("%s\n", student->studiengang);

}
//

struct list_node* initialisiere_liste(struct Student student) {
    struct list_node *neunode;
    neunode = (struct list_node*)malloc(sizeof(struct list_node));
    neunode->next = 0;
    neunode->content = &student;
    return neunode;
}

struct list_node * student_in_liste_einfugen(struct Student *student, struct list_node *kopf) {
    // Neues Listenelement
    struct list_node *neunode = (struct list_node*)malloc(sizeof(struct list_node));
    neunode->next = 0;
    neunode->content = student;
    // ... in die Liste einfügen
    neunode->next = kopf;
    kopf = neunode;
    return kopf;
}

struct Student * maxi_anlegen() {
    struct Student *neustudent2 = malloc(sizeof(struct Student));
    strcpy(neustudent2->Name, "Maxi");
    neustudent2->matrikelnummer = 1234;
    neustudent2->immJahr = 3214;
    strcpy(neustudent2->studiengang, "Fin");
    return neustudent2;
}

struct Student * max_anlegen() {
    struct Student *neustudent;// = &student1;
    neustudent = malloc(sizeof(struct Student));
    //printf("neustudent pointer: %d %x %p", neustudent, neustudent, neustudent);

    strcpy(neustudent->Name, "Max");
    neustudent->matrikelnummer = 123;
    neustudent->immJahr = 321;
    strcpy(neustudent->studiengang, "Inf");
    //dateneingabe(neustudent);
    return neustudent;
}

/*viele neue Studetnen anlegen() {...}*/

/*alle Studenten aus einer Liste ausgeben(kopf) {...}*/

void main() {
    /*
    struct Student student1;
    struct Student *student_ptr = &student1;

    dateneingabe(student_ptr);
    datenausgabe(student_ptr);
    */
    //
    struct list_node *kopf = 0;
    //struct Student student1;
    
    struct Student *max = max_anlegen();
    datenausgabe(max);
    
    kopf = initialisiere_liste(*max);

    datenausgabe(kopf->content);

    // Student anlegen
    struct Student *maxi = maxi_anlegen();
    kopf = student_in_liste_einfugen(maxi, kopf);

    // Beliebig viele Studenten von der Tastatur einfügen
    // 2. Erweitern auf BELIEBIGE Anzahl
    char wahl;
    do
    {
        // 1. EINEN Studenten von der Tastatur einfügen
        struct Student *neuer_student = malloc(sizeof(struct Student));
        dateneingabe(neuer_student);
        kopf = student_in_liste_einfugen(neuer_student, kopf);

        printf("Noch einer? (j/n)\n");
        while ((getchar()) != '\n');
        scanf("%c", &wahl);
    } while (wahl == 'j');

    /*
    for(i 0 ... Anzahl Elemente in Liste) {
        Ausgaben
        nächstes Element
    */

    struct list_node *aktuelles_element = kopf;
    do
    {
        datenausgabe(aktuelles_element->content);
        aktuelles_element = aktuelles_element->next;
    } while (aktuelles_element != 0);

    /*
    printf("Neuer: %s\n", ((struct Student*) kopf->content)->Name);
    printf("Maxi: %s\n", ((struct Student*) kopf->next->content)->Name);
    printf("Max: %s\n", ((struct Student*) kopf->next->next->content)->Name);
    */

    system("pause");
}
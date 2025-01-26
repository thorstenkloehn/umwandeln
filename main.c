#include <stdio.h>
#include "note.h"

void init_array(int *arrayzeiger, int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        arrayzeiger[i] = 0; // Initialisiert das Array mit einem Standardwert, z.B. 0
    }
}

void inhalt_array(int *arrayzeiger, int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        printf("Element %d: %d\n", i, arrayzeiger[i]); // Gibt jedes Element des Arrays aus
    }
}

void array_speichern(int *arrayzeiger, int anzahl, const char *dateiname) {
    FILE *file = fopen(dateiname, "w");
    if (file == NULL) {
        perror("Fehler beim Öffnen der Datei");
        return;
    }

    for (int i = 0; i < anzahl; i++) {
        fprintf(file, "%d\n", arrayzeiger[i]); // Schreibt jedes Element des Arrays in die Datei
    }

    fclose(file); // Schließt die Datei
}
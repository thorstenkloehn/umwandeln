#ifndef NOTEN_H
#define NOTEN_H

/**
 * @brief Initialisiert ein Array mit Standardwerten.
 *
 * @param arrayzeiger Zeiger auf das Array.
 * @param anzahl Anzahl der Elemente im Array.
 */
void init_array(int *arrayzeiger, int anzahl);

/**
 * @brief Gibt den Inhalt eines Arrays aus.
 *
 * @param arrayzeiger Zeiger auf das Array.
 * @param anzahl Anzahl der Elemente im Array.
 */
void inhalt_array(int *arrayzeiger, int anzahl);

/**
 * @brief Speichert den Inhalt eines Arrays in einer Datei.
 *
 * @param arrayzeiger Zeiger auf das Array.
 * @param anzahl Anzahl der Elemente im Array.
 * @param dateiname Name der Datei, in die das Array gespeichert wird.
 */
void array_speichern(int *arrayzeiger, int anzahl, const char *dateiname);

#endif
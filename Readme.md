# Temperaturumwandlung

Dieses Projekt enthält Funktionen zur Umwandlung von Temperaturen zwischen verschiedenen Einheiten (Celsius, Fahrenheit und Kelvin).

## Funktionen

- `celsiusnachFahrenheit(double celsius)`: Wandelt Celsius in Fahrenheit um.
- `fahrenheitnachCelsius(double fahrenheit)`: Wandelt Fahrenheit in Celsius um.
- `kelvinnachCelsius(double kelvin)`: Wandelt Kelvin in Celsius um.
- `fahrenheitnachKelvin(double fahrenheit)`: Wandelt Fahrenheit in Kelvin um.
- `kelvinnachFahrenheit(double kelvin)`: Wandelt Kelvin in Fahrenheit um.

## Kompilieren und Ausführen

Um das Projekt zu kompilieren und auszuführen, verwenden Sie die folgenden Befehle:

```sh
mkdir build
cd build
cmake ..
make
```

## Verwendung der statischer Bibliotheke einbinden

```
#include "umwandeln.h"
#include <stdio.h>

int main() {
    double celsius = 100.0;
    double fahrenheit = celsiusnachFahrenheit(celsius);
    printf("%.2f Celsius sind %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}
```

# filepath: /path/to/your_program/CMakeLists.txt
cmake_minimum_required(VERSION 3.12)
project(mein_programm)
set(C_STANDARD 23)

# Fügen Sie die statische Bibliothek hinzu
add_subdirectory(/path/to/umwandeln build_umwandeln)

# Erstellen des ausführbaren Programms und Verlinken der Bibliothek
add_executable(mein_programm main.c)
target_link_libraries(mein_programm umwandeln)
```




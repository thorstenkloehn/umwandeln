#include "umwandeln.h"

// Wandelt Celsius in Fahrenheit um
double celsiusnachFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

// Wandelt Fahrenheit in Celsius um
double fahrenheitnachCelsius(double fahrenheit) {
   return (fahrenheit - 32) * 5.0 / 9.0;
}

// Wandelt Kelvin in Celsius um
double kelvinnachCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Wandelt Fahrenheit in Kelvin um
double fahrenheitnachKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}

// Wandelt Kelvin in Fahrenheit um
double kelvinnachFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}
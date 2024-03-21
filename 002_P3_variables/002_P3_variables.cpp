// 002_P3_VARIAB-.cpp 
// Raul Garcia
// En esta parctica aprenderemos la sintaxys plara comunicarnos con el usuario
//Solicitar datos en diferentes tipos de variables y mostrarlas

#include <iostream>
#include <locale>
#include<string>

int main()
{//Funcion para tener idioma en español soportado
    setlocale(LC_ALL, "es_mx.utf-8");
    //Tipo de dato + nomre +declaracion de inicializacion 
    bool bandera = false;
    int edad = 0;
    //Imprimiumos el valor de la bandera
    std::cout << "El valor de la variable booleana llamada bandera es: " << bandera << std::endl;
    //Solicitamos al usuario su edad
    std::cout << "cual es tu edad?\n";
    //Recibimos la edad del usuario
    std::cin >> edad;
    std::cout << std::endl;
        //Volver a imprimir el dato modificado
        std::cout << "entonces tienes: " << edad << " años\n";
    //Realizar las siguientes acciones para los siguientes tipos de datos
    //Declarar la variable
    //Imprimir el valor inicializado
    //Solicitamos al usuario
    //Recibimos la variable del usuario
    //Volver a imprimir el dato modificadfo
        float floti = 0;// Decimales
        char Chari = 'c'; // Numeros largos
        std::string stringy = "gybjbyhjb";// cadenas de caracteres ojo este necesita libreria y protocolo
}

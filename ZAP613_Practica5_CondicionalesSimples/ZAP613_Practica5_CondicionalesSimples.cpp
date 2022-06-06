// ZAP613_Practica5_CondicionalesSimples.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <string.h>

int main()
{
    int num1, num4;
    char mander, izard;
    float num2, num3;
    std::string cad, pal, correo;
    bool check = true;

    std::cout << "Bienvenido!\n";
    std::cout << "Por favor ingresa lo que se te pide.\n";
    system("pause");

    do
    {
        std::cout << "\nEscribe el numero 5\n";
        std::cin >> num1;
        if (num1 == 5)
        {
            std::cout << "Perfecto.\n";
            check = true;
        }
        else
        {
            std::cout << "No ingresaste el digito correcto, intentalo de nuevo.\n";
            std::cin.clear();
            check = false;
        }
    } while (check == false);
    system("pause");
    system("CLS");

    do
    {
        std::cout << "\nEscribe la letra a \n";
        std::cin >> mander;
        if (mander == 'a')
        {
            std::cout << "Perfecto.\n";
            check = true;
        }
        else
        {
            std::cout << "No ingresaste la letra correcta, intentalo de nuevo.\n";
            std::cin.clear();
            check = false;
        }
    } while (check == false);
    system("pause");
    system("CLS");

    do
    {
        std::cout << "\nEscribe el numero 5.3\n";
        std::cin >> num2;
        if (num2 == 5.3f)
        {
            std::cout << "Perfecto.\n";
            check = true;
        }
        else
        {
            std::cout << "No ingresaste el digito correcto, intentalo de nuevo.\n";
            std::cin.clear();
            check = false;
        }
    } while (check == false);
    system("pause");
    system("CLS");

    do
    {
        std::cout << "\nEscribe la palabra atlas \n";
        std::cin.ignore();
        std::getline(std::cin, pal);
        if (pal == "atlas")
        {
            std::cout << "Perfecto.\n";
            check = true;
        }
        else
        {
            std::cout << "No ingresaste la palabra correcta, intentalo de nuevo.\n";
            std::cin.clear();
            check = false;
        }
    } while (check == false);
    system("pause");
    system("CLS");

    do
    {
        std::cout << "\nEscribe el nombre Mauricio \n";
        std::cin.ignore();
        std::getline(std::cin, cad);
        if (cad == "Mauricio")
        {
            std::cout << "Perfecto.\n";
            check = true;
        }
        else
        {
            std::cout << "No ingresaste la palabra correcta, intentalo de nuevo.\n";
            std::cin.clear();
            check = false;
        }
    } while (check == false);
    system("pause");
    system("CLS");

    do
    {
        std::cout << "\nEscribe el promedio de Mauricio: 9.3\n";
        std::cin >> num3;
        if (num3 == 9.3f)
        {
            std::cout << "Perfecto.\n";
            check = true;
        }
        else
        {
            std::cout << "No ingresaste el digito correcto, intentalo de nuevo.\n";
            std::cin.clear();
            check = false;
        }
    } while (check == false);
    system("pause");
    system("CLS");

    do
    {
        std::cout << "\nEscribe el numero de salon de Mauricio: 11\n";
        std::cin >> num4;
        if (num4 == 11)
        {
            std::cout << "Perfecto.\n";
            check = true;
        }
        else
        {
            std::cout << "No ingresaste el digito correcto, intentalo de nuevo.\n";
            std::cin.clear();
            check = false;
        }
    } while (check == false);
    system("pause");
    system("CLS");

    do
    {
        std::cout << "\nEscribe el correo de Mauricio: mauguapo@gmail.com \n";
        std::cin.ignore();
        std::getline(std::cin, correo);
        if (correo == "mauguapo@gmail.com")
        {
            std::cout << "Perfecto.\n";
            check = true;
        }
        else
        {
            std::cout << "No ingresaste la palabra correcta, intentalo de nuevo.\n";
            std::cin.clear();
            check = false;
        }
    } while (check == false);
    system("pause");
    system("CLS");
}
#include "Carrera.h"
#include <string>
#include <iostream>
#include <stdio.h>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>  
using namespace System::Windows::Forms;
using namespace System::IO;
using std::string;
using namespace System::Runtime::InteropServices;

bool Ganador = false;
string recorrido[80];
string* Inicio = &recorrido[0];
string* Final = &recorrido[69];
string* P_Tortuga = &recorrido[0];
string* P_Liebre = &recorrido[0];

void Carrera::Reiniciar_Vector()
{
	P_Tortuga = &recorrido[0];
	P_Liebre = &recorrido[0];
	 Ganador = false;
	 Inicio = &recorrido[0];
	 Final = &recorrido[69];
	 P_Tortuga = &recorrido[0];
	 P_Liebre = &recorrido[0];
	for (int i = 0; i < 70; i++)
	{
		string* j = &recorrido[i];
		*j = "-";
		recorrido[0] = "[¡BANG! ¡ARRANCAN!]";
		recorrido[69] = ".";
	}
	for (int i = 70; i < 80; i++)
	{
		string* g = &recorrido[i];
		*g = ".";
	}
}

System::String^ Carrera::Mostrar_Vector()
{
	System::String^ carrerafinal = "";
	for (int i = 0; i < 70; i++)
	{
		char* cad2 = new char[recorrido[i].length() + 1];
		cad2 = +strdup(recorrido[i].c_str());
		System::String^ cadena = gcnew System::String(cad2);
		carrerafinal += cadena + " ";
		//System::Windows::Forms::MessageBox::Show(cadena);
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(10));
	System::Windows::Forms::MessageBox::Show(carrerafinal);
	carrerafinal += "";
	return carrerafinal;
}

bool Carrera::Fin()
{
	return Ganador;
}

void Carrera::Movimientos()
{
	//Carrera::Mostrar_Vector();
	int r = Carrera::Generar_aleatorio();
	if (r >= 1 && r <= 5)
	{
		if (*(P_Tortuga+3) == ".")
		{
			*P_Tortuga = "-";
			P_Tortuga = Final;
			*P_Tortuga = "T";
		}
		else
		{
			*P_Tortuga = "-";
			P_Tortuga += 3;
			*P_Tortuga = "T";
		}
	}
	//Carrera::Mostrar_Vector();
	if (r >= 6 && r <= 7)
	{
		if (*(P_Tortuga-6) != "-" && *(P_Tortuga -6) != "H")
		{
			*P_Tortuga = "-";
			P_Tortuga = Inicio;
			*P_Tortuga = "T";
		}
		else
		{
			*P_Tortuga = "-";
			P_Tortuga += -6;
			*P_Tortuga = "T";
		}
	}
	//Carrera::Mostrar_Vector();
	if (r >= 8 && r <= 10)
	{
		if (*(P_Tortuga + 1) == ".")
		{
			*P_Tortuga = "-";
			P_Tortuga = Final;
			*P_Tortuga = "T";
		}
		else
		{
			*P_Tortuga = "-";
			P_Tortuga += 1;
			*P_Tortuga = "T";
		}
	}
	if (r >= 3 && r <= 4)
	{
		if (*(P_Liebre + 9) == ".")
		{
			*P_Liebre = "-";
			P_Liebre = Final;
			*P_Liebre = "H";
		}
		else
		{
			*P_Liebre = "-";
			P_Liebre += 9;
			*P_Liebre = "H";
		}
	}
	if (r ==5)
	{
		if (*(P_Liebre - 12) != "-" && *(P_Tortuga - 12) != "T")
		{
			*P_Liebre = "-";
			P_Liebre = Inicio;
			*P_Liebre = "H";
		}
		else
		{
			*P_Liebre = "-";
			P_Liebre += -12;
			*P_Liebre = "H";
		}
	}
	if (r >= 6 && r <= 8)
	{
		if (*(P_Liebre + 1) == ".")
		{
			*P_Liebre = "-";
			P_Liebre = Final;
			*P_Liebre = "H";
		}
		else
		{
			*P_Liebre = "-";
			P_Liebre += 1;
			*P_Liebre = "H";
		}
	}
	if (r >= 9 && r <= 10)
	{
		if (*(P_Liebre - 2) != "-" && *(P_Tortuga - 2) != "T")
		{
			*P_Liebre = "-";
			P_Liebre = Inicio;
			*P_Liebre = "H";
		}
		else
		{
			*P_Liebre = "-";
			P_Liebre += -2;
			*P_Liebre = "H";
		}
	}
	if (P_Liebre == P_Tortuga)
	{
		if (P_Liebre == Final)
		{
			*P_Liebre = "¡EMPATE!";
			*P_Tortuga = "¡EMPATE!";
			Ganador = true;
		}
		else
		{
			*P_Liebre = "[¡OUCH!]";
			*P_Tortuga = "[¡OUCH!]";
		}
	}
	else
	{
		*P_Liebre = "H";
		*P_Tortuga = "T";
	}
	if (P_Liebre == Final && Ganador == false)
	{
		System::Windows::Forms::MessageBox::Show("La liebre gana. Ni hablar.");
		Ganador = true;
	}
	if (P_Tortuga == Final && Ganador == false)
	{
		System::Windows::Forms::MessageBox::Show("¡LA TORTUGA GANA! ¡BRAVO!");
		Ganador = true;
	}
	//Carrera::Mostrar_Vector();
	
}

int Carrera::Generar_aleatorio()
{
	System::Random^ random = gcnew System::Random();
	int num = random->Next(1, 10);
	return num;
}





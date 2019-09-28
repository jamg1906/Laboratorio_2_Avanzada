#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
using namespace System::Windows::Forms;
using namespace System::IO;
using std::string;
using namespace System::Runtime::InteropServices;

class Carrera
{

public:
	void Carrera::Reiniciar_Vector();
	int Carrera::Generar_aleatorio();
	System::String^ Carrera::Mostrar_Vector();
	void Carrera::Movimientos();
	bool Carrera::Fin();
};


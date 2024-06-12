#include "pch.h"

#include "RecetasClass.h"

using namespace RecetasClass;
//using namespace RecetasClass::Receta;

RecetasClass::Receta::Receta()
{
	Id=0;
	Nombre="";
	ingredientes = gcnew List<Ingredientes^>();
	/*TiempoPreparacion=0;
	TiempoCoccion=0;
	Porciones=0;
	Dificultad="";
	Categoria="";
	Origen="";
	valorNutricionalGeneral= gcnew ValorNutricional();*/
	valorNutricionalGeneral = gcnew ValorNutricional(0,0,0,0);
	//throw gcnew System::NotImplementedException();
}

RecetasClass::Receta::~Receta()
{
	//throw gcnew System::NotImplementedException();
}

RecetasClass::Receta::Receta(int Id, String^ Nombre, List<Ingredientes^>^ ingredientes, int TiempoPreparacion, int TiempoCoccion, int Porciones, String^ Dificultad, String^ Categoria, String^ Origen, ValorNutricional^ valorNutricionalgeneral)
{
	this->Id = Id;
	this->Nombre = Nombre;
	this->ingredientes = ingredientes;
	this->TiempoPreparacion = TiempoPreparacion;
	this->TiempoCoccion = TiempoCoccion;
	this->Porciones = Porciones;
	this->Dificultad = Dificultad;
	this->Categoria = Categoria;
	this->Origen = Origen;
	this->valorNutricionalGeneral = valorNutricionalgeneral;

	//throw gcnew System::NotImplementedException();
}
void RecetasClass::Receta::agregarIngredientes(List<Ingredientes^>^ nuevosIngredientes)
{
	for each (Ingredientes ^ ingrediente in nuevosIngredientes) {
		ingredientes->Add(ingrediente);
	}
	//throw gcnew System::NotImplementedException();
}
RecetasClass::ValorNutricional::ValorNutricional(int _calorias, int _grasas, int _proteinas, int _carbohidratos)
{

	this->calorias = _calorias;
	this->grasas = _grasas;
	this->proteinas = _proteinas;
	this->carbohidratos = _carbohidratos;
	//this->otros = _otros;

	//throw gcnew System::NotImplementedException();
}
//
//void RecetasClass::Receta::AgregarIngrediente(Ingredientes^ _ingredientes)
//{
//
//	ingredientes->Add(_ingredientes);
//	ActualizarValorNutricional();
//	//throw gcnew System::NotImplementedException();
//}

//void RecetasClass::Receta::ActualizarValorNutricional()
//{
//	ValorNutricional^ valorNutricional = gcnew ValorNutricional(0, 0, 0, 0, 0);
//	float Calorias = 0;
//	float Grasas = 0;
//	float Proteinas = 0;
//	float Carbohidratos = 0;
//	float Otros = 0;
//	for each (Ingredientes ^ ingrediente in ingredientes) {
//		Calorias += ingrediente->ValorNutricionalIngrediente->calorias; // Cambiado a ->calorias
//		Grasas += ingrediente->ValorNutricionalIngrediente->grasas; // Cambiado a ->grasas
//		Proteinas += ingrediente->ValorNutricionalIngrediente->proteinas; // Cambiado a ->proteinas
//		Carbohidratos += ingrediente->ValorNutricionalIngrediente->carbohidratos; // Cambiado a ->carbohidratos
//		Otros += ingrediente->ValorNutricionalIngrediente->otros; // Cambiado a ->otros
//	}
//	// Aquí debes asignar los valores calculados a valorNutricionalGeneral
//	this->valorNutricionalGeneral->calorias = Calorias;
//	this->valorNutricionalGeneral->grasas = Grasas;
//	this->valorNutricionalGeneral->proteinas = Proteinas;
//	this->valorNutricionalGeneral->carbohidratos = Carbohidratos;
//	this->valorNutricionalGeneral->otros = Otros;
//}


RecetasClass::Ingredientes::Ingredientes()
{
	ID = 0;
	Nombre = "";
	Estado = "";
	Origen = "";
	ValorNutricionalIngrediente = gcnew ValorNutricional(0, 0, 0, 0);
	Cantidad = "";
	Unidad = "";
	Precio = 0;

	//throw gcnew System::NotImplementedException();
}

RecetasClass::Ingredientes::~Ingredientes()
{
	throw gcnew System::NotImplementedException();
}

RecetasClass::Ingredientes::Ingredientes(int ID, String^ Nombre, String^ Estado, String^ Origen, ValorNutricional^ ValorNutricionalingrediente, String^ Cantidad, String^ Unidad, float Precio)
{

	this->ID = ID;
	this->Nombre = Nombre;
	this->Estado = Estado;
	this->Origen = Origen;
	this->ValorNutricionalIngrediente = ValorNutricionalingrediente;
	this->Cantidad = Cantidad;
	this->Unidad = Unidad;
	this->Precio = Precio;

	//throw gcnew System::NotImplementedException();
}



//metodos de la lista de recetas

RecetasClass::Lista_Recetas::Lista_Recetas()
{
	listaRecetas = gcnew List<Receta^>();
	//throw gcnew System::NotImplementedException();
}

RecetasClass::Lista_Recetas::~Lista_Recetas()
{
	//throw gcnew System::NotImplementedException();
}

//void RecetasClass::Lista_Recetas::AgregarReceta(int _Id, String^ _Nombre, List<Ingredientes^>^ _ingredientes, int _TiempoPreparacion, int _TiempoCoccion, int _Porciones, String^ _Dificultad, String^ _Categoria, String^ _Origen, ValorNutricional^ _valorNutricional)
//{
//	Receta ^Newreceta = gcnew Receta(_Id, _Nombre, _ingredientes, _TiempoPreparacion, _TiempoCoccion, _Porciones, _Dificultad, _Categoria, _Origen, _valorNutricional);
//	listaRecetas->Add(Newreceta);
//	//throw gcnew System::NotImplementedException();
//}

RecetasClass::Receta^ RecetasClass::Lista_Recetas::BuscarReceta(int id)
{
	Receta^ BuscarReceta = nullptr;
	for each (Receta ^ receta in listaRecetas)
	{
		if (receta->getId() == id)
		{
			return receta; // Devuelve la receta encontrada
		}
	}
	return nullptr; // Devuelve nullptr si no se encuentra ninguna receta
}

List<String^>^ RecetasClass::Lista_Recetas::obtenerNombresDeRecetas()
{
	List<String^>^ nombresRecetas = gcnew List<String^>();
	for each (Receta ^ receta in listaRecetas)
	{
		nombresRecetas->Add(receta->Nombre);
	}
	return nombresRecetas;
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}

//void RecetasClass::Lista_Recetas::AgregarIngrediente(int _id, Ingredientes^ _ingredientes)
//{
//	for (int i = 0; i < listaRecetas->Count; i++) {
//		if (listaRecetas[i]->Id == _id) {
//			listaRecetas[i]->ingredientes->Add(_ingredientes);
//			return;
//		}
//	}
//	//throw gcnew System::NotImplementedException();
//}
//
//List<Ingredientes^>^ RecetasClass::Lista_Recetas::verIngredientes()
//{
//	throw gcnew System::NotImplementedException();
//	// TODO: Insertar una instrucción "return" aquí
//}
//
//List<Ingredientes^>^ RecetasClass::Lista_Recetas::verIngredientes(int Id)
//{
//
//	for each (Receta ^ receta in listaRecetas)
//	{
//		if (receta->getId() == Id)
//		{
//			return receta->ingredientes;
//		}
//	}
//
//	return nullptr;
//	//throw gcnew System::NotImplementedException();
//	// TODO: Insertar una instrucción "return" aquí
//}

void RecetasClass::Lista_Recetas::editarReceta(int identificador, Receta^ nuevaReceta)
{

	Receta^ recetaespecifica = nullptr;
	for each (Receta ^ receta in listaRecetas)
	{
		if (receta->getId() == identificador)
		{
			recetaespecifica = receta;
			break;
		}
	}
	//throw gcnew System::NotImplementedException();
}

ValorNutricional^ RecetasClass::Lista_Recetas::calcularValorNutricional(int identificador, Receta^ receta)
{
	ValorNutricional^ valorTotal = gcnew ValorNutricional(0,0,0,0);
	Receta^ _receta = BuscarReceta(identificador);
	if (receta != nullptr) {
		for each (Ingredientes ^ ingrediente in receta->ingredientes) {
			valorTotal->calorias += ingrediente->ValorNutricionalIngrediente->calorias;
			valorTotal->grasas += ingrediente->ValorNutricionalIngrediente->grasas;
			valorTotal->proteinas += ingrediente->ValorNutricionalIngrediente->proteinas;
			valorTotal->carbohidratos += ingrediente->ValorNutricionalIngrediente->carbohidratos;
		}
	}
	return valorTotal;
}
List<Receta^>^ RecetasClass::Lista_Recetas::MostraRecetasPorPorciones(int porciones)
{

	List<Receta^>^ recetasPorPorciones = gcnew List<Receta^>();
	for each (Receta ^ receta in listaRecetas)
	{
		if (receta->getPorciones() == porciones)
		{
			recetasPorPorciones->Add(receta);
		}
	}
	return recetasPorPorciones;
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}
List<Receta^>^ RecetasClass::Lista_Recetas::MostrarRecetasPorValorNutricional(int minCalorias, int maxCalorias, int minGrasa, int maxGrasa, int minCarbohidratos, int maxCarbohidratos, int minProteinas, int maxProteinas)
{

	List<Receta^>^ recetasFiltradas = gcnew List<Receta^>();
	for each (Receta ^ receta in listaRecetas)
	{
		if (receta->getvalorNutricionalGeneral()->calorias >= minCalorias && receta->getvalorNutricionalGeneral()->calorias <= maxCalorias &&
			receta->getvalorNutricionalGeneral()->grasas >= minGrasa && receta->getvalorNutricionalGeneral()->grasas <= maxGrasa &&
			receta->getvalorNutricionalGeneral()->carbohidratos >= minCarbohidratos && receta->getvalorNutricionalGeneral()->carbohidratos <= maxCarbohidratos &&
			receta->getvalorNutricionalGeneral()->proteinas >= minProteinas && receta->getvalorNutricionalGeneral()->proteinas <= maxProteinas)
		{
			recetasFiltradas->Add(receta);
		}
	}
	return recetasFiltradas;
}



void Lista_Recetas::AgregarReceta(Receta^ receta)
{
	//receta->setId(idActual);
	//receta->valorNutricionalGeneral = calcularValorNutricional(receta);
	listaRecetas->Add(receta);
	//throw gcnew System::NotImplementedException();
}

bool RecetasClass::Lista_Recetas::EliminarReceta(int id)
{
	// Buscar la receta en la lista
	for (int i = 0; i < listaRecetas->Count; i++) {
		if (listaRecetas[i]->getId() == id) {
			// Eliminar la receta de la lista
			listaRecetas->RemoveAt(i);
			break;
		}
	}
	return false;

}

double Receta::calcularCosto() {
	double costoTotal = 0;
	for each (Ingredientes ^ ingrediente in ingredientes) {
		costoTotal += ingrediente->Precio;
	}
	return costoTotal;
}
double Lista_Recetas::recalcularCosto(int identificador, int nuevasPorciones) {
	Receta^ receta = BuscarReceta(identificador);
	if (receta != nullptr) {
		double costoPorPorcion = receta->calcularCosto() / receta->Porciones;
		receta->Porciones = nuevasPorciones;
		return costoPorPorcion * nuevasPorciones;
	}
	return -1;
}


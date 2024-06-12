#pragma once
#include <iostream>
#include <string>
#include <vector>


using namespace System;
using namespace std;
using namespace System::Collections::Generic;

namespace RecetasClass {

	public ref class ValorNutricional {
	public:
		int calorias;
		int grasas;
		int proteinas;
		int carbohidratos;
		//float otros;

		ValorNutricional(int _calorias, int _grasas, int _proteinas, int _carbohidratos);
        
		/*ValorNutricional(float _calorias, float _grasas, float _proteinas, float _carbohidratos);*/
	};

	public ref class Ingredientes
	{
	public:
		property int ID;
		property String^ Nombre;
		property String^ Estado; // Ejemplo: "líquido", "polvo"
		property String^ Origen;
		ValorNutricional^ ValorNutricionalIngrediente;
		property String^ Cantidad;
		property String^ Unidad;
		property float Precio;

		Ingredientes();
		~Ingredientes();
		Ingredientes(int ID, String^ Nombre, String^ Estado, String^ Origen, ValorNutricional^ ValorNutricionalingrediente, String^ Cantidad, String^ Unidad, float Precio);

		int getID() { return ID; }
		String^ getNombreIngrediente() { return Nombre; }
		String^ getEstado() { return Estado; }
		String^ getOrigen() { return Origen; }
		ValorNutricional^ getValorNutricionalIngrediente() { return ValorNutricionalIngrediente; }
		String^ getCantidad() { return Cantidad; }
		String^ getUnidad() { return Unidad; }
		float getPrecio() { return Precio; }

		void setID(int ID) { this->ID = ID; }
		void setNombreIngrediente(String^ Nombre) { this->Nombre = Nombre; }
		void setEstado(String^ Estado) { this->Estado = Estado; }
		void setOrigen(String^ Origen) { this->Origen = Origen; }
		void setValorNutricional(ValorNutricional^ ValorNutricionalingrediente) { this->ValorNutricionalIngrediente = ValorNutricionalingrediente; }
		void setCantidad(String^ Cantidad) { this->Cantidad = Cantidad; }
		void setUnidad(String^ Unidad) { this->Unidad = Unidad; }
		void setPrecio(float Precio) { this->Precio = Precio; }

	};

	public ref class Receta
	{
		// TODO: Agregue aquí los métodos de esta clase.

	public:
		property int Id;
		property String^ Nombre;
		property List<Ingredientes^>^ ingredientes;
		//property int TiempoTotal;
		property int TiempoPreparacion;
		property int TiempoCoccion;
		property int Porciones;
		property String^ Dificultad;
		property String^ Categoria;
		property String^ Origen;
		property ValorNutricional^ valorNutricionalGeneral;


	public:
		double calcularCosto();

		Receta();
		~Receta();
		Receta(int Id, String^ Nombre, List<Ingredientes^>^ ingredientes, int TiempoPreparacion, int TiempoCoccion, int Porciones, String^ Dificultad, String^ Categoria, String^ Origen, ValorNutricional^ valorNutricionalgeneral);


		int getId() { return Id; }
		String^ getNombre() { return Nombre; }
		List<Ingredientes^>^ getIngredientes() { return ingredientes; }
		//int getTiempoTotal() { return TiempoTotal; }
		int getTiempoPreparacion() { return TiempoPreparacion; }
		int getTiempoCoccion() { return TiempoCoccion; }
		int getPorciones() { return Porciones; }
		String^ getDificultad() { return Dificultad; }
		String^ getCategoria() { return Categoria; }
		String^ getOrigen() { return Origen; }
		ValorNutricional^ getvalorNutricionalGeneral() { return valorNutricionalGeneral; }

		void setId(int Id) { this->Id = Id; }
		void setNombre(String^ Nombre) { this->Nombre = Nombre; }
		void setIngredientes(List<Ingredientes^>^ ingredientes) { this->ingredientes = ingredientes; }
		//void setTiempoTotal(int TiempoTotal) { this->TiempoTotal = TiempoTotal; }
		void setTiempoPreparacion(int TiempoPreparacion) { this->TiempoPreparacion = TiempoPreparacion; }
		void setTiempoCoccion(int TiempoCoccion) { this->TiempoCoccion = TiempoCoccion; }
		void setPorciones(int Porciones) { this->Porciones = Porciones; }
		void setDificultad(String^ Dificultad) { this->Dificultad = Dificultad; }
		void setCategoria(String^ Categoria) { this->Categoria = Categoria; }
		void setOrigen(String^ Origen) { this->Origen = Origen; }
		void setValorNutricionalGeneral(ValorNutricional^ valorNutricionalGeneral) { this->valorNutricionalGeneral = valorNutricionalGeneral; }

		void agregarIngredientes(List<Ingredientes^>^ nuevosIngredientes);
			
		
	};

	public ref class Lista_Recetas
	{
	public:

		List<Receta^>^ listaRecetas;
		int idActual;
		Lista_Recetas();
		~Lista_Recetas();
		//void AgregarReceta(int _Id, String^ _Nombre, List<Ingredientes^>^ _ingredientes, int _TiempoPreparacion, int _TiempoCoccion, int _Porciones, String^ _Dificultad, String^ _Categoria, String^ _Origen, ValorNutricional^ _valorNutricional);
		void AgregarReceta(Receta^ receta);
		bool EliminarReceta(int id);
		Receta^ BuscarReceta(int id);
		List<String^>^ obtenerNombresDeRecetas();
		//void AgregarIngrediente(int _id, Ingredientes^ _ingredientes);
		//void MostrarRecetas();
		//bool ModificarReceta(int _Id, String^ _Nombre, List<Ingredientes^>^ _ingredientes, int _TiempoPreparacion, int _TiempoCoccion, int _Porciones, String^ _Dificultad, String^ _Categoria, String^ _Origen, ValorNutricional^ _valorNutricional);
		//List<Ingredientes^>^ verIngredientes(int Id);
		//List<Receta^>^ listarRecetas();
		void editarReceta(int id, Receta^ nuevaReceta);
		ValorNutricional^ calcularValorNutricional(int identificador,Receta^ receta);
	public:
		List<Receta^>^ MostraRecetasPorPorciones(int porciones);
	public:
		List<Receta^>^ MostrarRecetasPorValorNutricional(int minCalorias, int maxCalorias, int minGrasa, int maxGrasa, int minCarbohidratos, int maxCarbohidratos, int minProteinas, int maxProteinas);
		double recalcularCosto(int identificador, int nuevasPorciones);

	};
}

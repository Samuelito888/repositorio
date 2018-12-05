/*
 * funciones.h
 *
 *  Created on: 02/12/2018
 *      Author: shmen
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
char 	Nombre[20], Apellido[20];
int 	Password;

int 	ProductoCodigo[10]; 		    // Arreglo de almacena el código de los productos (Codigo)
const char 	*ProductoNombre[10]; 		// Arreglo de almacena el nombre de los productos (Nombre)
int   	ProductoDatos[10][3]; 		    // Arreglo de almacena los datos de los productos (Precio, Stock, Descuento)
int 	N = 0;						    // Número de productos a generarse

int 	ProductoCodigoVendido[10];  	// Arreglo que almacena el código de los productos a comprar
double 	ProductoDatosVendido[10][4]; 	// Arreglo de almacena los datos de los productos a comprar (Cantidad, Precio, Descuento, SubTotal)
int 	NroProductosVendidos = 0;		// Número de productos vendidos
*/

//PROTOTIPOS

void Menu();
void IngresarDatosPersonales();
void GenerarListaProductos();
void MostrarProductosStock();
void MostrarProductosDescuento();
void ElegirProducto();
void ComprarAhora();
void MostrarFactura();

/*
//-----------------------------------------------------------------
void Menu()
{
	cout<<"================================"<<endl;
	cout<<" BIENVENIDO A TU TIENDA VIRTUAL "<<endl;
	cout<<"================================"<<endl;
	cout<<"<1> INGRESAR DATOS PERSONALES"<<endl;
	cout<<"<2> GENERAR LISTA DE PRODUCTOS"<<endl;
	cout<<"<3> MOSTRAR PRODUCTOS EN STOCK"<<endl;
	cout<<"<4> MOSTRAR PRODUCTOS CON DESCUENTO"<<endl;
	cout<<"<5> ELEGIR PRODUCTO"<<endl;
	cout<<"<6> COMPRAR AHORA"<<endl;
	cout<<"<7> MOSTRAR FACTURA"<<endl;
	cout<<"<8> SALIR"<<endl<<endl;
	cout<<"INGRESE OPCION: ";
}
//-----------------------------------------------------------------
void IngresarDatosPersonales()
{
	int ClaveAcceso = 45378;
	int NroIntentos = 0;

	// Solicitar Datos
	cout << "INGRESE SU NOMBRE: "; 		cin >> Nombre;
	cout << "INGRESE SU APELLIDO: "; 	cin >> Apellido;

	do
	{
		NroIntentos++;
		cout << "INTENTO NRO. " << NroIntentos << endl;
		cout << "INGRESE SU PASSWORD: "; 	cin >> Password;
	} while (Password != ClaveAcceso && NroIntentos < 3);

	if (NroIntentos>=3)
	{
		cout << "MENSAJE: ACCESO BLOQUEADO A LA TIENDA DURANTE 30 MINUTOS..." << endl << endl;
	}
	else
	{
		cout << "MENSAJE: BIENVENIDO A LA TIENDA VIRTUAL..." << endl << endl;
	}
}
//-----------------------------------------------------------------
void GenerarListaProductos()
{
	ProductoCodigo[N] = 1000;
	ProductoNombre[N] = "PRODUCTO1";
	ProductoDatos[N][0] = 100;
	ProductoDatos[N][1] = 10;
	ProductoDatos[N][2] = 10;
	N++;

	ProductoCodigo[N] = 2000;
	ProductoNombre[N] = "PRODUCTO2";
	ProductoDatos[N][0] = 200;
	ProductoDatos[N][1] = 20;
	ProductoDatos[N][2] = 20;
	N++;

	ProductoCodigo[N] = 3000;
	ProductoNombre[N] = "PRODUCTO3";
	ProductoDatos[N][0] = 300;
	ProductoDatos[N][1] = 30;
	ProductoDatos[N][2] = 30;
	N++;

	ProductoCodigo[N] = 4000;
	ProductoNombre[N] = "PRODUCTO4";
	ProductoDatos[N][0] = 400;
	ProductoDatos[N][1] = 40;
	ProductoDatos[N][2] = 40;
	N++;

	ProductoCodigo[N] = 5000;
	ProductoNombre[N] = "PRODUCTO5";
	ProductoDatos[N][0] = 500;
	ProductoDatos[N][1] = 50;
	ProductoDatos[N][2] = 50;
	N++;

	ProductoCodigo[N] = 6000;
	ProductoNombre[N] = "PRODUCTO6";
	ProductoDatos[N][0] = 600;
	ProductoDatos[N][1] = 60;
	ProductoDatos[N][2] = 0;
	N++;

	ProductoCodigo[N] = 7000;
	ProductoNombre[N] = "PRODUCTO7";
	ProductoDatos[N][0] = 700;
	ProductoDatos[N][1] = 70;
	ProductoDatos[N][2] = 0;
	N++;

	ProductoCodigo[N] = 8000;
	ProductoNombre[N] = "PRODUCTO8";
	ProductoDatos[N][0] = 800;
	ProductoDatos[N][1] = 80;
	ProductoDatos[N][2] = 0;
	N++;

	ProductoCodigo[N] = 9000;
	ProductoNombre[N] = "PRODUCTO9";
	ProductoDatos[N][0] = 900;
	ProductoDatos[N][1] = 90;
	ProductoDatos[N][2] = 0;
	N++;

	cout << endl << "LA LISTA DE PRODUCTOS GENERADA CORRECTAMENTE..." << endl << endl;

	cout << "CODIGO" << '\t' << "NOMBRE" << '\t' << '\t' << "PRECIO" << '\t' << "STOCK" << '\t' << "DESCUENTO" << endl;
	for(int i=0; i<N; i++)
	{
		cout<<ProductoCodigo[i]<<'\t'<<ProductoNombre[i]<<'\t'<<ProductoDatos[i][0]<<'\t'<<ProductoDatos[i][1]<<'\t'<<ProductoDatos[i][0]<<endl;
	}
}
//-----------------------------------------------------------------
void MostrarProductosStock()
{
	cout<< "PRODUCTOS EN STOCK" <<endl;
	cout<< "CODIGO	STOCK" <<endl;

	// Recorrer el arreglo de productos mostrando el código y stock del producto
	for(int i=0; i<N; i++)
	{
		cout << ProductoCodigo[i] << "    " << ProductoDatos[i][1] << endl;
	}
}
//-----------------------------------------------------------------
void MostrarProductosDescuento()
{
	cout<< "PRODUCTOS CON DESCUENTO" <<endl;
	cout<< "CODIGO   PRECIO   DESCUENTO" <<endl;

	// Recorrer el arreglo de productos mostrando el código, precio y descuento (solo se muestra los productos que tienen descuentos)
	for(int i=0; i<N; i++)
	{
		if (ProductoDatos[i][2] > 0)
		{
			cout << ProductoCodigo[i] << "     " << ProductoDatos[i][0] << "     " << ProductoDatos[i][2] << endl;
		}
	}
}
//-----------------------------------------------------------------
void ElegirProducto()
{
	int Codigo;
	int Cantidad;

	cout << "INGRESE EL CODIGO EL PRODUCTO: "; cin >> Codigo;
	cout << "INGRESE LA CANTIDAD A COMPRAR: "; cin >> Cantidad;

	// Buscar el código del producto en el arreglo y recuperar su precio, descuento y calcular el SubTotal
	for(int i=0; i<N; i++)
	{
		if (ProductoCodigo[i] == Codigo)
		{
			ProductoCodigoVendido[NroProductosVendidos] = Codigo; 						// Guardar Código
			ProductoDatosVendido[NroProductosVendidos][0] = Cantidad;					// Guardar Cantidad
			ProductoDatosVendido[NroProductosVendidos][1] = ProductoDatos[i][0];		// Guardar Precio
			ProductoDatosVendido[NroProductosVendidos][2] = ProductoDatos[i][2];		// Guardar Descuento

			// Mostrar los datos del producto seleccionado
			cout << endl << "SE ELEGIO EL SIGUIENTE PRODUCTO: " << endl;
			cout << "CODIGO PRODUCTO: " << ProductoCodigoVendido[NroProductosVendidos] << endl;
			cout << "CANTIDAD: " << ProductoDatosVendido[NroProductosVendidos][0] << endl;
			cout << "PRECIO: " << ProductoDatosVendido[NroProductosVendidos][1] << endl;
			cout << "DESCUENTO: " << ProductoDatosVendido[NroProductosVendidos][2] << endl;

			NroProductosVendidos++;
		}
	}

	cout << "NUMERO DE ITEMS VENDIDOS HASTA EL MOMENTO: " << NroProductosVendidos << endl;
}
//-----------------------------------------------------------------
void ComprarAhora()
{
	double MontoTotal = 0;
	char Confirmacion;

	// Mostrar todos los productos a comprar
	cout << "CODIGO"<<'\t'<<"CANTIDAD"<<'\t'<<"PRECIO"<<'\t'<<"DESCUENTO"<<'\t'<<"SUBTOTAL" << endl;
	for(int i=0; i<NroProductosVendidos; i++)
	{
		double SubTotal = 0;

		cout << ProductoCodigoVendido[i] << '\t';
		cout << ProductoDatosVendido[i][0] << '\t' << '\t';
		cout << ProductoDatosVendido[i][1] << '\t';
		cout << ProductoDatosVendido[i][2] << '\t' << '\t';
		if (ProductoDatosVendido[i][2] <0)
		{ // No existe descuento
			SubTotal = ProductoDatosVendido[i][0] * ProductoDatosVendido[i][1];
		}
		else
		{ // Existe descuento
			double Descuento = ProductoDatosVendido[i][0] * ProductoDatosVendido[i][1] * ProductoDatosVendido[i][2] / 100;
			SubTotal = ProductoDatosVendido[i][0] * ProductoDatosVendido[i][1] - Descuento;
		}
		cout << SubTotal << '\t' << endl;

		// Calcular el monto total a pagar
		MontoTotal = MontoTotal + SubTotal;
	}
	cout << "NUMERO DE ITEMS A VENDER: " << NroProductosVendidos << endl;
	cout << "MONTO TOTAL A PAGAR: " << MontoTotal << endl << endl;

	cout << "POR FAVOR CONFIRMAR LA COMPRA (S)I (N)O: "; cin >> Confirmacion;

	if (Confirmacion=='S' || Confirmacion=='s')
	{
		for(int i=0; i<NroProductosVendidos; i++)
		{
			// Disminutir el Stock de los productos a vender
			int Codigo = ProductoCodigoVendido[i];
			int Cantidad = ProductoDatosVendido[i][0];
			cout << Codigo << " " << Cantidad << endl;
			for(int j=0; j<N; j++)
			{
				if (Codigo == ProductoCodigo[j])
				{
					ProductoDatos[j][1] = ProductoDatos[j][1] - Cantidad;
				}
			}
		}

		cout << "PROCESO DE VENTA REALIZADO CORRECTAMENTE..." << endl << endl;
	}
}
//-----------------------------------------------------------------
void MostrarFactura()
{
	double MontoTotal;

	cout << "-----------------------" << endl;
	cout << " GENERACION DE FACTURA " << endl;
	cout << "-----------------------" << endl;
	cout << "CLIENTE: " << Nombre << " " << Apellido << endl << endl;

	// Mostrar todos los productos a comprar
	cout << "CODIGO"<<'\t'<<"CANTIDAD"<<'\t'<<"PRECIO"<<'\t'<<"DESCUENTO"<<'\t'<<"SUBTOTAL" << endl;
	for(int i=0; i<NroProductosVendidos; i++)
	{
		double SubTotal = 0;

		cout << ProductoCodigoVendido[i] << '\t';
		cout << ProductoDatosVendido[i][0] << '\t' << '\t';
		cout << ProductoDatosVendido[i][1] << '\t';
		cout << ProductoDatosVendido[i][2] << '\t' << '\t';
		if (ProductoDatosVendido[i][2] <0)
		{ // No existe descuento
			SubTotal = ProductoDatosVendido[i][0] * ProductoDatosVendido[i][1];
		}
		else
		{ // Existe descuento
			double Descuento = ProductoDatosVendido[i][0] * ProductoDatosVendido[i][1] * ProductoDatosVendido[i][2] / 100;
			SubTotal = ProductoDatosVendido[i][0] * ProductoDatosVendido[i][1] - Descuento;
		}
		cout << SubTotal << '\t' << endl;

		// Calcular el monto total a pagar
		MontoTotal = MontoTotal + SubTotal;
	}
	cout << "NUMERO DE ITEMS VENDIDOS: " << NroProductosVendidos << endl;
	cout << "MONTO TOTAL A PAGAR: " << MontoTotal << endl << endl;

	// Poner en cero el número de items a vender
	NroProductosVendidos = 0;
}
//-----------------------------------------------------------------
*/



#endif /* FUNCIONES_H_ */

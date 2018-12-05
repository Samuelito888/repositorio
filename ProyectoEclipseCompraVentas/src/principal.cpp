/*
 * principal.cpp
 *
 *  Created on: 02/12/2018
 *      Author: shmen
 */

#include "funciones.h"

int main()
{
	int Opcion = 0;

	do
	{
		// Mostrar Menu
		Menu();
		// Leer Opción
		cin >> Opcion;

		// Según la opción digitada
		switch(Opcion)
		{
			case 1: IngresarDatosPersonales(); 		// Solicitar los datos del cliente
			break;
			case 2: GenerarListaProductos(); 		// Generar la lista de productos con su respectivo precio
			break;
			case 3: MostrarProductosStock();		// Mostrar el código y stock de todos los productos
			break;
			case 4: MostrarProductosDescuento();	// Mostrar el código, precio y descuento de los productos que tengan el mismo
			break;
			case 5: ElegirProducto();				// Mostrar el código, precio y descuento de los productos que tengan el mismo
			break;
			case 6: ComprarAhora();					// Comprar los productos que están seleccionados
			break;
			case 7: MostrarFactura();				// Mostrar factura con los productos que se vendieron
			break;
		}
	}
	while (Opcion!=8);
	cout<<"Gracias por usar La tienda Virtual :D"<<endl;
	return 0;
}



Proceso futbol
	Definir victoria,derrota,golaf,golac Como Entero
	Definir  nombre,bestj Como Caracter
		Repetir
			// mostrar menu
			Limpiar Pantalla
			Escribir "Men� del Programa"
			Escribir "   1. Capturar datos"
			Escribir "   2. Mostrar datos"
			Escribir "   3. Operaciones (Ver si tiene m�s victorias, derrotas o empates)"
			Escribir "   4. Salir"
			// ingresar una opcion
			Escribir "Elija una opci�n (1-4): "
			Leer OP
			// procesar esa opci�n
			Segun OP Hacer
				
				1:
					//capturar datos
					Limpiar Pantalla
					Escribir "Nombre del Equipo: "
					Leer nombre
					Escribir "Victorias: "
					Leer victoria
					Escribir "Derrotas: "
					Leer derrota
					Escribir "Mejor jugador del equipo: "
					Leer bestj
					Escribir "Goles a favor: "
					Leer golaf
					Escribir "Goles en contra: "
					Leer golac
					
				2:
					//mostrar datos
					Limpiar Pantalla
					Escribir "El nombre del equipo es:"
					Escribir nombre
					Escribir "El n�mero de victorias del equipo es: "
					Escribir victoria
					Escribir "El n�mero de derrotas del equipo es: "
					Escribir derrota
					Escribir "El nombre del mejor jugador del equipo es: "
					Escribir bestj
					Escribir "El n�mero de goles a favor del equipo es: "
					Escribir golaf
					Escribir "El n�mero de goles en contra del equipo es: "
					Escribir golac
				3:
					//dado que pseint no da la posibilidad de manejar multiples datos con una sola variable 
					// se simplifica a un operaciona mas sencilla como determinar que tiene mas
					//derrotas,victorias o si en su caso es un empate
					//igual se pueden declara mas variables pero es ineficiente con una sola se puede ejemplificar
					Limpiar Pantalla
					Si victoria > derrota Entonces
						Escribir "Tiene m�s victorias que derrotas"
					Sino
						Si victoria < derrota Entonces
							Escribir "Tiene m�s derrotas que victoria"
						Sino
							Escribir "Tiene un empate en victorias y derrotas"
						FinSi
					FinSi
				4:
					//despedida
					Limpiar Pantalla
					Escribir "Gracias, vuelva pronto..."
				De otro modo:
					Escribir "Opci�n no v�lida"
			FinSegun
			Escribir "Presione enter para continuar"
			Esperar Tecla
		Hasta Que OP=4
FinProceso
#include "pch.h" 
#include <iostream> 
#include <stdlib.h> 

using namespace std; 
using namespace System; 

int turno = 2;
int cont8fichas1 = 12, cont8fichas2 = 12;
int cont10fichas1 = 15, cont10fichas2 = 15; 
int movimientosj1 = 0, movimientosj2 = 0;

void LogoTablero() { 

	char cuadradito = 219;

	for (int i = 1; i <= 8; i++) { 
		cout << "                          ";
		if (i % 2 == 0) cout << "  ";

		for (int j = 1; j <= 8; j++) {

			if (j % 2 != 0) cout << cuadradito << cuadradito;
			else cout << "  ";
		}
		cout << endl;
	}
	cout << endl;

}

int tablero8[8][8] = { //Jugador 1 = 2,   Jugador 2= 3,    Reina1= 4,   Reina2= 5

	{2,0,2,0,2,0,2,0},
	{0,2,0,2,0,2,0,2},
	{2,0,2,0,2,0,2,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,3,0,3,0,3,0,3},
	{3,0,3,0,3,0,3,0},
	{0,3,0,3,0,3,0,3}
};

int tablero10[10][10] = { 

    {2,0,2,0,2,0,2,0,2,0},
	{0,2,0,2,0,2,0,2,0,2},
	{2,0,2,0,2,0,2,0,2,0},
	{0,1,0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0,1,0},
	{0,3,0,3,0,3,0,3,0,3},
	{3,0,3,0,3,0,3,0,3,0},
	{0,3,0,3,0,3,0,3,0,3}

};

void tableroi8(string fichaj1, string jugador1, string fichaj2, string jugador2, int ficha1, int ficha2) {

	char letra = 65, letra2 = 65; 
	int numero = 8; int n;
	char bloque = 219;
	char bloquereina = 178;

	system("color F0");
	cout << "\n\n\t   Jugador 1: " << jugador1 << "                 Jugador 2: " << jugador2 << endl;
	cout << "\t     movimientos: " << movimientosj1 << "                      movimientos: " << movimientosj2 << endl;
	cout << "\n\t\t\n    ";

	for (int z = 0; z < 8; z++) { 
		cout << "       " << letra;
		letra++;
	} cout << endl;


	for (int i = 0; i < 8; i++) {

		for (int v = 1; v <= 4; v++) {

			if (v == 2) {
				Console::ForegroundColor = ConsoleColor::Black; 
				cout << endl << "   " << numero;
				numero--;
				cout << "\t";
			}
			else cout << endl << "\t";
			for (int j = 0; j < 8; j++) { 

				for (int a = 0; a < 8; a++) {

					if (tablero8[i][j] == 1) {
						Console::ForegroundColor = ConsoleColor::Black;
						cout << bloque;
					}
					else {

						if (tablero8[i][j] == 0) {
							Console::ForegroundColor = ConsoleColor::Gray;
							cout << bloque;
						}

						else {

							if (tablero8[i][j] == 2 || tablero8[i][j] == 4) {
								if ((v == 1 || v == 4 || a == 0 || a == 1 || a == 6 || a == 7) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7)) {
									Console::ForegroundColor = ConsoleColor::Black;
									cout << bloque;

								}

								else {
									switch (ficha1) {
									case 1: {
										Console::ForegroundColor = ConsoleColor::DarkBlue;
									}break;
									case 2: {
										Console::ForegroundColor = ConsoleColor::DarkGreen;
									}break;
									case 3: {
										Console::ForegroundColor = ConsoleColor::DarkCyan;
									}break;
									case 4: {
										Console::ForegroundColor = ConsoleColor::DarkRed;
									}break;
									case 5: {
										Console::ForegroundColor = ConsoleColor::DarkMagenta;
									}break;
									case 6: {
										Console::ForegroundColor = ConsoleColor::DarkYellow;
									}break;
									case 7: {
										Console::ForegroundColor = ConsoleColor::White;
									}break;
									case 8: {
										Console::ForegroundColor = ConsoleColor::Blue;
									}break;
									case 9: {
										Console::ForegroundColor = ConsoleColor::Green;
									}break;
									case 10: {
										Console::ForegroundColor = ConsoleColor::Cyan;
									}break;
									case 11: {
										Console::ForegroundColor = ConsoleColor::Red;
									}break;
									case 12: {
										Console::ForegroundColor = ConsoleColor::Magenta;
									}break;
									case 13: {
										Console::ForegroundColor = ConsoleColor::Yellow;
									}break;
									case 14: {
										Console::ForegroundColor = ConsoleColor::Gray;
									}break;
									}

									if (tablero8[i][j] == 2) cout << bloque;
									if (tablero8[i][j] == 4) cout << bloquereina;
								}
							}

							else
							{
								if (tablero8[i][j] == 3 || tablero8[i][j] == 5) { 
									if ((v == 1 || v == 4 || a == 0 || a == 1 || a == 6 || a == 7) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7)) {
										Console::ForegroundColor = ConsoleColor::Black;
										cout << bloque;

									}
									else {
										switch (ficha2) {
										case 1: {
											Console::ForegroundColor = ConsoleColor::DarkBlue;
										}break;
										case 2: {
											Console::ForegroundColor = ConsoleColor::DarkGreen;
										}break;
										case 3: {
											Console::ForegroundColor = ConsoleColor::DarkCyan;
										}break;
										case 4: {
											Console::ForegroundColor = ConsoleColor::DarkRed;
										}break;
										case 5: {
											Console::ForegroundColor = ConsoleColor::DarkMagenta;
										}break;
										case 6: {
											Console::ForegroundColor = ConsoleColor::DarkYellow;
										}break;
										case 7: {
											Console::ForegroundColor = ConsoleColor::White;
										}break;
										case 8: {
											Console::ForegroundColor = ConsoleColor::Blue;
										}break;
										case 9: {
											Console::ForegroundColor = ConsoleColor::Green;
										}break;
										case 10: {
											Console::ForegroundColor = ConsoleColor::Cyan;
										}break;
										case 11: {
											Console::ForegroundColor = ConsoleColor::Red;
										}break;
										case 12: {
											Console::ForegroundColor = ConsoleColor::Magenta;
										}break;
										case 13: {
											Console::ForegroundColor = ConsoleColor::Yellow;
										}break;
										case 14: {
											Console::ForegroundColor = ConsoleColor::Gray;
										}break;
										}
										if (tablero8[i][j] == 3) cout << bloque;
										if (tablero8[i][j] == 5) cout << bloquereina;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << "\n\t\t\n    "; 
	for (int z = 0; z < 8; z++) {
		Console::ForegroundColor = ConsoleColor::Black;
		cout << "       " << letra2;
		letra2++;
	} cout << "\n\t\t\n    ";
}

void tableroi10(string fichaj1, string jugador1, string fichaj2, string jugador2, int ficha1, int ficha2)
{
	char letra = 65, letra2 = 65;
	int numero = 9; int n;
	char bloque = 219;
	char bloquereina = 178;

	system("color F0");
	cout << "\n\n\t   Jugador 1: " << jugador1 << "                                Jugador 2: " << jugador2 << endl;
	cout << "\t     movimientos: " << movimientosj1 << "                                      movimientos: " << movimientosj2 << endl;
	cout << "\n\t\t\n    ";

	for (int z = 0; z < 10; z++) {
		cout << "       " << letra;
		letra++;
	}cout << endl;

	for (int i = 0; i < 10; i++) {

		for (int v = 1; v <= 4; v++) {

			if (v == 2) {
				Console::ForegroundColor = ConsoleColor::Black; 
				cout << endl << "   " << numero;
				numero--;
				cout << "\t";
			}
			else cout << endl << "\t";
			for (int j = 0; j < 10; j++) { 

				for (int a = 0; a < 8; a++) {

					if (tablero10[i][j] == 1) { 

						Console::ForegroundColor = ConsoleColor::Black;
						cout << bloque;
					}
					else {

						if (tablero10[i][j] == 0) { 

							Console::ForegroundColor = ConsoleColor::Gray;
							cout << bloque;
						}

						else {

							if (tablero10[i][j] == 2 || tablero10[i][j] == 4) { 
								if ((v == 1 || v == 4 || a == 0 || a == 1 || a == 6 || a == 7) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8 || j == 9)) {
									Console::ForegroundColor = ConsoleColor::Black;
									cout << bloque;

								}

								else {
									switch (ficha1) {
									case 1: {
										Console::ForegroundColor = ConsoleColor::DarkBlue;
									}break;
									case 2: {
										Console::ForegroundColor = ConsoleColor::DarkGreen;
									}break;
									case 3: {
										Console::ForegroundColor = ConsoleColor::DarkCyan;
									}break;
									case 4: {
										Console::ForegroundColor = ConsoleColor::DarkRed;
									}break;
									case 5: {
										Console::ForegroundColor = ConsoleColor::DarkMagenta;
									}break;
									case 6: {
										Console::ForegroundColor = ConsoleColor::DarkYellow;
									}break;
									case 7: {
										Console::ForegroundColor = ConsoleColor::White;
									}break;
									case 8: {
										Console::ForegroundColor = ConsoleColor::Blue;
									}break;
									case 9: {
										Console::ForegroundColor = ConsoleColor::Green;
									}break;
									case 10: {
										Console::ForegroundColor = ConsoleColor::Cyan;
									}break;
									case 11: {
										Console::ForegroundColor = ConsoleColor::Red;
									}break;
									case 12: {
										Console::ForegroundColor = ConsoleColor::Magenta;
									}break;
									case 13: {
										Console::ForegroundColor = ConsoleColor::Yellow;
									}break;
									case 14: {
										Console::ForegroundColor = ConsoleColor::Gray;
									}break;
									}

									if (tablero10[i][j] == 2) cout << bloque;
									if (tablero10[i][j] == 4) cout << bloquereina;
								}
							}

							else
							{
								if (tablero10[i][j] == 3 || tablero10[i][j] == 5) { 
									if ((v == 1 || v == 4 || a == 0 || a == 1 || a == 6 || a == 7) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8 || j == 9)) {
										Console::ForegroundColor = ConsoleColor::Black;
										cout << bloque;

									}
									else {
										switch (ficha2) {
										case 1: {
											Console::ForegroundColor = ConsoleColor::DarkBlue;
										}break;
										case 2: {
											Console::ForegroundColor = ConsoleColor::DarkGreen;
										}break;
										case 3: {
											Console::ForegroundColor = ConsoleColor::DarkCyan;
										}break;
										case 4: {
											Console::ForegroundColor = ConsoleColor::DarkRed;
										}break;
										case 5: {
											Console::ForegroundColor = ConsoleColor::DarkMagenta;
										}break;
										case 6: {
											Console::ForegroundColor = ConsoleColor::DarkYellow;
										}break;
										case 7: {
											Console::ForegroundColor = ConsoleColor::White;
										}break;
										case 8: {
											Console::ForegroundColor = ConsoleColor::Blue;
										}break;
										case 9: {
											Console::ForegroundColor = ConsoleColor::Green;
										}break;
										case 10: {
											Console::ForegroundColor = ConsoleColor::Cyan;
										}break;
										case 11: {
											Console::ForegroundColor = ConsoleColor::Red;
										}break;
										case 12: {
											Console::ForegroundColor = ConsoleColor::Magenta;
										}break;
										case 13: {
											Console::ForegroundColor = ConsoleColor::Yellow;
										}break;
										case 14: {
											Console::ForegroundColor = ConsoleColor::Gray;
										}break;
										}

										if (tablero10[i][j] == 3) cout << bloque;
										if (tablero10[i][j] == 5) cout << bloquereina;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	cout << "\n\t\t\n    "; //letras abajo
	for (int z = 0; z < 10; z++) {
		Console::ForegroundColor = ConsoleColor::Black;
		cout << "       " << letra2;
		letra2++;
	} cout << "\n\t\t\n    ";
}

void VerificarReina(int tamtablero) {

	if (tamtablero == 1) {

		for (int i = 0; i < 8; i++) {

			if (tablero8[0][i] == 3) {

				tablero8[0][i] = 5;
				Console::ForegroundColor = ConsoleColor::Red;
				cout << "\n\t\t[ Ficha de JUGADOR 2 se ha convertido en reina ] \n";
				Console::ForegroundColor = ConsoleColor::Black;
			}

			if (tablero8[7][i] == 2) {

				tablero8[7][i] = 4;
				Console::ForegroundColor = ConsoleColor::Red;
				cout << "\n\t\t[ Ficha de JUGADOR 1 se ha convertido en reina ] \n";
				Console::ForegroundColor = ConsoleColor::Black;

			}
		}
	}

	else if (tamtablero == 2) {

		for (int i = 0; i < 10; i++) {

			if (tablero10[0][i] == 3) {

				tablero10[0][i] = 5;
				Console::ForegroundColor = ConsoleColor::Red;
				cout << "\n\t\t[ Ficha de JUGADOR 2 se ha convertido en reina ] \n";
				Console::ForegroundColor = ConsoleColor::Black;
			}

			if (tablero10[9][i] == 2) {

				tablero10[9][i] = 4;
				Console::ForegroundColor = ConsoleColor::Red;
				cout << "\n\t\t[ Ficha de JUGADOR 1 se ha convertido en reina ] \n";
				Console::ForegroundColor = ConsoleColor::Black;
			}
		}
	}
}

void MovimientosPartida(int tamtablero, string fichaj1, string jugador1, string fichaj2, string jugador2, int ficha1, int ficha2) {

	string str, str2; 
	int caracter, caracter2, numero, numero2; 
	char guion = 175; 
	int reina = turno + 2; 

	if ((cont8fichas1 != 0 && cont8fichas2 != 0 && cont10fichas1 != 0 && cont10fichas2 != 0)) {

		
		if (tamtablero == 1) {

			tableroi8(fichaj1, jugador1, fichaj2, jugador2, ficha1, ficha2); 

			if (turno == 2) cout << "\n\n     " << jugador1 << " (fichas " << fichaj1 << ")\n\n"; 
			else cout << "\n\n     " << jugador2 << " (fichas " << fichaj2 << ")\n\n";
						
			do {

				cout << "\n     " << guion << " Ingrese letra y numero donde se ubica la pieza que desea mover: "; cin >> str;

				//a5
				caracter = toupper(str[0]) - 65;
				numero = 7 - abs(str[1] - 49); 

				if (tablero8[numero][caracter] != turno && tablero8[numero][caracter] != reina) cout << "\n\t\t[ NO HAY PIEZA EN ESTA UBICACION, intente de nuevo ] \n";

			} while (tablero8[numero][caracter] != turno && tablero8[numero][caracter] != reina);
			

			if (tablero8[numero][caracter] == turno || tablero8[numero][caracter] == reina) {
												
				if (turno == 2) {

					do {
						cout << "\n     " << guion << " Ingrese letra y numero de la casilla donde movera la pieza: "; cin >> str2; 

						caracter2 = toupper(str2[0]) - 65;
						numero2 = 7 - abs(str2[1] - 49);

						if (caracter2 == caracter && numero2 == numero) {
							system("cls");
							return;
						}

						else if ((abs(numero2 - numero) - abs(caracter2 - caracter) != 0) || (tablero8[numero2][caracter2] != 1) || (numero2 < numero && tablero8[numero][caracter] == turno)) {
						
							cout << "\n\t\t[ MOVIMIENTO INVALIDO, intente de nuevo ] \n";
						}
					} while ((abs(numero2 - numero) - abs(caracter2 - caracter) != 0) || (tablero8[numero2][caracter2] != 1) || (numero2 < numero && tablero8[numero][caracter] == turno));
				}
								
				else if (turno == 3) {

					do {
						cout << "\n     " << guion << " Ingrese letra y numero de la casilla donde movera la pieza: "; cin >> str2;

						caracter2 = toupper(str2[0]) - 65;
						numero2 = 7 - abs(str2[1] - 49);

						if (caracter2 == caracter && numero2 == numero) {
							system("cls");
							return;
						}

						else if ((abs(numero2 - numero) - abs(caracter2 - caracter) != 0) || (tablero8[numero2][caracter2] != 1) || (numero2 > numero && tablero8[numero][caracter] == turno)) {
							
							cout << "\n\t\t[ MOVIMIENTO INVALIDO, intente de nuevo ] \n";
						}

					} while ((abs(numero2 - numero) - abs(caracter2 - caracter) != 0) || (tablero8[numero2][caracter2] != 1) || (numero2 > numero && tablero8[numero][caracter] == turno));
				}
				
				if (tablero8[numero2][caracter2] == 1) {
					
					if (abs(numero2 - numero) - abs(caracter2 - caracter) == 0) {

						int contcasillas = 0;
						
						for (int a = abs(numero2 - numero); a > 0; a--) { 							

							if (turno == 2) {

								if (numero2 > numero) { //normales y reinas

									if (caracter2 > caracter) {//abajo derecha
										if (tablero8[numero2 - a][caracter2 - a] == 3 || tablero8[numero2 - a][caracter2 - a] == 5) contcasillas++;
										
										if (contcasillas == 1) {

											cout << "\n\t\t[ " << jugador1 << " comera la pieza de " << jugador2 << " ]\n";
											cont8fichas2--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}

									else if (caracter > caracter2) {//abajo izquierda
										if (tablero8[numero2 - a][caracter2 + a] == 3 || tablero8[numero2 - a][caracter2 + a] == 5) contcasillas++;

										if (contcasillas == 1) {

											cout << "\n\t\t[ " << jugador1 << " comera la pieza de " << jugador2 << " ]\n";
											cont8fichas2--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}
								}

								else if (numero > numero2) { //reinas

									if (caracter2 > caracter) {//arriba derecha

										if (tablero8[numero2 + a][caracter2 - a] == 3 || tablero8
											[numero2 + a][caracter2 - a] == 5) contcasillas++;										

										if (contcasillas == 1) {

											cout << "\n\t\t[ " << jugador1 << " comera la pieza de " << jugador2 << " ]\n";
											cont8fichas2--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}

									else if (caracter > caracter2) { //arriba izquierda
										if (tablero8[numero2 + a][caracter2 + a] == 3 || tablero8[numero2 + a][caracter2 + a] == 5) contcasillas++;

										if (contcasillas == 1) {

											cout << "\n\t\t[ " << jugador1 << " comera la pieza de " << jugador2 << " ]\n";
											cont8fichas2--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}
								}
							}

							else if (turno == 3) { 

								if (numero > numero2) { // normales y reinas

									if (caracter2 > caracter) { //arriba derecha
										if (tablero8[numero2 + a][caracter2 - a] == 4 || tablero8[numero2 + a][caracter2 - a] == 2) contcasillas++;

										if (contcasillas == 1) {

											cout << "\n\t\t[ " << jugador2 << " comera la pieza de " << jugador1 << " ]\n";
											cont8fichas1--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}

									else if (caracter > caracter2) { //arriba izquierda
										if (tablero8[numero2 + a][caracter2 + a] == 4 || tablero8[numero2 + a][caracter2 + a] == 2) contcasillas++;

										if (contcasillas == 1) {

											cout << "\n\t\t[ " << jugador2 << " comera la pieza de " << jugador1 << " ]\n";
											cont8fichas1--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}
								}

								else if (numero2 > numero) {
									if (caracter2 > caracter) {//abajo derecha
										if (tablero8[numero2 - a][caracter2 - a] == 4 || tablero8[numero2 - a][caracter2 - a] == 2) contcasillas++;

										if (contcasillas == 1) {

											cout << "\n\t\t[ " << jugador2 << " comera la pieza de " << jugador1 << " ]\n";
											cont8fichas1--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}

									else if (caracter > caracter2) { //abajo izquierda
										if (tablero8[numero2 - a][caracter2 + a] == 4 || tablero8[numero2 - a][caracter2 + a] == 2) contcasillas++;

										if (contcasillas == 1) {

											cout << "\n\t\t[ " << jugador2 << " comera la pieza de " << jugador1 << " ]\n";
											cont8fichas1--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}
								}
							}
						}
						
						if ((contcasillas == 1 && tablero8[numero][caracter] == turno && abs(numero - numero2) == 2) || (contcasillas == 0 && tablero8[numero][caracter] == turno && abs(numero - numero2) == 1) || (contcasillas < 2 && tablero8[numero][caracter] == reina)) {

							for (int a = abs(numero2 - numero); a > 0; a--) {

								if (turno == 2) {

									if (numero2 > numero) { //reinas 

										if (caracter2 > caracter) { //arriba derecha

											if (tablero8[numero2 - a][caracter2 - a] == 3 || tablero8[numero2 - a][caracter2 - a] == 5) tablero8[numero2 - a][caracter2 - a] = 1;
											
										}

										else if (caracter > caracter2) {//arriba izquierda

											if (tablero8[numero2 - a][caracter2 + a] == 3 || tablero8[numero2 - a][caracter2 + a] == 5) tablero8[numero2 - a][caracter2 + a] = 1;
										}
									}

									else if (numero > numero2) { //normales y reinas

										if (caracter2 > caracter) { //abajo derecha

											if (tablero8[numero2 + a][caracter2 - a] == 3 || tablero8[numero2 + a][caracter2 - a] == 5) tablero8[numero2 + a][caracter2 - a] = 1;

										}

										else if (caracter > caracter2) { //abajo izquierda
											if (tablero8[numero2 + a][caracter2 + a] == 3 || tablero8[numero2 + a][caracter2 + a] == 5) tablero8[numero2 + a][caracter2 + a] = 1;

										}
									}
								}

								else if (turno == 3) {

									if (numero2 > numero) { //reinas

										if (caracter2 > caracter) { //arriba derecha

											if (tablero8[numero2 - a][caracter2 - a] == 4 || tablero8[numero2 - a][caracter2 - a] == 2) tablero8[numero2 - a][caracter2 - a] = 1;

										}
										else if (caracter > caracter2) { //arriba izquierda

											if (tablero8[numero2 - a][caracter2 + a] == 4 || tablero8[numero2 - a][caracter2 + a] == 2) tablero8[numero2 - a][caracter2 + a] = 1;

										}
									}

									else if (numero > numero2) { //normales y reinas

										if (caracter2 > caracter) { //abajo derecha

											if (tablero8[numero2 + a][caracter2 - a] == 4 || tablero8[numero2 + a][caracter2 - a] == 2) tablero8[numero2 + a][caracter2 - a] = 1;

										}

										else if (caracter > caracter2) {  //abajo izquierda

											if (tablero8[numero2 + a][caracter2 + a] == 4 || tablero8[numero2 + a][caracter2 + a] == 2) tablero8[numero2 + a][caracter2 + a] = 1;
										}
									}
								}
							}
							
							tablero8[numero2][caracter2] = tablero8[numero][caracter]; 
							tablero8[numero][caracter] = 1; 

							if (turno == 2) { 
								turno = 3;
								movimientosj1++;
							}

							else if (turno == 3) { 
								turno = 2;
								movimientosj2++;
							}
						}
						system("cls");
						return;
					}
				}
			}		
			return;
		}

		//para el i10
		if (tamtablero == 2) {

			tableroi10(fichaj1, jugador1, fichaj2, jugador2, ficha1, ficha2); 

			if (turno == 2) cout << "\n\n     " << jugador1 << " (fichas " << fichaj1 << ")\n\n"; 
			else cout << "\n\n     " << jugador2 << " (fichas " << fichaj2 << ")\n\n";
									
			do {
				cout << "\n     " << guion << " Ingrese letra y numero donde se ubica la pieza que desea mover: "; cin >> str;
				
				caracter = toupper(str[0]) - 65; 
				numero = 8 - abs(str[1] - 49); 

				if (tablero10[numero][caracter] != turno && tablero10[numero][caracter] != reina) cout << "\n\t\t[ NO HAY PIEZA EN ESTA UBICACION, intente de nuevo ] \n";				

			} while (tablero10[numero][caracter] != turno && tablero10[numero][caracter] != reina);
			
			if (tablero10[numero][caracter] == turno || tablero10[numero][caracter] == reina) {
				
				if (turno == 2) {

					do {
						cout << "\n     " << guion << " Ingrese letra y numero de la casilla donde movera la pieza: "; cin >> str2; 

						caracter2 = toupper(str2[0]) - 65;
						numero2 = 8 - abs(str2[1] - 49);

						if (caracter2 == caracter && numero2 == numero) {
							system("cls");
							return;
						}

						else if ((abs(numero2 - numero) - abs(caracter2 - caracter) != 0) || (tablero10[numero2][caracter2] != 1) || (numero2 < numero && tablero10[numero][caracter] == turno)) {							
							cout << "\n\t\t[ MOVIMIENTO INVALIDO, intente de nuevo ] \n";
						}
					} while ((abs(numero2 - numero) - abs(caracter2 - caracter) != 0) || (tablero10[numero2][caracter2] != 1) || (numero2 < numero && tablero10[numero][caracter] == turno));
				}
				
				else if (turno == 3) {

					do {
						cout << "\n     " << guion << " Ingrese letra y numero de la casilla donde movera la pieza: "; cin >> str2;

						caracter2 = toupper(str2[0]) - 65;
						numero2 = 8 - abs(str2[1] - 49);


						if ((abs(numero2 - numero) - abs(caracter2 - caracter) != 0) || (tablero10[numero2][caracter2] != 1) || (numero2 > numero && tablero10[numero][caracter] == turno)) {							

							cout << "\n\t\t[ MOVIMIENTO INVALIDO, intente de nuevo ] \n";
						}
					} while ((abs(numero2 - numero) - abs(caracter2 - caracter) != 0) || (tablero10[numero2][caracter2] != 1) || (numero2 > numero && tablero10[numero][caracter] == turno));
				}
				
				if (tablero10[numero2][caracter2] == 1) {
					
					if (abs(numero2 - numero) - abs(caracter2 - caracter) == 0) {

						int contcasillas = 0;					

						for (int a = abs(numero2 - numero); a > 0; a--) {

							if (turno == 2) {

								if (numero2 > numero) { //normales y reinas

									if (caracter2 > caracter) {//abajo derecha
										if (tablero10[numero2 - a][caracter2 - a] == 3 || tablero10[numero2 - a][caracter2 - a] == 5) contcasillas++;

										if (contcasillas != 0) {
											cout << "\n\t\t[ " << jugador1 << " comera la pieza de " << jugador2 << " ]\n";
											cont10fichas2--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}

									else if (caracter > caracter2) {//abajo izquierda
										if (tablero10[numero2 - a][caracter2 + a] == 3 || tablero10[numero2 - a][caracter2 + a] == 5) contcasillas++;

										if (contcasillas != 0) {
											cout << "\n\t\t[ " << jugador1 << " comera la pieza de " << jugador2 << " ]\n";
											cont10fichas2--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}
								}

								else if (numero > numero2) { //reinas

									if (caracter2 > caracter) {//arriba derecha

										if (tablero10[numero2 + a][caracter2 - a] == 3 || tablero10
											[numero2 + a][caracter2 - a] == 5) contcasillas++;										

										if (contcasillas != 0) {
											cout << "\n\t\t[ " << jugador1 << " comera la pieza de " << jugador2 << " ]\n";
											cont10fichas2--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}

									else if (caracter > caracter2) { //arriba izquierda
										if (tablero10[numero2 + a][caracter2 + a] == 3 || tablero10[numero2 + a][caracter2 + a] == 5) contcasillas++;

										if (contcasillas != 0) {
											cout << "\n\t\t[ " << jugador1 << " comera la pieza de " << jugador2 << " ]\n";
											cont10fichas2--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}
								}
							}

							else if (turno == 3) { //jugador 2

								if (numero > numero2) { // normales y reinas

									if (caracter2 > caracter) { //arriba derecha
										if (tablero10[numero2 + a][caracter2 - a] == 4 || tablero10[numero2 + a][caracter2 - a] == 2) contcasillas++;

										if (contcasillas != 0) {

											cout << "\n\t\t[ " << jugador2 << " comera la pieza de " << jugador1 << " ]\n";
											cont10fichas1--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}

									else if (caracter > caracter2) { //arriba izquierda
										if (tablero10[numero2 + a][caracter2 + a] == 4 || tablero10[numero2 + a][caracter2 + a] == 2) contcasillas++;

										if (contcasillas != 0) {
											cout << "\n\t\t[ " << jugador2 << " comera la pieza de " << jugador1 << " ]\n";
											cont10fichas1--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}
								}

								else if (numero2 > numero) {
									if (caracter2 > caracter) {//abajo derecha
										if (tablero10[numero2 - a][caracter2 - a] == 4 || tablero10[numero2 - a][caracter2 - a] == 2) contcasillas++;

										if (contcasillas != 0) {
											cout << "\n\t\t[ " << jugador2 << " comera la pieza de " << jugador1 << " ]\n";
											cont10fichas1--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}

									else if (caracter > caracter2) { //abajo izquierda
										if (tablero10[numero2 - a][caracter2 + a] == 4 || tablero10[numero2 - a][caracter2 + a] == 2) contcasillas++;

										if (contcasillas != 0) {
											cout << "\n\t\t[ " << jugador2 << " comera la pieza de " << jugador1 << " ]\n";
											cont10fichas1--;
											cout << "\n\t\t... Presione una tecla para continuar ..."; system("pause>nul");
										}
									}
								}
							}
						}
						
						if ((contcasillas == 1 && tablero10[numero][caracter] == turno && abs(numero - numero2) == 2) || (contcasillas == 0 && tablero10[numero][caracter] == turno && abs(numero - numero2) == 1) || (contcasillas < 2 && tablero10[numero][caracter] == reina)) {

							for (int a = abs(numero2 - numero); a > 0; a--) {

								if (turno == 2) {

									if (numero2 > numero) { //reinas 

										if (caracter2 > caracter) { //arriba derecha

											if (tablero10[numero2 - a][caracter2 - a] == 3 || tablero10[numero2 - a][caracter2 - a] == 5) tablero10[numero2 - a][caracter2 - a] = 1;										
										}

										else if (caracter > caracter2) {//arriba izquierda

											if (tablero10[numero2 - a][caracter2 + a] == 3 || tablero10[numero2 - a][caracter2 + a] == 5) tablero10[numero2 - a][caracter2 + a] = 1;
										}
									}

									else if (numero > numero2) { //normales y reinas

										if (caracter2 > caracter) { //abajo derecha

											if (tablero10[numero2 + a][caracter2 - a] == 3 || tablero10[numero2 + a][caracter2 - a] == 5) tablero10[numero2 + a][caracter2 - a] = 1;
										}

										else if (caracter > caracter2) { //abajo izquierda
											if (tablero10[numero2 + a][caracter2 + a] == 3 || tablero10[numero2 + a][caracter2 + a] == 5) tablero10[numero2 + a][caracter2 + a] = 1;
										}
									}
								}


								else if (turno == 3) {

									if (numero2 > numero) { //reinas 

										if (caracter2 > caracter) { //arriba derecha

											if (tablero10[numero2 - a][caracter2 - a] == 4 || tablero10[numero2 - a][caracter2 - a] == 2) tablero10[numero2 - a][caracter2 - a] = 1;
										}

										else if (caracter > caracter2) { //arriba izquierda
											if (tablero10[numero2 - a][caracter2 + a] == 4 || tablero10[numero2 - a][caracter2 + a] == 2) tablero10[numero2 - a][caracter2 + a] = 1;
										}
									}

									else if (numero > numero2) { //normales y reinas

										if (caracter2 > caracter) { //abajo derecha
											if (tablero10[numero2 + a][caracter2 - a] == 4 || tablero10[numero2 + a][caracter2 - a] == 2) tablero10[numero2 + a][caracter2 - a] = 1;
										}

										else if (caracter > caracter2) {  //abajo izquierda
											if (tablero10[numero2 + a][caracter2 + a] == 4 || tablero10[numero2 + a][caracter2 + a] == 2) tablero10[numero2 + a][caracter2 + a] = 1;
										}
									}
								}
							}
							
							tablero10[numero2][caracter2] = tablero10[numero][caracter]; 
							tablero10[numero][caracter] = 1; 

							if (turno == 2) { 
								turno = 3;
								movimientosj1++;
							}

							else if (turno == 3) { 
								turno = 2;
								movimientosj2++;
							}
						}						
						system("cls");
						return;
					}
				}
			}			
			return;
		}
	}

	else if (cont8fichas1 == 0 || cont8fichas2 == 0 || cont10fichas1 == 0 || cont10fichas2 == 0) {

		if (tamtablero == 1) {

			if (cont8fichas2 == 0) {

				tableroi8(fichaj1, jugador1, fichaj2, jugador2, ficha1, ficha2);
				cout << "\n\t 'Juego terminado, " << jugador1 << " (jugador 1) a ganado la partida' \n";

				cout << "\n\t\t... Presione una tecla para finalizar ..."; system("pause>nul"); cout << "\n\n";
				exit(EXIT_FAILURE);
			}

			else if (cont8fichas1 == 0) {

				tableroi8(fichaj1, jugador1, fichaj2, jugador2, ficha1, ficha2);
				cout << "\n\t 'Juego terminado, " << jugador2 << " (jugador 2) a ganado la partida' \n";

				cout << "\n\t\t... Presione una tecla para finalizar ..."; system("pause>nul"); cout << "\n\n";
				exit(EXIT_FAILURE);
			}
		}

		if (tamtablero == 2) {

			if (cont10fichas2 == 0) {

				tableroi10(fichaj1, jugador1, fichaj2, jugador2, ficha1, ficha2);
				cout << "\n\t 'Juego terminado, " << jugador1 << " (jugador 1) a ganado la partida' \n";

				cout << "\n\t\t... Presione una tecla para finalizar ..."; system("pause>nul"); cout << "\n\n";
				exit(EXIT_FAILURE);
			}

			else if (cont10fichas1 == 0) {

				tableroi10(fichaj1, jugador1, fichaj2, jugador2, ficha1, ficha2);
				cout << "\n\t 'Juego terminado, " << jugador2 << " (jugador 2) a ganado la partida' \n";

				cout << "\n\t\t... Presione una tecla para finalizar ..."; system("pause>nul"); cout << "\n\n";
				exit(EXIT_FAILURE);
			}
		}
	}
}

void InfoPartida() {

	string jugador1, jugador2;
	int ficha1, ficha2, tamtablero;

	cout << "\n\n                    --||   JUEGO DE DAMAS  ||--     \n\n\n";
	LogoTablero();
	cout << "\n            Ingrese el nombre del Jugador 1: "; cin >> jugador1;
	cout << "\n            Ingrese el nombre del Jugador 2: "; cin >> jugador2;
	system("cls");

	cout << "\n\n                    --||   JUEGO DE DAMAS  ||--     \n\n\n";
	LogoTablero();
	cout << "\n                        COLORES DISPONIBLES        \n";
	cout << "\n           Oscuros:                           Claros:       \n";
	cout << "\n           [1] Azul                           [8] Azul       ";
	cout << "\n           [2] Verde                          [9] Verde      ";
	cout << "\n           [3] Aguamarina                     [10] Aguamarina ";
	cout << "\n           [4] Rojo                           [11] Rojo       ";
	cout << "\n           [5] Purpura                        [12] Purpura    ";
	cout << "\n           [6] Amarillo                       [13] Amarillo   ";
	cout << "\n           [7] Blanco                         [14] Gris \n\n";

	do {
		cout << "\n               " << jugador1 << ", elija un color de ficha: "; cin >> ficha1;
		if (ficha1 < 0 || ficha1>15) {
			cout << "               Opcion invalida, intente otra vez\n";
		}
	} while (ficha1 < 0 || ficha1>15);

	do {
		cout << "\n               " << jugador2 << ", elija un color de ficha: "; cin >> ficha2;

		if (ficha2 < 0 && ficha2 == ficha1 || ficha2>15 && ficha2 == ficha1 || ficha2 == ficha1 || ficha2 < 0 || ficha2>15) {
			cout << "               Opcion invalida, intente otra vez\n";
		}

		if (ficha2 == ficha1) {
			cout << "     No puede elegir el mismo color que el enemigo, intente otra vez\n";
		}
	} while (ficha2 < 0 && ficha2 == ficha1 || ficha2>15 && ficha2 == ficha1 || ficha2 == ficha1 || ficha2 < 0 || ficha2>15);

	system("cls");

	string fichaj1, fichaj2;

	switch (ficha1) {
	case 1: {
		fichaj1 = "azules";
	} break;
	case 2: {
		fichaj1 = "verdes";
	}break;
	case 3: {
		fichaj1 = "aguamarinas";
	}break;
	case 4: {
		fichaj1 = "rojas";
	}break;
	case 5: {
		fichaj1 = "purpuras";
	}break;
	case 6: {
		fichaj1 = "amarillas";
	}break;
	case 7: {
		fichaj1 = "blancas";
	}break;
	case 8: {
		fichaj1 = "azules";
	}break;
	case 9: {
		fichaj1 = "verdes";
	}break;
	case 10: {
		fichaj1 = "aguamarinas";
	}break;
	case 11: {
		fichaj1 = "rojas";
	}break;
	case 12: {
		fichaj1 = "purpuras";
	}break;
	case 13: {
		fichaj1 = "amarillas";
	}break;
	case 14: {
		fichaj1 = "grises";
	}break;
	}

	switch (ficha2) {
	case 1: {
		fichaj2 = "azules";
	} break;
	case 2: {
		fichaj2 = "verdes";
	}break;
	case 3: {
		fichaj2 = "aguamarinas";
	}break;
	case 4: {
		fichaj2 = "rojas";
	}break;
	case 5: {
		fichaj2 = "purpuras";
	}break;
	case 6: {
		fichaj2 = "amarillas";
	}break;
	case 7: {
		fichaj2 = "blancas";
	}break;
	case 8: {
		fichaj2 = "azules";
	}break;
	case 9: {
		fichaj2 = "verdes";
	}break;
	case 10: {
		fichaj2 = "aguamarinas";
	}break;
	case 11: {
		fichaj2 = "rojas";
	}break;
	case 12: {
		fichaj2 = "purpuras";
	}break;
	case 13: {
		fichaj2 = "amarillas";
	}break;
	case 14: {
		fichaj2 = "grises";
	}break;
	}

	cout << "\n\n                    --||   JUEGO DE DAMAS  ||--     \n\n\n";
	LogoTablero();
	cout << "\n                         TAMANOS DISPONIBLES        \n";
	cout << "\n                  [1] Tablero 8x8    [2] Tablero 10x10       \n";
	do {
		cout << "\n               " << jugador1 << " y " << jugador2 << ", elijan tamano de tablero: "; cin >> tamtablero;

		if (tamtablero != 1 && tamtablero != 2) {
			cout << "               Opcion invalida, intente otra vez\n";
		}
	} while (tamtablero != 1 && tamtablero != 2);
	system("cls");

	while (true) {
		VerificarReina(tamtablero);
		MovimientosPartida(tamtablero, fichaj1, jugador1, fichaj2, jugador2, ficha1, ficha2);
	}

	system("cls");

}

void Menu() { 

	int opcion;
	cout << "\n\n                    --||   JUEGO DE DAMAS  ||--     \n\n\n";
	LogoTablero();
	cout << "\n                         Menu de opciones: \n";
	cout << "\n                     [1] Iniciar una partida ";
	cout << "\n\n                     [2] Reglas del juego ";
	cout << "\n\n                     [3] Salir \n";

	do {
		cout << "\n\n                        Ingrese su opcion: "; cin >> opcion;
		if (opcion != 1 && opcion != 2 && opcion != 3) { cout << "               Opcion invalida, vuelva a intentarlo"; }
	} while (opcion != 1 && opcion != 2 && opcion != 3);
	system("cls");

	switch (opcion) {

	case 1: {
		InfoPartida();
	} break;

	case 2: {
		char guion = 175;
		cout << "\n\n                    --||   REGLAS DEL JUEGO  ||--     \n\n\n";
		LogoTablero();
		cout << "\n\t  " << "Movimientos:";
		cout << "\n\t  " << guion << " Normales: avanzan una casilla en diagonal\n";
		cout << "\t  " << guion << " Reina: diagonal hacia atras o adelante\n\n";
		cout << "\n\t  " << "Comer una ficha:";
		cout << "\n\t  " << guion << " Se realiza de manera diagonal\n";
		cout << "\t  " << guion << " La ficha tiene un enemigo al lado diagonal\n";
		cout << "\t  " << guion << " Se salta por encima del enemigo\n";
		cout << "\t  " << guion << " El punto de caida debe ser una casilla libre\n";
		cout << "\t  " << guion << " La reina puede comer fichas en toda distancia\n\n";
		cout << "\n\t  " << "Fin del juego:";
		cout << "\n\t  " << guion << " Cuando un jugador se queda sin fichas \n";
		cout << "\n\t  " << guion << " Jugador no puede mover ninguna ficha\n";
		cout << "\t  " << guion << " Empate si ambos no pueden moverse\n\n";
		cout << "\n\t  " << "Primordial:";
		cout << "\n\t  " << guion << " Para deseleccionar una pieza, repite su coordenada de ingreso\n";
		cout << "\n\t  " << guion << " Una ficha se convierte en 'reina' si llega \n\t  al extremo enemigo del tablero\n\n";
		cout << "\n\n         ... Presione una tecla para volver al Menu ..."; system("pause>nul"); system("cls"); return Menu();
	} break;

	case 3: {
		int opcion;
		cout << "\n\n                    --||   JUEGO DE DAMAS  ||--     \n\n\n";
		LogoTablero();
		do {
			cout << "\n\n              Seguro que desea salir? SI [1] NO [2] ";
			cout << "\n\n                         Ingrese opcion: "; cin >> opcion;
			if (opcion != 1 && opcion != 2) cout << "                 ERROR en opcion, intente otra vez" << endl;
		} while (opcion != 1 && opcion != 2);

		if (opcion == 1) {
			system("cls");
			cout << "\n\n                    --||   JUEGO DE DAMAS  ||--     \n\n\n";
			LogoTablero();
			cout << "\n\n                 Salida exitosa del Juego de Damas \n\n";
			cout << "\                       * Hasta la proxima *\n\n\n\n\n";
		}
		else {
			system("cls"); return Menu();
		}
	} break;
	}
}

void main() {
	system("color F0"); 
	cout << "\n\n                    --||   JUEGO DE DAMAS  ||--     \n\n\n";
	LogoTablero();
	cout << "\n                             Creadores: \n";
	cout << "\n                  Nirvana Gabriela Garcia Vasquez ";
	cout << "\n                   Michelle Francesca Moreno Best  ";
	cout << "\n                    Sebastian Pacheco Astiguetta \n";
	cout << "\n               Profesor: Juan Orlando Salazar Campos     ";
	cout << "\n                       Curso: Programacion I     \n\n\n";
	cout << "\n            . . . "; system("pause"); system("cls");

	Menu();
}

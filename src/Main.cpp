/*
 * Main.cpp
 *
 *  Created on: 13/1/2017
 *      Author: JoseR
 */

#include <iostream>
using namespace std;

int main()
{
	char *buffer;
	buffer = new char['A'];

	cout<<"--- Alfabeto con Punteros ---"<<endl;
	for(*buffer = 'A'; *buffer <= 'Z'; (*buffer)++){
		cout<<"Alfabeto: "<<(*buffer)<<endl;
		cout<<"Direccion: "<<buffer<<endl;
		cout<<endl;
	}

	return 	0;
}




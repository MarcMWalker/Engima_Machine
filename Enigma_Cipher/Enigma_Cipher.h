#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Enigma_Cipher {
private:

	//string *a_message;
public:

	
	//void set_message(string mess) { *a_message = mess; }
	//string get_message() { return *a_message; }

	const string original_rotor_1;
	const string original_rotor_2;
	const string original_rotor_3;
	string rotor_1;
	string rotor_2;
	string rotor_3;
	string the_message;
	size_t rotor_pos_1;
	size_t rotor_pos_2;
	size_t rotor_pos_3;
	char letter{};
	bool quit;

	Enigma_Cipher(); 

	//Enigma_Cipher(string mess);
	//Enigma_Cipher(const Enigma_Cipher &source); //Copy constructor
	//Enigma_Cipher(Enigma_Cipher &&source);
	//~Enigma_Cipher();

	char letter_to_uppercase();
	bool quit_program(bool &quit);
	void main_menu(string &the_message, size_t &rotor_pos_1, size_t &rotor_pos_2, size_t &rotor_pos_3, char letter);
	void delete_message(string &the_message);
	string create_message(string &the_message);
	string change_rotors(size_t &rotor_pos_1, size_t &rotor_pos_2, size_t &rotor_pos_3, string &rotor_1, string &rotor_2, string &rotor_3, const string &original_rotor_1, const string &original_rotor_2, const string &original_rotor_3);
	string encrypt_message(string &the_message, string &rotor_1, string &rotor_2, string &rotor_3, size_t &rotor_pos_1, size_t &rotor_pos_2, size_t &rotor_pos_3, const string original_rotor_1, const string original_rotor_2, const string original_rotor_3);
	string decrypt_message(string &the_message, string &rotor_1, string &rotor_2, string &rotor_3, size_t &rotor_pos_1, size_t &rotor_pos_2, size_t &rotor_pos_3, const string original_rotor_1, const string original_rotor_2, const string original_rotor_3);
};

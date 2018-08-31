#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;


void delete_message(string &the_message);
string change_rotors(int &rotor_pos_1, int &rotor_pos_2, int &rotor_pos_3, string &rotor_1, string &rotor_2, string &rotor_3, const string &original_rotor_1, const string &original_rotor_2, const string &original_rotor_3);
bool quit_program(bool &quit);
void main_menu(string &the_message, int &rotor_pos_1, int &rotor_pos_2, int &rotor_pos_3, char letter);
char letter_to_uppercase();
string create_message(string &the_message);
string encrypt_message(string &the_message, string &rotor_1, string &rotor_2, string &rotor_3, int &rotor_pos_1, int &rotor_pos_2, int &rotor_pos_3, const string original_rotor_1, const string original_rotor_2, const string original_rotor_3);
string decrypt_message(string &the_message, string &rotor_1, string &rotor_2, string &rotor_3, int &rotor_pos_1, int &rotor_pos_2, int &rotor_pos_3, const string original_rotor_1, const string original_rotor_2, const string original_rotor_3);

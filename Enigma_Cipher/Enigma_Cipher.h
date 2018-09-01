#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;


class Enigma_Cipher {
public:
	char letter_to_uppercase();
	bool quit_program(bool &quit);
	void main_menu(string &the_message, int &rotor_pos_1, int &rotor_pos_2, int &rotor_pos_3, char letter);
	void delete_message(string &the_message);
	string create_message(string &the_message);
	string change_rotors(int &rotor_pos_1, int &rotor_pos_2, int &rotor_pos_3, string &rotor_1, string &rotor_2, string &rotor_3, const string &original_rotor_1, const string &original_rotor_2, const string &original_rotor_3);
	string encrypt_message(string &the_message, string &rotor_1, string &rotor_2, string &rotor_3, int &rotor_pos_1, int &rotor_pos_2, int &rotor_pos_3, const string original_rotor_1, const string original_rotor_2, const string original_rotor_3);
	string decrypt_message(string &the_message, string &rotor_1, string &rotor_2, string &rotor_3, int &rotor_pos_1, int &rotor_pos_2, int &rotor_pos_3, const string original_rotor_1, const string original_rotor_2, const string original_rotor_3);

	//76 characters
	const string original_rotor_1{ "CTr9Y+k!_(LlzSn6Bt3DdGf^Js=q1I o0NUj8cE7&g)HiOeRw2WAbQ$pV*h-%xyXF?Z5PMuvma4K" };
	const string original_rotor_2{ "a+?A3uNfQTKnVgD$F6P^yw1kB9Cqs)Hcl!-MRdZ%x5*t8Lp0S7vr=eIJhzjGW_X&i4m 2O(EUboY" };
	const string original_rotor_3{ "EG)sQn&IfRJ +cp%?m(iPdgb!wlqzLHSW-xAK54v3aFBrDyUet9o18kMVYj^Th$*7OXZ=26_0NCu" };
	string rotor_1{ "CTr9Y+k!_(LlzSn6Bt3DdGf^Js=q1I o0NUj8cE7&g)HiOeRw2WAbQ$pV*h-%xyXF?Z5PMuvma4K" };
	string rotor_2{ "a+?A3uNfQTKnVgD$F6P^yw1kB9Cqs)Hcl!-MRdZ%x5*t8Lp0S7vr=eIJhzjGW_X&i4m 2O(EUboY" };
	string rotor_3{ "EG)sQn&IfRJ +cp%?m(iPdgb!wlqzLHSW-xAK54v3aFBrDyUet9o18kMVYj^Th$*7OXZ=26_0NCu" };
	char letter{};
	int rotor_pos_1{ 1 };
	int rotor_pos_2{ 1 };
	int rotor_pos_3{ 1 };
	bool quit{ false };
	string the_message{ "" };


private:

};
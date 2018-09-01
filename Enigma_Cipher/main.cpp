#include "stdafx.h"
#include <iostream>
#include <string>
#include "Enigma_Cipher.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){

	Enigma_Cipher Message;

	while (Message.quit != true) {
		cout << Message.rotor_1 << endl;
		cout << Message.rotor_2 << endl;
		cout << Message.rotor_3 << endl;
		Message.main_menu(Message.the_message, Message.rotor_pos_1, Message.rotor_pos_2, Message.rotor_pos_3, Message.letter);
		Message.letter = Message.letter_to_uppercase();

		switch (Message.letter) {
		case 'C':
		{
			Message.create_message(Message.the_message);
			break;
		}
		case 'E':
		{
			Message.encrypt_message(Message.the_message, Message.rotor_1, Message.rotor_2, Message.rotor_3, Message.rotor_pos_1, Message.rotor_pos_2, Message.rotor_pos_3, Message.original_rotor_1, Message.original_rotor_2, Message.original_rotor_3);
			break;
		}
		case 'X':
		{
			Message.delete_message(Message.the_message);
			break;
		}
		case 'S':
		{
			Message.change_rotors(Message.rotor_pos_1, Message.rotor_pos_2, Message.rotor_pos_3, Message.rotor_1, Message.rotor_2, Message.rotor_3, Message.original_rotor_1, Message.original_rotor_2, Message.original_rotor_3);
			break;
		}
		case 'D':
		{
			Message.decrypt_message(Message.the_message, Message.rotor_1, Message.rotor_2, Message.rotor_3, Message.rotor_pos_1, Message.rotor_pos_2, Message.rotor_pos_3, Message.original_rotor_1, Message.original_rotor_2, Message.original_rotor_3);
			break;
		}
		case 'Q':
		{
			Message.quit_program(Message.quit);
			break;
		}
		default:
			cout << "Enter one of the valid letters please" << endl;
		}
		cout << endl;
	}
	return 0;
}
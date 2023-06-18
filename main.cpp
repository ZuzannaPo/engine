#include <iostream>
#include <list>
#include <vector>

#include "abstract_handler.h"
#include "hero.h"

using namespace std;

int main () {

	cout << "welcome to the game" << endl;

	int m = 100000;
	vector<hero> heros;
	hero h1;

	while(m != 0) {
		cout << "menu: " << endl;
		cout << "1. create hero" << endl << "2. browse heros" << endl << "0. end game" << endl;
		cin >> m;

		if(m == 1) {
			cout << "choose name: ";
			string n;
			cin >> n;
			cout << endl << "choose class: 1. worrior, 2. mag ";
			int t;
			cin >> t;
			hero h = hero(n,t);
			heros.push_back(h);
			cout << "hero successfuly created" << endl;
		}

		else if(m == 2) {
			if(heros.isEmpty()) {
				cout << "no heros created" << endl;
			}

			else {
				int i = 1;
				for(hero h: heros) {
					cout << i << ". " << h.get_name() << " hp: " << h.get_hp() << " mana: " << h.get_mana() << " exp: " << h.get_exp() << endl;
					i++;
				}

				cout << "choose to play: " << endl;
				int j;
				cin >> j;
				h1 = heros[j-1];

				cout << "starting the game" << endl;


			}

		}

	}

	cout << "see you next time!" << endl;

}
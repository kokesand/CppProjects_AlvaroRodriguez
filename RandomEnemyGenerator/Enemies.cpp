#include <iostream>
#include <string>


enum EnemyType { zombie, vampire, ghost, witch };

struct Enemy
{

	std::string name;
	enum EnemyType type;
	int health;



};

bool operator == (Enemy n1, Enemy n2) {


	bool resultado = false;

	if (n1.type == n2.type && n1.name == n2.name) {


		resultado = true;
	}



}


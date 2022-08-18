// name: Conor Cook
// ID: 270174016
// Scernario 4

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;


class Alien {

private:
	int weight;
	int height;
	int genderPoints;
	char gender;
	int prestige;

public:
	Alien(int weightInput, int heightInput, char genderInput) { // Constructor
		weight = weightInput;
		height = heightInput;
		gender = genderInput;
	}
	
	int getWeight() { // weight getter
		return weight;
	}

	void setWeight(int weightInput) { // weight setter
		weight = weightInput;
	}

	int getHeight() { // height getter
		return height;
	}

	void setHeight(int heightInput) { // height setter
		height = heightInput;
	}

	char getGender() { // gender getter
		return gender;
	}

	void setGender(int genderInput) { // gender setter
		gender = genderInput;
	}

	int getPrestige() { // prestige getter
		return prestige;
	}

	void setPrestige() { // prestige setter
		prestige = weight + height + genderPoints;
	}

	Alien operator+ (Alien breeding) { // overloading '+' operator to create new alien
		Alien newAlien;
		weight = this->weight / 2 + breeding.weight / 2;
		height = this->height / 2 + breeding.height / 2;
		int genderRand = rand() % 1;
		if (genderRand == 0) {
			gender = 'M';
			genderPoints = 2;
		}
		else {
			gender = 'F';
			genderPoints = 3;
		}
		return newAlien;
	};

	string operator== (Alien comparingAlien) {
		Alien newAlien;
		if (this->getPrestige() == comparingAlien.getPrestige()) {
			return "true";
		}
		else {
			return "false";
		};
	};

	string operator!= (Alien comparingAlien) {
		Alien newAlien;
		if (this->getPrestige() == comparingAlien.getPrestige()) {
			return "true";
		}
		else {
			return "false";
		};
	};

	string operator> (Alien comparingAlien) {
		Alien newAlien;
		if (this->getPrestige() == comparingAlien.getPrestige()) {
			return "true";
		}
		else {
			return "false";
		};
	};

	string operator< (Alien comparingAlien) {
		Alien newAlien;
		if (this->getPrestige() == comparingAlien.getPrestige()) {
			return "true";
		}
		else {
			return "false";
		};
	};

	string operator>= (Alien comparingAlien) {
		Alien newAlien;
		if (this->getPrestige() == comparingAlien.getPrestige()) {
			return "true";
		}
		else {
			return "false";
		};
	};

	string operator<= (Alien comparingAlien) {
		Alien newAlien;
		if (this->getPrestige() == comparingAlien.getPrestige()) {
			return "true";
		}
		else {
			return "false";
		};
	};




	Alien() { }
};

int main() {
	// Class
	Alien alienClass;
	Alien Alien1, Alien2, Alien3, Alien4, Alien5, Alien6;
	// Vector
	vector<Alien> AlienVector;
	AlienVector.push_back(Alien1);
	AlienVector.push_back(Alien2);
	AlienVector.push_back(Alien3);
	AlienVector.push_back(Alien4);
	AlienVector.push_back(Alien5);
	AlienVector.push_back(Alien6);


	// Variables
	bool looping = true;
	int input;
	int randWeight;
	int randHeight;
	string outputBool;


	cout << "\nMain Menu:";
	cout << "\n1. Created Alien Pairs";
	cout << "\n2. Create offspring";
	cout << "\n3. Compare Offspring Prestige";
	cout << "\n4. Exit";
	while (looping == true) {
		cout << "\nPlease enter your option: ";
		cin >> input;
		switch (input) {
		case 1:
			alienClass.setWeight(rand() % 15 + 48);
			alienClass.setHeight(rand() % 20 + 180);
			alienClass.setGender('M');
			AlienVector.push_back(Alien1);

			alienClass.setWeight(rand() % 15 + 48);
			alienClass.setHeight(rand() % 20 + 180);
			alienClass.setGender('F');
			AlienVector.push_back(Alien2);

			alienClass.setWeight(rand() % 15 + 48);
			alienClass.setHeight(rand() % 20 + 180);
			alienClass.setGender('M');
			AlienVector.push_back(Alien3);

			alienClass.setWeight(rand() % 15 + 48);
			alienClass.setHeight(rand() % 20 + 180);
			alienClass.setGender('F');
			AlienVector.push_back(Alien4);

			cout << "\nNew Alien pairs have been created.";
			break;
		case 2:
			Alien5 = Alien1 + Alien2;
			Alien6 = Alien3 + Alien4;

			cout << "\nOffspring Alien 5 & Alien 6 created.";

			break;
		case 3:

			// Print Prestige
			cout << "\nOffspring prestige comparison";
			Alien5.setPrestige();
			cout << "\nAlien 5 Prestige: " << Alien5.getPrestige();
			Alien6.setPrestige();
			cout << "\nAlien 6 Prestige: " << Alien6.getPrestige();


			cout << "\n\nAlien 5 == Alien 6? ";
			outputBool = Alien5 == Alien6;
			cout << outputBool;
			cout << "\nAlien 5 != Alien 6? ";
			outputBool = Alien5 != Alien6;
			cout << outputBool;
			cout << "\nAlien 5 >  Alien 6? ";
			outputBool = Alien5 > Alien6;
			cout << outputBool;
			cout << "\nAlien 5 >= Alien 6? ";
			outputBool = Alien5 < Alien6;
			cout << outputBool;
			cout << "\nAlien 5 <  Alien 6? ";
			outputBool = Alien5 >= Alien6;
			cout << outputBool;
			cout << "\nAlien 5 <= Alien 6? ";
			outputBool = Alien5 <= Alien6;
			cout << outputBool;
			break;
		case 4:
			looping = false;
			break;
		default:
			cout << "\n\nNot a valid option";
			break;
		}
	}
}
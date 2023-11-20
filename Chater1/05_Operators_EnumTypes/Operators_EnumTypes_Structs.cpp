#include <iostream>;
#include <format>;
#include "employee.h";

using namespace std;

int main()
{
	cout << "-------------- Operators ------------ " << endl;

	int someInt { 256 };
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInt++;
	someInt *= 2;
	someShort = static_cast<short>(someInt);
	someLong = someShort * 10000;
	someFloat = someLong + 0.785f;
	someDouble = static_cast<double>(someFloat) / 100000;

	cout << someDouble << endl;

	int i1 { 34 + 8*2 + 21 / 7 % 2};
	int i2 { 34 + (8 * 2) + ((21 / 7) % 2) };

	cout << i1 << ":" << i2 << endl;


	cout << "------------------ Enumerated Types ----------------- " << endl;

	enum class PieceType_1 { King, Queen, Rook, Pawn };

	PieceType_1 piece_1 { PieceType_1::King };

	cout << static_cast<int>(piece_1) << endl;

	enum class PieceType_2 { King = 1, Queen, Rook = 20, Pawn };

	PieceType_2 piece_2{ PieceType_2::King };

	cout << static_cast<int>(piece_2) << endl;
	cout << static_cast<int>(PieceType_2::Queen) << endl;
	cout << static_cast<int>(PieceType_2::Rook) << endl;
	cout << static_cast<int>(PieceType_2::Pawn) << endl;

	enum class PieceType_3 : unsigned long { King = 1, Queen, Rook = 20, Pawn };

	PieceType_3 piece_3{ PieceType_3::King };

	cout << static_cast<unsigned long>(piece_3) << endl;
	cout << static_cast<unsigned long>(PieceType_3::Queen) << endl;
	cout << static_cast<unsigned long>(PieceType_3::Rook) << endl;
	cout << static_cast<unsigned long>(PieceType_3::Pawn) << endl;

	cout << "------------------ Structs ----------------- " << endl;

	Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	// Output the values of an employee.
	cout << "Employee: " << anEmployee.firstInitial << ":"<< anEmployee.lastInitial << endl;
	cout << "Number: "<< anEmployee.employeeNumber << endl;
	cout << "Salary: " << anEmployee.salary << endl;

}


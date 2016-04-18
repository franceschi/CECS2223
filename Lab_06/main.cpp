#include "Monomio.h"


int main() {

	//Declare objects
	class Monomio m_01, m_02, m_03;

	cout << "Welcome to the monomial C++ Program! \n";
	cout << "I will sum two monomials in the following format [ax^(n)] \n";
	cout << "\nEnter the first monomial: \n";
	cin >> m_01;

	cout << "\nEnter the second monomial: \n";
	cin >> m_02;
	
	cout << "\nMonomial #01 entered: " << m_01 << endl;
	cout << "Monomial #02 entered: " << m_02 << endl;

	//Sum of monomials
	m_03 = m_01 + m_02;
	cout << "\nThe sum of: " << m_01 << " + " << m_02 << " = " << m_03 << endl;

	return 0;
}
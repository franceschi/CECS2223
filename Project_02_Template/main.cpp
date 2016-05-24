#include <iostream>
#include"Data.h"
#include"Person.h"
#include <stdlib.h>
#include <fstream>
#include "menu.h"

using namespace std;

/*
Programmers: Javier A. Molina, Eduardo Bonnet
Students #:79249

*/
int main()
{
	int cnt;
	int idx;
	string fileName;
	Report * telefonia;
	Menu menu("Reports");

	bool fileNameExists(string fileName);
	Report * addReport(Report * reports, int & totalReports);
	Report * delReport(Report * reports, int & totalReports, int idx);
	int displayReports(Report * reports, int totalReports);

	menu.addItem("New report");
	menu.addItem("Delete a report");
	menu.addItem("Display a report");

	cnt = 0;
	telefonia = NULL;

	do {
		cout << menu;
		cin >> menu;
		cls();

		switch (menu.getOption()) {
		case 1:
			cout << "Enter report name (TE?????): ";
			cin >> fileName;

			if (fileNameExists(fileName + ".tel")) {
				telefonia = addReport(telefonia, cnt);
				idx = cnt - 1;

				telefonia[idx].setFileName(fileName);
				telefonia[idx].loadReport();
			}
			else {
				cls();
				cerr << "Error: Report name '" << fileName << "' does not exists!\n\n\n";
				pause();
			}
			break;
		case 2:
			if (telefonia != NULL) {
				do {
					cls();
					cout << "Delete a Report:\n\n";

					idx = displayReports(telefonia, cnt);

					if (between(idx, 0, cnt - 1)) {
						cls();
						telefonia = delReport(telefonia, cnt, idx);
						idx = 0;
						pause();
					}
				} while (idx != cnt);
			}
			else {
				cerr << "No reports available for deleting!\n\n\n";
				pause();
			}
			break;
		case 3:
			char ans;

			if (telefonia != NULL) {
				do {
					cls();
					cout << "Display/Filed a Report:\n\n";

					idx = displayReports(telefonia, cnt);

					if (between(idx, 0, cnt - 1)) {
						cls();
						cout << "Would you like the report to be display otherwise save into a file? ";
						cin >> ans;

						cls();
						cin.ignore();

						if (upper(ans) == 'Y') {
							cout << telefonia[idx] << endl;
						}
						else {
							telefonia[idx].saveReport();
							cout << "Report '" << telefonia[idx].getFileName() << "' saved as '" << telefonia[idx].getFileName() << ".rep'.\n\n";
						}

						pause();
					}
				} while (idx != cnt);
			}
			else {
				cerr << "No reports available for displaying!\n\n\n";
				pause();
			}

			break;
		case 4:
			cout << "Thanks for using Telefonia Reports System!!!\n\n\n";
			break;
		}
	} while (menu.getLast() != menu.getOption());

	delete[] telefonia;

	return 0;
}

//Funcion que verifica si existe un archivo en disco
bool fileNameExists(string fileName) {
	ifstream fin(fileName.c_str());
	bool exists = !(fin.fail());

	if (exists) fin.close();

	return(exists);
}

//Anade dinamicamente objetos tipo Report al arreglo reports
Report * addReport(Report * reports, int & totalReports) {
	if (totalReports == 0) {
		reports = new Report[1];
	}
	else {
		Report * tmp = new Report[totalReports];

		for (int i = 0; i < totalReports; ++i) {
			tmp[i] = reports[i];
		}

		delete[] reports;

		reports = new Report[totalReports + 1];

		for (int i = 0; i < totalReports; ++i) {
			reports[i] = tmp[i];
		}

		delete[] tmp;
	}

	totalReports++;

	return(reports);
}

//Borra objetos del arreglo reports segun el idx enviado
Report * delReport(Report * reports, int & totalReports, int idx) {
	Report * tmp = new Report[totalReports - 1];
	string fileName = reports[idx].getFileName();

	for (int i = 0, j = 0; i < totalReports; ++i) {
		if (i == idx) continue;
		tmp[j] = reports[i];
		j++;
	}

	delete[] reports;

	totalReports--;

	reports = new Report[totalReports];

	for (int i = 0; i < totalReports; ++i) {
		reports[i] = tmp[i];
	}

	delete[] tmp;

	cout << "Report '" << fileName << "' has been deleted!\n" << endl;

	if (totalReports == 0) reports = NULL;

	return(reports);
}

//Muestra en pantalla la lista de informes que se encuantran en memoria
int displayReports(Report * reports, int totalReports) {
	int choice;
	int i;

	for (i = 0; i < totalReports; ++i) {
		cout << "\t" << (i + 1) << ".) " << reports[i].getFileName() << endl;
	}

	cout << "\t" << (i + 1) << ".) Return\n";

	cout << "\n\tChoice: ";
	cin >> choice;

	return (choice - 1);
}
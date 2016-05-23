//
//  main.cpp
//  Project_02
//
//  Created by Miguel Franceschi on 5/22/16.
//  Copyright (c) 2016 Franceschi Software Development. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Person.h"

using namespace std;



int main () {
    string line;
    ifstream myfile ("TEL.tel");
    if (myfile.is_open())
    {
        while ( myfile.good() )
        {
            getline (myfile,line);
            cout << line << endl;
        }
        myfile.close();
    }
    
    else cout << "Unable to open file";
    
    return 0;
}

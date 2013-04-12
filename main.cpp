/* 
 * File:   main.cpp
 * Author: qianden
 *
 * Created on April 11, 2013, 4:30 PM
 */

#include <cstdlib>
#include <iostream>
#include "Helloer.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Helloer helloer("World!");
    cout << helloer.message() << endl;
    return 0;
}


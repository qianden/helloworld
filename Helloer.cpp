/* 
 * File:   Helloer.cpp
 * Author: qianden
 * 
 * Created on April 11, 2013, 4:57 PM
 */

#include "Helloer.h"

Helloer::Helloer() {
}

Helloer::Helloer(const Helloer& orig) {
}

Helloer::Helloer(const string& who){
    this->who = who;
}
Helloer::~Helloer() {
}

string Helloer::message() const{
    return "Hello " + who;
}


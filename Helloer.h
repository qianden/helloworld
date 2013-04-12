/* 
 * File:   Helloer.h
 * Author: qianden
 *
 * Created on April 11, 2013, 4:57 PM
 */

#ifndef HELLOER_H
#define	HELLOER_H

#include<iostream>

using namespace std;


class Helloer {
public:
    Helloer();
    Helloer(const Helloer& orig);
    Helloer(const string& who);
    virtual ~Helloer();
    string message() const;
private:
    string who;

};

#endif	/* HELLOER_H */


/*
 * File:   HelloWorldCppUnitTest.cpp
 * Author: qianden
 *
 * Created on Apr 11, 2013, 5:13:49 PM
 */

#include "HelloWorldCppUnitTest.h"
#include "Helloer.h"


CPPUNIT_TEST_SUITE_REGISTRATION(HelloWorldCppUnitTest);

HelloWorldCppUnitTest::HelloWorldCppUnitTest() {
}

HelloWorldCppUnitTest::~HelloWorldCppUnitTest() {
}

void HelloWorldCppUnitTest::setUp() {
}

void HelloWorldCppUnitTest::tearDown() {
}

void HelloWorldCppUnitTest::testMessage() {
    Helloer helloer("World!");
    string result = helloer.message();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result == "Hello World!");
    }
}


/*
 * File:   HelloWorldCppUnitTest.h
 * Author: qianden
 *
 * Created on Apr 11, 2013, 5:13:48 PM
 */

#ifndef HELLOWORLDCPPUNITTEST_H
#define	HELLOWORLDCPPUNITTEST_H

#include <cppunit/extensions/HelperMacros.h>

class HelloWorldCppUnitTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(HelloWorldCppUnitTest);

    CPPUNIT_TEST(testMessage);

    CPPUNIT_TEST_SUITE_END();

public:
    HelloWorldCppUnitTest();
    virtual ~HelloWorldCppUnitTest();
    void setUp();
    void tearDown();

private:
    void testMessage();

};

#endif	/* HELLOWORLDCPPUNITTEST_H */


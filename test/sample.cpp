/*
 *  Copyright Hedayat Vatankhah 2017.
 *
 *  Distributed under the Boost Software License, Version 1.0.
 *     (See accompanying file LICENSE_1_0.txt or copy at
 *           http://www.boost.org/LICENSE_1_0.txt)
 */

extern "C" int test_function()
{
}

int test_function2()
{
}

class A {
	void folani(int a);
};

void A::folani(int a)
{
}

template<typename T>
T folan(int b)
{}

template char folan<char>(int b);

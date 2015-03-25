////////////////////////////////////////////////////////////////////////////////
//  Copyright (c) 2007 Douglas Gregor
//  Copyright (c) 2011 Bryce Lelbach
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
////////////////////////////////////////////////////////////////////////////////

void g(int&) {}

template<typename F, typename T>
void forward(F f, T&& t){ f(static_cast<T&&>(t)); }

int main()
{
   int x;
   forward(g, x);
}

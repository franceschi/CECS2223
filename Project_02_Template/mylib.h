#pragma once
#include <iostream>
#include <stdlib.h>

using namespace::std;

#ifndef MYLIB_H
#define MYLIB_H

typedef bool flag;

#ifdef WINDOWS
#define cls()   system("cls")
#define pause() system("pause")
#elif windows
#define cls()   system("cls")
#define pause() system("pause")
#elif LINUX
#define cls()   system("clear")
#define pause() system("sleep 3")
#elif linux
#define cls()   system("clear")
#define pause() system("sleep 3")
#else
#define cls()   { cerr << "CLS: Unknown OS!!!\n"; }
#define pause()   { cerr << "PAUSE: Unknown OS!!!\n"; }
#endif

#define between(x, y, z) ((x >= y && x <= z)? true : false)
#define upper(x)         (between(x, 'A', 'Z')? x : (between(x, 'a', 'z')? x - 'a' + 'A' : x))
#define lower(x)         (between(x, 'a', 'z')? x : x - 'A' + 'a')

#endif // MYLIB_H
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Equal_at_last_one.cc
  * @author Yadai David García Dorta alu0101464145@ull.edu.es
  * @date Dec 6 2021
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  *        the integer division d and the remainder r of a divided by b.
  *        By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
#include <vector>
#include <cstdlib>

#include <Equal_at_last_one_programa.h>
#include <Usage.h>

int main () {

  Usage(argc, argv);
  RepiteUltimoDigito(usuario);
  return 0;

}
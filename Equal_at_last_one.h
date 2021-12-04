/** Este encabezado está compuesto por una función void cuya función es la de mostrar el modo de uso correcto del programa.
 *  En caso de que el uso no sea el correcto, imprime por pantalla un texto y termina su ejecución.
 *  El programa precisa uno único número natural para su ejecución.
 *
 *  @param[in] argc Número de parámetros de la línea de comandos
 *  @param[in] argv Número a estudiar.
 */

#include <iostream>
#include <cstdlib>

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << "Este es un programa que escribe y lee una secuencia \
                no vacía de números enteros y dice cuántos  \
                de ellos son iguales al último. Introduzca una secuencia numérica cualquiera." << std::endl;
    exit(EXIT_SUCCESS);
  }
}
#include <iostream>
using namespace std;
int main() {
  int x, y, z;
  int lado1, lado2, lado3;
  cout << "Insira três valores para o triângulo" << endl;
  cin >> x >> y >> z;
  lado1 = x + y;
  lado2 = x + z;
  lado3 = y + z;
  if (x > lado3) { 
    cout << "Não é um triângulo" << endl;
    return main();
  }
  else if (y > lado2) { 
    cout << "Não é um triângulo" << endl;
    return main();
  }
  else if (z > lado1) { 
    cout << "Não é um triângulo" << endl;
    return main();
  }
  else { 
    cout << "Seu triângulo está sendo analisado ..." << endl;
  }
  if (x == y && x == z) { 
    cout << "O triângulo é equilátero" << endl;
  }
  else if (x == y || x == z || y == z) { 
    cout << "O triângulo é isósceles" << endl;
  }
  else if ((x != y && x != z) || (y != z && y != x)) { 
    cout << "O triângulo é escaleno" << endl;
  }
}

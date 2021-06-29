#include <iostream>
using namespace std;
int main() {
  int dia, mes;
  cout << "Informe a data de seu aniversário, com dia e mês respectivamente" << endl;
  cin >> dia >> mes;
  if ((dia >= 21 && mes == 1) || (dia <= 19 && mes == 2)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Aquário" << endl;
  }
  else if ((dia >= 20 && mes == 2) || (dia <= 20 && mes == 3)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Peixes" << endl;
  }
  else if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Áries" << endl;
  }
  else if ((dia >= 21 && mes == 4) || (dia <= 20 && mes == 5)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Touro" << endl;
  }
  else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Gêmeos" << endl;
  }
  else if ((dia >= 21 && mes == 6) || (dia <= 21 && mes == 7)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Câncer" << endl; 
  }
  else if ((dia >= 22 && mes == 7) || (dia <= 22 && mes == 8)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Leão" << endl;
  }
  else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Virgem" << endl;
  }
  else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Libra" << endl;
  }
  else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Escorpião" << endl;
  }
  else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Sagitário" << endl;
  }
  else if ((dia >= 22 && mes == 12) || (dia <= 20 && mes == 1)) { 
    cout << "Já que você nasceu dia " << dia << "/" << mes << endl << "Você é do seguinte signo do zodíaco : Capricórnio" << endl; 
  }
}

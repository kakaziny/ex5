//ex1

#include <iostream>

int main() {
   
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << std::endl; 
    }

    return 0;
}

//ex2

#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um numero: ";
   
    std::cin >> numero;

    
    std::cout << "Tabuada do " << numero << ":" << std::endl;
   for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << (numero * i) << std::endl;
    }

   return 0;
}

//ex3

#include <iostream>

int main() {
   
   for (int i = 0; i <= 50; i += 5) {
       std::cout << i;
       
      if (i != 50) {
            std::cout << ", ";
        }
    }
   std::cout << std::endl;

   return 0;
}
//ex4

#include <iostream>

int main() {
    int numero;

    
    for (int i = 0; i < 5; ++i) {
        std::cout << "Digite um numero: ";
       std::cin >> numero;

        
       if (numero > 100) {
            std::cout << "Número Especial" << std::endl;
        }
       else {
           std::cout << "Número Comum" << std::endl;
        }
    }

    return 0;
}

//ex5
#include <iostream>

int main() {
   
    for (int i = 1; i <= 31; i += 2) {
       std::cout << i;
      
       if (i != 31) {
            std::cout << ", ";
       }
    }
    std::cout << std::endl;

    return 0;
}

//ex6
#include <iostream>

int main() {
    int numero;

    
    for (int i = 0; i < 5; ++i) {
       std::cout << "Digite um numero: ";
       std::cin >> numero;

       
       if (numero > 0) {
            std::cout << "Número Positivo" << std::endl;
        }
        
       else if (numero < 0) {
            std::cout << "Número Negativo" << std::endl;
        }
      
        else {
            std::cout << "O Número é zero" << std::endl;
       }
    }

    return 0;
}




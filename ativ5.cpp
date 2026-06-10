#include <iostream>

int main(){
	int nota;
	std::cout << "Digite uma nota de 0 a 100: " << std::endl;
	std::cin >> nota;
	
	if(nota <70){
		std::cout << "Precisa melhorar" << std::endl;
	}else if (nota >=70 && nota <= 89 ) {
		std::cout << "Bom" << std::endl;
	}if(nota >=90 ){
		std::cout << "Excelente" << std::endl;
	}
}
#include <iostream>

int main(){
char opcao;

std::cout << "Digite uma opcao (A, B ou C): " << std::endl;
std::cin >> opcao;

switch(opcao) {
	case 'A':
	case 'a':
		std::cout << "Opcao A selecionada" << std::endl;
		break;
		
		case 'B':
			case 'b':
				std::cout << "Opcao B selecionada" << std::endl;
				
				case 'C':
					case 'c':
					std::cout << "Opcao C selecionada" << std::endl;
					break;
					
					default:
						std::cout << "Opcao invalida" << std::endl;
						
}
return 0;
}
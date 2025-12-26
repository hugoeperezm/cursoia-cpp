#include <iostream>

float sumar(int a, int b){
    return a + b;
}

int main(){
    int x = 5, y = 7;
    std::cout << "La suma es: " << sumar(x,y) << std::endl;
    return 0;
}
#include <iostream>

double height_m;
double weight_kg;
double h_sqrd;
double result;

void askForHeight() {
    std::cout << "Height In M: ";
    std::cin >> height_m;
}

void askForWeight() {
    std::cout << "Weight In KG: ";
    std::cin >> weight_kg;
}

void formula(double h, double w) {
    h_sqrd = h * h;
    result = w / h_sqrd;
}

void result_text(double r) {
    if(r < 18.5) {
        std::cout << "You're Underweight.\n";
    } else if(r > 18.5 && r < 24.9) {
        std::cout << "You're Normal\n";
    } else if(r > 25 && r < 29.9) {
        std::cout << "You're Overweight\n";
    } else if(r > 30) {
        std::cout << "You're Obese\n";
    }
}

int main() {
    askForHeight();
    askForWeight();
    formula(height_m, weight_kg);
    std::cout << result << "\n";
    result_text(result);
}
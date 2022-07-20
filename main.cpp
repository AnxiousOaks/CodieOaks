//
//  main.cpp
//  Money Convertor
//
//  Created by Kyle Gibson on 7/19/22.
//

#include <iostream>

using namespace std;


int main() {
    
    cout << "Welcome to the money converter!" << endl;
    cout << "\nData sourced on July 19 2022" << endl;
    cout << "\nWhich currancy are you converting to USD?" << endl;
    cout << "Yen [1]" << endl;
    cout << "Euro [2]" << endl;
    cout << "Peso [3]" << endl;
    
    int option {0};

    cout << "Choose by number: ";
    cin >> option;
    
    //Displaying Choice
    if (option == 1) {
        cout << "\nYou Choose Yen" << endl;
    }
    else if (option == 2) {
        cout << "\nYou Choose Euros" << endl;
    }
    else {
        cout << "\nYou Choose Pesoes" << endl;
    }
    
    //how much of current currency
    double convert_amount{0};
    cout << "\nHow much do you have to convert to USD? ";
    cin >> convert_amount;
    
    
    //Convert
    const double long yen{0.0072};
    const double euro{1.02};
    const double peso{0.049};
    
    double result{0};
    
    
    if (option == 1) {
        result = convert_amount * yen;
        cout << "$" << result << endl;
    }
            
    else if (option == 2) {
            result = convert_amount * euro;
        cout << "$" << result << endl;
    }
    else {
            result = convert_amount * peso;
            cout << "$" << result << endl;
    }
    return 0;
}

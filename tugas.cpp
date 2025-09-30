#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "=====================================\n";
    cout << setw(5) << left << "No" 
         << setw(20) << left << "Nama Band" 
         << setw(15) << left << "Genre" << endl;
    cout << "=====================================\n";

    cout << setw(5) << left << "1" 
         << setw(20) << left << "Muse" 
         << setw(15) << left << "Rock" << endl;

    cout << setw(5) << left << "2" 
         << setw(20) << left << "Black Pink" 
         << setw(15) << left << "K-Pop" << endl;

    cout << setw(5) << left << "3" 
         << setw(20) << left << "Reality Club" 
         << setw(15) << left << "Pop" << endl;

    cout << "=====================================\n";

    return 0;
}

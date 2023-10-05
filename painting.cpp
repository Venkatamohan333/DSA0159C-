#include<iostream>
using namespace std;

int main() {
    int oldest_age = 42000;
    int ages[] = {8500, 1000, 1300};
    int oldest_painting = ages[0]; 

    if (ages[1] > oldest_age) {
        oldest_painting = ages[1];
    } else if (ages[2] > oldest_age) {
        oldest_painting = ages[2];
    }

    cout << "The oldest painting is " << oldest_painting << " years old." << endl;

    return 0;
}

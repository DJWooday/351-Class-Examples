#include <iostream>
using namespace std;


int main() {
    int jason = 32;
    int *jack = &jason;
    cout << *jack << endl;

    int matthew = 42;
    int *cole = &matthew;

    cout << *cole << endl;

    char brogan = 'H';
    char *nicholas = &brogan;

    float kristopher = 3.14;
    float *isabella = &kristopher;

    int **martin = &cole;

    int luke = 100;
    int gavyn = 10;
    int arr[] = {gavyn, luke};
    int *jaden = arr;

    cout << *jaden+1 << endl;
    cout << *(jaden+1) << endl;

    int dalton = 35;
    int vince = 15;
    int arr2[] = {vince, dalton};

    int *jayden = arr2;
    cout << *jayden << endl;

    int ** skylar = &jaden;
    cout << *(*skylar+1) << endl;

    skylar = &jayden;
    cout << *(*skylar+1) << endl;
    char word[] = "fdslfds";
    char *wrd = word;
}
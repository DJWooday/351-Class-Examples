#include <iostream>
using namespace std;

int main() {
    int jason = 32;
    int *hunter = &jason;

    cout << hunter << endl;

    int jacob = 42;
    int *brenden = &jacob;

    char kaitlyn = 'h';
    char *cole = &kaitlyn;
    cout << cole << endl;

    float sue = 3.14;
    float *ian = &sue;
    cout << ian << endl;

    int **james = &brenden;
    cout << **james << " " << *james << " " << brenden << endl;

    int drew = 10, jackson = 30, parker = 20, jace = 100;
    int arr[] = {drew, jackson, parker, jace};
    int *carter = arr;
    cout << *(carter+2) << endl;
    cout << arr[2] << endl;

    int karan = 15, justin = 35, matthew = 25;
    int arr2[] = {karan, justin, matthew};
    int *lee = arr2;
    cout << *(lee + 1) << endl;


    cout << endl << endl;
    james = &lee;
    cout << *((*james) +1) << endl;

    int* michael;
}
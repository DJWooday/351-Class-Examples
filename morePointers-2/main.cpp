#include <iostream>
using namespace std;

void smoothImage(int *&image) {
    int nPixels[5];
    for (int i = 0; i < 5; i++) {
        if (i == 0) nPixels[i] = (image[0] + image[1]) / 2;
        else if (i == 4) nPixels[i] = (image[4] + image[3]) / 2;
        else nPixels[i] = (image[i] + image[i+1] +image[i-1]) / 3;
    }
    image = nPixels;
}

int main() {
    int num = 5;
    int *p = &num;
    cout << p[1] << endl;
    cout << num << endl;

    int testScores [5] = { 42, 87, 99, 78, 66 };
    int *ptr = testScores;
    cout << *(ptr+1) << endl;

    cout << sizeof(testScores) / sizeof(int) << endl;
    cout << sizeof(ptr) / sizeof(int) << endl;

    //float oPixels[] = {200, 255, 136, 245, 213};
    /*
    float nPixels[5];
    float *image = oPixels;
    cout << image[0] << endl;
    for (int i = 0; i < 5; i++) {
        if (i == 0) nPixels[i] = (image[0] + image[1]) / 2;
        else if (i == 4) nPixels[i] = (image[4] + image[3]) / 2;
        else nPixels[i] = (image[i] + image[i+1] +image[i-1]) / 3;
    }
    image = nPixels;
    cout << image[0] << endl;
    */
    int oPixels[] = {200, 255, 136, 245, 213};
    int *image = oPixels;
    cout << image[0] << endl;
    smoothImage(image);
    cout << image[0] << endl;
}
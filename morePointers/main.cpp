#include <iostream>
using namespace std;

void smoothImg(float *&img) {
    float newPixels[5];

    for (int i = 0; i < 5; i++) {
        if (i == 0) newPixels[0] = (img[0] + img[1]) / 2;
        if (i == 4) newPixels[4] = (img[4] + img[3]) / 2;
        else newPixels[i] = (img[i] + img[i-1] + img[i+1]) / 3;
    }
    img = newPixels;
}

int main() {
    int myNum = 5;
    int *pNum = &myNum;

    int testScores [5] = { 42, 87, 99, 78, 66 };
    int *ptr = testScores;
    cout << *ptr+1 << endl;

    /*
    float oPixels[] = {200, 255, 136, 245, 213};
    float* image = oPixels;
    float newPixels[5];
    cout << image[0] << endl;

    for (int i = 0; i < 5; i++) {
        if (i == 0) newPixels[0] = (oPixels[0] + oPixels[1]) / 2;
        if (i == 4) newPixels[4] = (oPixels[4] + oPixels[3]) / 2;
        else newPixels[i] = (oPixels[i] + oPixels[i-1] + oPixels[i+1]) / 3;
    }
    image = newPixels;
    cout << image[0] << endl;
    */

    float oPixels[] = {200, 255, 136, 245, 213};
    float *image = oPixels;
    cout << image << endl;
    smoothImg(image);
    cout << image << endl;
}
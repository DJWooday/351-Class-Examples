/* C++ Challenges, Part 1
 * data types thru control structures
 * These challenges are optional and only meant to strengthen
 *  your confidence with the c++ langauge. They cannot be turned
 *  in for points, bonus or otherwise.
 * Every question is surrounded by a "region." Expand/contract
 *  that region, read the question, then attempt. Starter code
 *  may be given below. A potential solution is commented out.
 * Try not to look at the solution first!
 */

#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    //region 1. Cafe
    /* You are creating a basic register for your new C-afe business.
     * A menu of prices is defined for you, as well as the current
     *  tax rate. Ask the user for how many of each item they want,
     *  compute their total after tax, then display an itemized
     *  receipt with nice formatting. Keep in mind to set precision
     *  to cents, not some kind of micro-cent.
     */
    const float croissantPrice = 3.45;
    const float biscuitPrice = 2.99;
    const float schmearedBagel = 5.50;
    const float taxRate = 0.045;

    /* Answer
    string temp;
    stringstream ss;
    int numCrois, numBisc, numBag;

    cout << "How many croissants?\n->";
    getline(cin, temp);
    stringstream(temp) >> numCrois;

    cout << "How many biscuits?\n->";
    getline(cin, temp);
    stringstream(temp) >> numBisc;

    cout << "How many bagels?\n->";
    getline(cin, temp);
    stringstream(temp) >> numBag;

    float finalPrice = (numCrois * croissantPrice + numBisc * biscuitPrice + numBag * schmearedBagel) * (1 + taxRate);
    cout << "Final price: " << fixed << setprecision(2) << finalPrice << endl;
    // Remember, setprecision works differently with and without the "fixed" manipulator.
    */
    //endregion
}
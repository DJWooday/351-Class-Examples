/* C++ Challenges, Part 1
 * data types thru control structures
 * These challenges are optional and only meant to strengthen
 *  your confidence with the c++ langauge. They cannot be turned
 *  in for points, bonus or otherwise.
 * Every question is surrounded by a "region." Expand/contract
 *  that region, read the question, then attempt. Starter code
 *  may be given below. A potential solution is commented out.
 * Try not to look at the solution first! Remember, the point is
 *  to try to take each question slowly, break it down into its
 *  subproblems, and solve each one at a time, checking as you go
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

    //region 2. Username Generator
    /* You are suddenly put in charge of UL's email address generation.
     * That means you need to take a person's name as input in the format <FirstName LastName>
     *  and print out an email in the format <firstname.lastname#@louisiana.edu>
     * Remember! In most cases that # will be 1, but if the name already exists in the
     *  school's "database," it must be incremented per other user with that name.
     * I've provided an array of existing names; before you create their email address,
     *  check this array to see if the given name already exists.
     * Oh yeah, then output the email address to the screen, obvs.
     * Example: Inputting "Robin Hood" should output "robin.hood1@louisiana.edu"
     *  Inputting "Julia Johnson" should output "julia.johnson3@louisiana.edu"
     */
    const string names[] = {
        "Julia Johnson", "Jason Woodworth", "Roberto Rodriguez", "Elijah Roberts",
        "Parker Chiasson", "Aren Chiasson", "Julia Johnson"
    };

    /* Answer
    string name; int num = 1;
    getline(cin, name);

    for (string n : names) {
        if (name == n) ++num;
    }

    name.replace(name.find(' '), 1, ".");
    name[0] = tolower(name[0]);
    name[name.find('.')+1] = tolower(name[name.find('.')+1]);
    name.append(to_string(num));
    name.append("@louisiana.edu");

    cout << name << endl;
    */
    //endregion

    //region 3. Score Averaging
    /* You've just given a test and you need to report the average, minimum, and maximum
     *  score to the dean. What's more, the dean says you're not allowed to use built in
     *  c++ standard library functions for this (he's a tough guy).
     * You're to ask the user for a list of grades in a single line of input, separated
     *  only by commas, e.g. "94,67,88,52,93,80". Then convert these into numbers and
     *  output the mean, min, and max score.
     * Oh yeah, you have no way of knowing how many scores the user will enter, just that
     *  it will be less than 100. Hint: The return value of getline can be interpreted as
     *  a bool if the extraction failed.
     * For example, the above input will give mean: 79, min: 52, max: 94
     */

    /* Answer
    int grades[100];
    string buffer;
    getline(cin, buffer);

    stringstream ss(buffer);
    string token;

    int counter=0;
    while (getline(ss, token, ',')) {
        int grade;
        stringstream(token) >> grade;
        grades[counter++] = grade;
    }
    float sum = 0;
    int min = 100, max = 0;
    for (int i = 0; i < counter; i++) {
        max = max < grades[i] ? grades[i] : max;
        min = min < grades[i] ? min : grades[i];
        sum = sum + grades[i];
    }
    cout << "Mean: " << sum / (float)counter << "\nMin: " << min << "\nMax: " << max << endl;
    */
    //endregion

}
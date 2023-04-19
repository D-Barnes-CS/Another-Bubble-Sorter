#include <iostream>
using std::cout; using std::cin; using std::endl;

int main() {
    //could have classes and make a method instead of having all in main
    int i, j, temp, count = 0;
    int first[10] = {1, 3, 7, 5, 2, 4, 6, 8, 9, 10};
    int second[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int third[10] = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};
    cout << endl;
    //FIRST SITUATION
    //sorting loop
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            //comparison
            if (first[j] < first[i]) {
                count += 3;
                //change the value if its less than where j was compared to i
                temp = first[i];
                first[i] = first[j];
                first[j] = temp;
            }
            else {
                count++;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        cout << first[i] << "\t";
    }
    cout << "Number of actions performed: " << count << endl;

    count = 0;
    //SECOND SITUATION
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (second[j] < second[i]) {
                count += 3;
                temp = second[i];
                second[i] = second[j];
                second[j] = temp;
            }
            else {
                count++;
            }
        }
    }
    
    for (i = 0; i < 10; i++) {
        cout << second[i] << "\t";
    }
    cout << "Number of actions performed: " << count << endl;

    count = 0;
    //THIRD SITUATION
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (third[j] < third[i]) {
                count += 3;
                temp = third[i];
                third[i] = third[j];
                third[j] = temp;
            }
            else {
                count++;
            }
        }
    }
    
    for (i = 0; i < 10; i++) {
        cout << third[i] << "\t";
    }
    cout << "Number of actions performed: " << count << endl;
    
    return 0;
}
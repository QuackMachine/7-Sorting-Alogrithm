/*
* learning sorting algorithm
*   - bubble sort
*   - selection sort

* Size of the array can be change within the code
*   - on line 'int num[10];'                        // you can change '10'
* However, if '10' is changed, please change any 
* '10' you can see afterward for the program to work.
*/

#include <iostream>
using namespace std;

//for selection sort
int findsmall (int[], int);

int main()
{
    //declare variables
    int a, b,                                       // for bubble sort 
        c, d,                                       // for selection sort
        temp,                                       // universal variables
        pass1 = 0,
        pass2 = 0;
    int num[10];                                    // <- if need to be changed

    //let user inputs array
    cout << "Enter 10 different numbers: \n";

    //store user's input
    for (int i = 0; i < 10; ++i) {                  // I guess 'i' doesn't need to be declared
        cin >> num[i];
    }

    //display user's input
    cout << "The Numbers are: \n";

    for (int n = 0; n < 10; ++n) {                  // same situation with 'n'
        cout << num[n] << "\t";
    }
    cout << endl << endl;

    //start of bubble sort                          // for learning reasons, I have 'a' and 'b'
    for (a = 0; a < 10; a++) {                      // so I know what is in bubble sort
        for (b = a + 1; b < 10; b++) {              // also for differentiate bubble and selection sort
            if (num[b] < num[a]) {
                temp = num[a];
                num[a] = num[b];
                num[b] = temp;
            }
        }
    pass1++;
    }
    //end of bubble sort

    //start of selection sort
    for (int c = 0; c < 10; c++) {                  // same case with this one as I stated
        d = findsmall (num, c);                     // in bubble sort
        temp = num[c];
        num[c] = num [d];
        num[d] = temp;
        pass2++; 
    }
    //end of selection sort

    //display bubble sort list
    cout << "This is BUBBLE SORT.\n";
    cout << "The sorted Numbers are: \n";
        for (a = 0; a < 10; a++) {                  // match with 'a' in bubble sort
            cout << num[a] << "\t";
        }
    cout << endl << endl;
    
    //display selection sort list
    cout << "This is SELECTION SORT.\n";
    cout << "The sort Numbers are: \n";
        for (c = 0; c < 10; c++) {                  // match with 'c' in selection sort
            cout << num[c] << "\t";
        }
    cout << endl << endl;

    //diplay how many times it sorted for bubble sort
    cout << "Bubble sort: " << pass1 << " times.\n";
    cout << "Selection sort: " << pass2 << " times.\n";
    cout << endl;

    //return to beginning
    return main();                                  //can change to 'return 0;'
}

//for selection sort
int findsmall (int num[], int c) {
    //more variables
    int small, position, f;

    //setting up
    small = num[c];                                 // make sure variables match with
    position = c;                                   // selection sort's variables
    for (f = c + 1; f < 10; f++) {                  // from the main function
        if (num[f] < small) {
            small = num[f];
            position = f;
        }
    }
    return position;
}
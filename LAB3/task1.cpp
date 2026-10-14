  /*                                // TASK : 1
#include<iostream>                  //NAME:NOORFATIMA ROLL NUMBER:BSCS0095
using namespace std;
int main()
{
//PRINT HELLO WORLD
	cout << "HELLO WORLD\n";
		cout << "University of Central \n Punjab Faculty of Information \nTechnology Orientation Day 2026 ";
		cout << "\nWELCOME!\n";
		cout << 2026<< endl;
			cout << 45 <<endl;
		cout << 45*3 << endl;
		cout << 1000 + 500 - 250 << endl;
		//print total fee using an expression
		cout << "total fee :" << 4500 + 9000 << endl;
}*/


/*#include <iostream>     //TASK2 
using namespace std;      //using namespace std;was not used
int main()
{
	cout << "Orientation Day" << endl; //statement terminator wss not used
		cout << "Total students: "<< 450 << endl;  //<< was not use after total students
	cout << "Seats left: " << 500 - 450 << endl;
	cout << "Have a nice day" << endl; //commas was not used
		return 0;
}
*/


/*#include <iostream>  // TASK 2 PART B 
using namespace std;      //using namespace std;was not used
int main()
{
	cout << "Orientation Day" << endl; //statement terminator wss not used
		cout << "Total students: "<< 450 << endl;  //<< was not use after total students
	cout << "Seats left: " << 500 - 450 << endl;
	cout << "Have a nice day" << endl; //commas was not used
	cout << "Average: " << (60 + 70 + 80 )/ 3 << endl;
	//if we add bracket before 60 and after 80 the output will be accodring to our expected result
		return 0;
}
*/





/*#include <iostream>    // TASK 3
using namespace std;

int main() {
	cout << "Expression 1: " << 10 + 5 * 2 << endl;
	cout << "Expression 2: " << (10 + 5) * 2 << endl;
	cout << "Expression 3: " << 20 - 5 - 3 << endl;   // The operators are evaluated from left to right.
	cout << "Expression 4: " << 100 / 7 << endl;
	cout << "Expression 5: " << 100 % 7 << endl;
	cout << "Expression 6: " << 2 * 3 + 8 / 4 - 1 << endl;
// The brackets change the order of calculation and the result becomes 8
	return 0;
}
*/






/*
 #include <iostream>     //TASK 4
 using namespace std;

int main() {

    int rollNo = 1045;
    int semester = 1;
    char section = 'B';
    float cgpa = 3.5;
    int totalFee = 45000;
    int feepaid = 20000;

   
    cout << "Roll No: " << rollNo << endl;  // Display student information
    cout << "Semester: " << semester << endl;
    cout << "Section: " << section << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Total Fee: " << totalFee << endl;
    cout << "Fee paid: " << feepaid << endl;

    
    semester = semester + 1;  // UPDATE SEMESTER AND STUDENT FEE
    feepaid = feepaid + 5000;

    cout << "Semester: " << semester << endl;
    cout << "Fee Paid: " << feepaid << endl;

	int remainingFee = totalFee - feepaid;// CALCULATE REMAINING FEE AND SUBMISSION 
    int percentagepaid = feepaid * 100 / totalFee;

    cout << "Remaining Fee: " << remainingFee << endl;
    cout << "Percentage Paid: " << percentagepaid << endl;

  
   // Identifier names:
   // 2ndYear     - Invalid
  //  student_name - Valid
   // total-marks - Invalid
   // _fee        - Valid
   // Roll No     - Invalid
   // marks2      - Valid

    // Observation: An uninitialized int variable may print an unpredictable value. Therefore, it is not safe to rely on it.
    
    return 0;
}
*/





/*
// TASK 5
#include<iostream>                  // NAME: NOORFATIMA ROLL NUMBER: BSCS0095
using namespace std;

int main()
{
    // PRINT HELLO WORLD
    cout << "HELLO WORLD\n";
    cout << "University of Central \n Punjab Faculty of Information \nTechnology Orientation Day 2026 ";
    cout << "\nWELCOME!\n";
    cout << 2026 << endl;
    cout << 45 << endl;
    cout << 45*3 << endl;
    cout << 1000 + 500 - 250 << endl;

    // PRINT TOTAL FEE USING AN EXPRESSION
    cout << "Total fee: " << 4500 + 9000 << endl;

    // TASK 05: FEE CALCULATOR
    int age, creditHours, feePerCreditHour;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter credit hours: ";
    cin >> creditHours;

    cout << "Enter fee per credit hour: ";
    cin >> feePerCreditHour;

    int totalFee = creditHours * feePerCreditHour;
    int discountedFee = totalFee - 2000;

    cout << "Total Fee: Rs. " << totalFee << endl;
    cout << "Fee after discount: Rs. " << discountedFee << endl;
    cout << "Year of Birth: " << 2026 - age << endl;
    cout << "Year you will turn 25: "
         << 2026 + (25 - age) << endl;

    
    // Experiment 1:
    // I got the same result when entering values with spaces,
    // on separate lines, or with tabs because cin skips whitespace.

    // Experiment 2:
    // When I entered 19.8, the age variable read 19, but the
    // remaining .8 could cause the next input to fail.
    // This happens because age is an int variable.
    

    return 0;
}
*/



/* 
// TASK 6
#include <iostream>
using namespace std;

int main()
{
    int price, quantity;
    int total, tax, grandTotal;

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    total = price * quantity;
    tax = total * 5 / 100;
    grandTotal = total + tax;

    cout << "Total: " << total << endl;
    cout << "Tax: " << tax << endl;
    cout << "Grand Total: " << grandTotal << endl;

    // For price 99 and quantity 7, the tax is 34 instead of 34.65.
    // This is because int does not store decimal values.

    return 0;
}*/



/*
#include <iostream>
using namespace std;

int main()
{
    int celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = celsius * 9 / 5 + 32;

    cout << "Temperature in Celsius: " << celsius << endl;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    // For 37 Celsius, the answer is 98 instead of 98.6
    // because int removes the decimal part.

    return 0;
}*/

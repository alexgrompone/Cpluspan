/*
 *Cpluspan.cpp Version1
 *
 *  Created on: February 8, 2016
 *      Author: Alex Grompone
 */

//****************************************************
//Topic 0 Standard Headers, Libraries and Comments
//****************************************************

/*NOTES:
 *All the words or numbers written after a double slash or a slash and a star are Comments.
 *Comments do not affect the algorithm and have to be used only for reference for the developer.
 *In this programs the comments will guide the user through the use of each command and line.
 */


#include <iostream>
//includes "iostream" library that defines the input and output stream functionality of the code
#include <cstring>
//includes "cstring" library that allows to make sting operations
#include <cmath>
//includes "cmath" library for advanced mathematical operations

using namespace std;
// allows to use a cleaner version of the standard output/input commands std::cout and std::cin)

/*NOTES:
 *The definitions belong to Topics that require external functions or headers, but needed to be written before the main function.
 *The explanation of these definitions is provided within the Topic they belong to.
 *the keyword int defines an integer variable or a function that uses integer variables.
 */

int definedfun(int a, int b) {
	//function definition  for Topic 3
	int c = 0; //definition of an integer variable 'c' equal to zero
	c = a + b; //a list of the mathematical operations is provided in Topic 2
	return c; //return defines which variable will be used as output of the function
}

int defined_ext_fun(int a, int b);
//external function definition for Topic 3

void PointerFunction( int *X_variablepoint)
    //function definition for Topic 7
{*X_variablepoint=*X_variablepoint+1;}

class data//class definition for Topic 8
{
public://the definition below can be accessed everywhere. for variable internal to the class only use "private:"
int weight;
int age;
char name[20];
};//NOTE: each class definition requires a ';'

class Mammals // class definition for Topic 8
{
public:
char Mammals_group_name[20];
char location[20];
data Mammal_1,Mammal_2;
void dataoutput()//example of a function within a class. This is called Method
{cout<< Mammal_1.name <<" belongs to the group of "<<Mammals_group_name<<endl;}
};

class human_data
{public:
char citizenship[20];};

class Humans:public Mammals //example of Inheritance for Topic 9
{public:
human_data human_1,human_2;
};

class Dog //example of class constructor for Topic 9
{
public:
	void set_spots(int spots_sf);
	int get_spots(void);
    Dog();//defining the constructor
    ~Dog();//defining the destructor
private:
	int spots;//this variable cannot be changed externally therefore is 'private'
};
Dog::Dog(void){}//constructor
Dog::~Dog(void){}//destructor
void Dog::set_spots(int spots_sf)//defining input
{spots=spots_sf;}
int Dog::get_spots(void)//defining output
{return spots;}


//MAIN SCRIPT, here is where the main algorithm starts and uses the libraries and definitions written above
int main(){

	/*NOTES:
	 *since the standard library has been included followed by the line "using namespace std"
	 *it is not necessary to write "std::cout" or "std::cin" but only "cout" and "cin" for the
	 *definition of inputs and outputs
	 */

	cout    << "Program Paspasapan, Created by Alex Grompone, February 2016\n";
	//cout is the keyword that provides an output on the console and has to be followed by a variable or string
	//The text in the quotation marks forms a string. \n is the newline escape sequence (other escape sequences exist)
	cout
			<< "This program is intended as a working repository of the main functionalities of C++, for learning and reference purpose only\n\n\n ";
	cout
			<< "Insert the number N of the \'Test\' you want to perform, from the list:\n";
	cout
			<< "\n 1-Strings, Outputs and Inputs;\n 2-Mathematical operations and Conditions;\n 3-Defined Functions and Headers;\n 4-Conditional Structures and Logical Operations;\n 5-Variables and Standard Data Types;\n 6-Arrays;\n 7-Pointers;\n 8-Classes;\n 9-Object Oriented Programming;\n 10-Other Commands;\n";

	int x; 	//define integer variables before the switch statement
	cin >> x; 	//input the integer values
	switch (x)
	//start a SWITCH selection for the Topics selected by the user
	//SWITCH and other selection techniques are described in Topic 3
	{

	case 1: {
		//****************************************************
		//Topic 1 Strings, Outputs and Inputs
		//****************************************************

		cout << "Strings, Outputs and Inputs\n\n"
				<< "Please insert an integer value \'v\' :\n";
		//request to input the variable value

		int v; //define an integer variable v

		cin >> v; //variable value input request

		cout << "The value of \'v\' inserted is " << v << "\n" << endl;
		//outputs the value within a string

		/* NOTES
		 *the symbol \n returns to the next line
		 *the symbol \' and \'' puts quotes and double quotes
		 *the symbol << starts and interrupts the output string line
		 *the command endl ends the output line
		 */

        cout << "For string operations using cstring the output name is\n";

		char name1[] = "Saw";
		//char defines a character string called name1
		char name2[] = "yer";
		//char defines a character string called name2
		char string1[20];
		//char defines an uninitialized characters string of dimension 20
		char string2[20]="Tom ";
		//char defines a characters string of dimension 20 initialized as "Jerry"

		strcpy(string1,name1);
		//strcpy copies the name Tom in string1
		strcat(string2,string1);
		//strcat concatenates string2 and string1
		strcat(string2,name2);
		//strcat concatenates string2 and name2
		cout << string2;
        //output of the combination of name and strings

		break;
	}

	case 2: {
			//****************************************************
			//Topic 2 Mathematical Operations and Conditions
			//****************************************************
		cout << "Mathematical Operations and Conditions\n\n";

		cout << "please insert two integer numbers A and B\n";
		int a_input,b_input;
		cin >>a_input;
		cin >>b_input;
		cout << "The following is a list of mathematical results using basic operations:\n\n";
        //Operations
		cout<<"A+B="<<a_input+b_input<<"\n";
		cout<<"A-B="<<a_input-b_input<<"\n";
		cout<<"A*B="<<a_input*b_input<<"\n";
		cout<<"A/B="<<a_input/b_input<<" (Note: working with integers causes the output to be rounded)"<<"\n";
		int b1;
		int a1=a_input;
		b1=a1++;
		cout<<"B=A++ gives A="<<a1<<" and B="<<b1<<"\n";
		int b2;
		int a2=a_input;
		b2=++a2;
		cout<<"B=++A gives A="<<a2<<" and B="<<b2<<"\n\n";
        /*NOTES:
         * more mathematical commands can be find in the guide of the cmath library
         */


		// Conditionals
		bool input;//initialize a boolean variable that can assume only value 0 (False) or 1 (True)
		cout<< "(Note: working with boolean results, 0 is false and 1 is true)\n";
		input= a_input==b_input;
		cout << "A==B gives "<<input<<"\n";
		input= a_input!=b_input;
		cout << "A!=B gives "<<input<<"\n";
		input= a_input<b_input;
		cout << "A<B gives "<<input<<"\n";
		input= a_input<=b_input;
		cout << "A<=B gives "<<input<<"\n";
		input= a_input>b_input;
		cout << "A>B gives "<<input<<"\n";
		input= a_input>=b_input;
		cout << "A>=B gives "<<input<<"\n";
		input= a_input&&b_input>0;
		cout << "A&&B>0 gives "<<input<<"\n";
		input= a_input||b_input>0;
		cout << "A||B>0 gives"<<input<<"\n";
		input= !(a_input<b_input);
		cout << "!(A<B) gives "<<input<<"\n";
		break;
		}


	case 3: {
		//****************************************************
		//Topic 3 Defined Functions and Headers
		//****************************************************

		/*NOTES:
		 *To make algorithms easy to read, debug and reuse, it is convenient when possible to separate the code in modules.
		 *Therefore the following Topic explains how to define functions and call external functions.
		 *The user that wants to look or modify the code of this Topic has to search for the corresponding source files:
		 *defined_ext_fun.cpp  defined_ext_fun_h.cpp   and   definedheader.h
		 */

		cout << "Defined Functions and Headers\n\n";
		//The Functions have been defined above the main declaration,
		//in the external cpp file defined_ext_fun.cpp' and in the header 'defineheader'
		cout << "\n Insert a first integer value \'a\' :\n";
		int a, b;
		cin >> a;
		cout << "\n Insert a second integer value \'b\' :\n";
		cin >> b;
		int answer1 = definedfun(a, b);
		//Function defined above the main declaration

		cout//output of the function 'definedfun'
				<< "A- The sum of the inserted values has been calculated in the function \''definedfun\'' and the output is "
				<< answer1 << endl;

		cout//output of the external function 'defined_ext_fun'
						<< "B- the difference of the inserted values has been calculated in the external function \''defined_ext_fun\'' and the output is "
						<<defined_ext_fun(a,b) << endl;

		#include "definedheader.h"
		//include the header that calls the external functions 'defined_ext_fun_h' from the external file 'defined_ext_fun_h.cpp'
		int answer2 = defined_ext_fun_h(a, b);
		cout//output of the external function 'defined_ext_fun_h' using the header 'definedheader.h'
				<< "C- the product of the inserted values has been calculated in the header function \''definedfunh\'' and the output is "<< answer2 << endl;
		break;
	}

	case 4: {
		//****************************************************
		//Topic 4 Conditional Structures and Logical Operations
		//****************************************************

		cout << "Conditional Structures and Logical Operations\n\n";

        cout << "Choose a logical operation:\n 1- if, if-else and else-if;\n 2- switch case;\n 3- while;\n 4- for;\n";
        int y;
        cin >> y;
        switch (y)
        {
        case 1:{//if else-if and if-else
        	cout << "1- if, if-else and else-if\n\n please insert the values A and B:\n";
            int a,b;
            cin >> a >> b;
            /*NOTES:
             *Operations and Conditions of Topic 2 can be used as arguments for all the statements of Topic 4
			 *For simplicity here we use only the arguments a>b and a<b
			 */

			if(a>b) {
			cout << "The value of A is bigger than the value of B";
			}
			else if (a<b){
			cout << "The value of A is smaller than the value of B";
			}
			else{
			cout << "The value of A is equal to the value of B";
			}

        	break;}

        case 2:{//switch case

        	/*NOTES:
             *The switch case has been used in this algorithm for the selection of the topics.
             *A smaller example is given here to help visualize better the structure of this conditional statement.
        	 */

        	cout << "2- switch case \n\n please choose case 1 or 2:\n";
        	int g;
        	cin >> g;
            	switch (g){
            	case 1:{cout << "you chose case 1"; break;};
            	case 2:{cout << "you chose case 2"; break;};
            	default: {cout << "your input is not valid";break;};
            	}

        	break;}
        case 3:{//while and do-while loop
        	cout << "3- while loop\n\n please insert an integer value A:\n";
            int d;
            int e=0;
            cin >> d;

            while(e<d){e=e+1; cout << "the /'while loop/' number is "<< e;};
            cout << "the while loop has been repeated " << e <<" times";

            int e2=0;
            //alternative way to use the while
            do //the do while guarantees that the first statement gets exexuted at least once
            {e2=e2+1; cout << "the /'do while loop/' number is "<< e2;}
            while(e2<d);
            cout << "the while loop has been repeated " << e2 <<" times";

            break;}
        case 4:{//for loop
        	cout << "4- for loop\n\n please insert an integer value A:\n";
            int f;
            cin >> f;//define a variable that can be used as counter

        	for (int h=1;h<f;h=h+1)
        	{cout << h;}

        		cout << "the while loop has been repeated " << f <<" times";
        	break;}
    	default: {
    		//Topic No tests selected
    		cout << "no test selected\r";}
        }

		break;
	}

	case 5: {
		//****************************************************
		//Topic 5 Variables and Data Types
		//****************************************************

		cout << "Variables and Standard Data Types\n\n";
		cout
				<< "Choose the input data type:\n 1-signed char (1 byte,-128 to 127 );\n 2-unsigned char (1 byte, 0 to 255);\n 3-signed int (4 bytes, -2147483648 to 2147483647);\n 4-unsigned int (4 bytes, 0 to 4294967295);\n 5-bool (1 byte, true(1) or false (2));\n 6-double (8 bytes, +/- 1.7e +/- 308 (15 digits));\n";
		int y;
		cin >> y;
		char stringdata[] = "Insert the variable of data type ";

		/*NOTES:
		 * A valuable exercise is to test operations between different data types.
		 * Different results or error will show the inherent differences between types.
		 */
		if (y > 0 && y < 7) {
			if (y == 1) {
				unsigned char z;
				char namedata[] = "unsigned char";
				strcat(stringdata,namedata);
				cout << stringdata;
				cin >> z;
				cout << z <<" successfully stored as data type " << namedata << "\n";
			} else if (y == 2) {
				signed char z;
				char namedata[] = "signed char";
				strcat(stringdata,namedata);
				cout << stringdata;
				cin >> z;
				cout << z <<" successfully stored as data type " << namedata << "\n";
			} else if (y == 3) {
				unsigned int z;
				char namedata[] = "unsigned int";
				strcat(stringdata,namedata);
				cout << stringdata;
				cin >> z;
				cout << z <<" successfully stored as data type " << namedata << "\n";
			} else if (y == 4) {
				signed int z;
				char namedata[] = "signed int";
				strcat(stringdata,namedata);
				cout << stringdata;
				cin >> z;
				cout << z <<" successfully stored as data type " << namedata << "\n";
			} else if (y == 5) {
				bool z;
				char namedata[] = "bool";
				strcat(stringdata,namedata);
				cout << stringdata;
				cin >> z;
				cout << z <<" successfully stored as data type " << namedata << "\n";
			} else if (y == 6) {
				double z;
				char namedata[] = "double";
				strcat(stringdata,namedata);
				cout << stringdata;
				cin >> z;
				cout << z <<" successfully stored as data type " << namedata << "\n";
			}

		} else {
			cout << "input error";
		}

		break;
	}
	case 6: {
		//****************************************************
		//Topic 6 Arrays
		//****************************************************

		cout << "Arrays\n\n";

        /*NOTES:
         *Arrays are a way to collect multiple variables together.
         *Arrays can be of all the data types described in Topic 5.
		 *For simplicity here we use only integrals Arrays examples.
		 */

		int array1[4]={1,2,3,4}; //defines an Array of integers of 4 elements.
		cout << "Array 1 has the following value:\n"<< array1[0]<<" "<<array1[1]<<" "<< array1[2]<<" "<<array1[3]<<"\n";
		cout << "Please insert an integer value A:\n";
		int value1;
		cin >> value1;
		array1[0]=value1;//assigns the input value to the first component of the array
		array1[2]=value1;//assigns the input value to the third component of the array
		cout << "the first value and the third value of Array 1 have been substituted with the value A.\n Array 1 now is:\n"<< array1[0]<<" "<<array1[1]<<" "<< array1[2]<<" "<<array1[3]<<"\n";
		int array2[2],arr1,arr2;
		cout<<"Please insert two integer values for Array 2\n";
		cin >> arr1;
		cin >> arr2;
		array2[0]=arr1;//assigns the first value of the array
		array2[1]=arr2;//assigns the second value of the array
		cout<<"the new Array 2 is:\n"<<array2[0]<<" "<<array2[1]<<"\n";
		break;
	}
	case 7: {
		//****************************************************
		//Topic 7 Pointers
		//****************************************************

		cout << "Pointers\n\n";

		int X_variab;
		cout<< "Please insert an integer value X:\n";
		cin >> X_variab;
		int *X_point=&X_variab;//declares a pointer X_point for the address of X_variab
		int &X_refer=X_variab;//declares a reference X_refer for the value of X_variab
		cout << "\n the memory address of X is:\n";
		cout <<X_point;//outputs the memory address of the pointer
		cout << "\n the value of X passed by pointer is:\n";
		cout <<*X_point;// the * dereferences the pointer to access its value
		cout << "\n the value of X passed by reference is:\n";
		cout <<X_refer;// the * dereferences the pointer to access its value
		//Pointers as Arguments
		PointerFunction(&X_variab);
		//the function is defined above the main script.
		cout<<"\n the output of the function with pointer arguments is:\n"<<X_variab;

		//Pointers and Arrays

		/*NOTES:
		 * similar operations can be done using pointers on strings of characters.
		 */
        int array[4]={1,2,3,4};
        int *point_array=array;//define a pointer to the array (NOTE & is not required!)
        point_array++;// move the pointer to point to the second element of the array
        cout<<"\n the second element of the array {1,2,3,4} passed by pointer is:\n"<<*point_array;
        int *point2_array=array+2;
        cout<<"\n the third element of the array {1,2,3,4} passed by pointer is:\n"<<*point2_array;
		break;
	}
	case 8: {
		//****************************************************
		//Topic 8 Classes
		//****************************************************

		cout << "Classes\n\n";
		/*NOTES:
		 *The classes Mammals and data have been defined above the main script.
		 *The example describes a class called Mammals (defined as a base or parent class),
		 *and a class called data (defined as a child class of Mammals).
		 */
		Mammals Group1; //Defines two classes of DataType Mammals
		Mammals Group2;

		//DATA SET
		char Group1_Mammals_name[]="Bears";
		strcpy(Group1.Mammals_group_name,Group1_Mammals_name);
		char Group1_Mammal_1_name[]="Yoghi";
		strcpy(Group1.Mammal_1.name,Group1_Mammal_1_name);
		Group1.Mammal_1.age=34;
		char Group1_Mammal_2_name[]="Bubu";
		strcpy(Group1.Mammal_2.name,Group1_Mammal_2_name);
		Group1.Mammal_2.age=12;
		cout << "The first group of mammals is called " << Group1.Mammals_group_name <<" and both "<<Group1.Mammal_1.name<<" and "<< Group1.Mammal_2.name <<"belong to this class";


        //DATA COLLECTION
		cout << "Insert the for the second Mammals Group:\n";
		cin >> Group2.Mammals_group_name;
		cout << "Insert the name of one of the " << Group2.Mammals_group_name <<":\n";
        cin >>Group2.Mammal_1.name;
		/*NOTES:
		 *classes values can be used as arguments in functions.
		 *Pass classes by reference if their value needs to be modified.
		 *Functions defined in classes like 'dataoutput' are called methods.
		 *The output of the second group is uses the method 'dataoutput'.
		 */
		Group2.dataoutput();
		break;
	}

	case 9: {
		//****************************************************
		//Topic 9 Object Oriented Programming
		//****************************************************

		cout << "Object Oriented Programming\n\n";

		/*NOTES:
		 * Object Oriented programming is based on the use of classes.
		 * In this topic is provided a collection of techniques to use the classes.
		 * More example will be added in the future.
		 */

		//Example of Inheritance
		//the line "class Humans : public Mammals" is defined before the main()
		Humans man;
		char man_Mammals_name[]="Men";
		strcpy(man.Mammals_group_name,man_Mammals_name);
		char man_Mammal_1_name[]="Frank";
		strcpy(man.Mammal_1.name,man_Mammal_1_name);
		char citizen[]="American";
	  	strcpy(man.human_1.citizenship,citizen);
	  	cout << "One of the "<< man.Mammals_group_name <<"'s name is "<< man.Mammal_1.name <<" and he is "<< man.human_1.citizenship << endl;

	  	//Example of Class Constructor
	  	Dog dalmatian;
		cout << "Insert the number of spots for a Dog:\n ";
		int spots_dalmatian;
		cin >> spots_dalmatian;
		dalmatian.set_spots(spots_dalmatian);
		cout << "My Dalmatian has " <<dalmatian.get_spots()<< " spots";

		break;
	}
	case 10: {
		//****************************************************
		//Topic 10 Other Commands
		//****************************************************

		   cout << "Other Commands\n\n";

		break;
	}
	default: {
		//Topic No tests selected
		cout << "no test selected\r";
	}
	}
	return 0;
}






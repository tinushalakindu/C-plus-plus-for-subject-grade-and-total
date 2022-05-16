#include <iostream>
using namespace std;
#include<string>

int main()
{
	string sName;
	int sub=0, tot=0, avg, sub_count;
	
	//Student Name
	cout << "Enter Your Name: - ";
	cin >> sName;
	//How many Subjects
	cout << "How Many Subject Do you Follow? ";
	cin >> sub_count;

	int* subj_data = new int[sub_count];

	for (int i = 1; i <= sub_count; i++)
	{
		cout << "Enter Your Marks for Subject " << i << " here: - ";
		
		cin >> subj_data[i];
		
		//Calculate Total
		tot = tot + subj_data[i];
	}
		//Calculate Average
		avg = tot / sub_count;

		//Print Results for tot, name, avg

		cout << endl << endl << " - - - - - - - - - - - " << endl << endl << "Student's Name is :-  " << sName << endl << "Student's Subjects Count :-  " << sub_count << endl
			<< "Student Total Marks :-  " << tot << endl << "Student Aveage Marks :-  " << avg
			<< endl << endl << " - - - - - - - - - - - " << endl << endl << "Student Grade for Induvidual Subjects " << endl << endl;

	//Check marks value and Check Grade
	for (int j = 1; j <= sub_count; j++)
	{
		if (subj_data[j] > 100)

		{  
			cout << endl << "Invalid Subjects Marks!!!  " << subj_data[j] << endl << endl;
		}
		else if (subj_data[j] >= 75)
		{
			cout << "Subject " << j << " Grade is "<< " 'A'  for Marks " << subj_data[j] << endl;
		}
		else if (subj_data[j] >= 65)
		{
			cout << "Subject " << j << " Grade is " << " 'B' for Marks " << subj_data[j] << endl;
		}
		else if (subj_data[j] >= 55)
		{
			cout << "Subject " << j << " Grade is " << " 'C' for Marks " << subj_data[j] << endl;
		}
		else if (subj_data[j] >= 35)
		{
			cout << "Subject " << j << " Grade is " << " 'S' for Marks " << subj_data[j] << endl;
		}
		else 
		{
			cout << "Subject " << j << " 'Failed' for Marks " << subj_data[j] << endl;
		}
	}

}












	/*
	//Get 3 Subject Marks
	cout << "Enter Your Marks for Subject 1: - ";
	cin >> s1;

	cout << "Enter Your Marks for Subject 2: - ";
	cin >> s2;

	cout << "Enter Your Marks for Subject 3: - ";
	cin >> s3;

	//Calculation
	tot = s1 + s2 + s3;
	avg = tot / 3;

	//Pass Faill
	if (s1 > 40)
	{
		cout << "Subjects 1 " << "Pass" << endl;
	}
	else
	{
		cout << "Subjects 1 " << "fail" << endl;
	}	

	if (s2 > 40)
	{
		cout << "Subjects 2 " << "Pass" << endl;
	}	
	else
	{
		cout << "Subjects 2 " << "Faill" << endl;
	}

	if (s3 > 40)
	{
		cout << "Subjects 3 " << "Pass" << endl;
	}
	else
	{
		cout << "Subjects 3 " << "Faill" << endl;
	}	

	cout << "Total Marks: - " << tot << endl << "Average MarksL: - " << avg << endl;

}



/*int count;


	cout << "Enter any Number: - ";
	cin >> count;
	int sum = 0;
	int* subj_data = new int[count];

	for (int i = 0; i < count; i++)
	{
		cin >> subj_data[i];

		sum = sum + subj_data[i];


	}
	for (int j = 0; j < count; j++)
	{
		cout << subj_data[j] <<endl;

	}

	cout << "Sum =  " << sum << endl;
	*/
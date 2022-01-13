[Video Link](#)
# Practice to read data from a text file
    i. Create a file called "number.txt"
    ii. Type set of numbers and save those in the file.
                Eg. 21 43 76 98 40 
    iii. Using a C program enter another number from the key board and store it in the if the file does not already have that number. If the number exist in the file, display an error message.
    iv. Read the number.txt file and display all the numbers stored in the file.

# Practice to write data to a text file
    A medical center wants to store the appointment details of their patients in a text file called "appointment.dat". The patient details consist of patient name and the type of appointment. Type of appointment can be either "Consulting", "Scanning" or "Testing". Only the first letter of the appointment type will be stored in the file.

        Write a C program to do the following.
            a) Create a file called “appointment.dat”.
            b) Enter data of 5 patients from the keyboard and write those data to the text file(sample input is given below). 
                        Dilshan     C
                        Ruwan       T
                        Mangala     S
                        Ganesh      C
                        Jithen      S
            c) Read the appointment.dat file and calculate and display the number of patients of each type as given below.

                        Appointment Type            Number of Patients
                        Consulting                  2
                        Scanning                    2
                        Testing                     1


# Additional exercises
    1. You are required to read following details for each student from the keyboard.
            student registration no     character array of length 20
            student name                character array of length 50
            student age                 integer
        
        You must use a structure to define the above students' details. Then use the structure to create an array of Student to read and store the 5 student details.
        
        Finally write all the details in the array to a file in the following format:
                RegNo       Name        Age
                213423      Peter       21
        
    2. Write a program to read a text file called "data.txt" which contain employee name, employee no employee basic and OT amount salary in following format.

            EmpName     EmpNo      BasicSalary      OTHours
            Nimal       001         35000.00        9
            Kamal       002         45000.00        10
            Sunil       003         55000.00        2
            Peter       004         25000.00        5

        a) You must use a structure to define the above details (Employee name, Employee No, Basic salary and OT hours).
        b) Then use the structure to create an array of employee to read and store employee details.
        c) Write a function to calculate the net salary of OT amount.
                Net Salary = Basic Salary + Basic Salary * 0.35 + OT amount
                OT amount = OT hours * 15.00 
        d) Calculate the total amount of money this company should have to pay the employee salaries.
        e) Display the Employee No, Basic salary, OT amount, Net salary of each employee.
        f) Finally display the total amount of money this company should have to pay the employee salaries.

    3. Write a Program to count the vowels and letters in a word given from keyboard. Then display the number of occurrence of each of the vowel a, e, I, o and u in the word, the total number of letters. 

            Finally write all the details to a text file in the following format.
            Your "myword.txt" file should be created in the following format.

            Word        a   e   o   p   u   other   total
            Apple       1   1   0   0   0   3       5
            University  0   1   2   0   1   6       10
            Programming 1   0   1   1   0   11      8





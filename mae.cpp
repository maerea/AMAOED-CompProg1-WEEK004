#include <iostream>

using namespace std;

int main()
{
   int Grade,CharGrade;
   cout << "Enter Grade:" << endl;
   cin >> Grade;
   if ( Grade >=96)
   {
       cout << "Excellent, you have a grade of" <<endl;
       cout << "A+:" << Grade << endl;

       }
        else if ( Grade >=90)
        {
        cout << "Very Good, you have a grade of " <<endl;
        cout << "A:" << Grade <<endl;
        }
        else if ( Grade >=86)
        {
       cout << "Very Good, you have a good grade of" <<endl;
       cout << "A-:" << Grade <<endl;
       }
        else if ( Grade >=81)
        {
            cout << "B+:" <<Grade <<endl;
        }
         else if ( Grade >=75)
        {
            cout << "You have a good grade of" <<endl;
            cout << "B:" << Grade <<endl;
        }
        else if ( Grade >=69)
        {
            cout << "You have a good grade of" <<endl;
            cout << "B-:" << Grade <<endl;
        }
        else if ( Grade >=63)
        {
            cout << "You have a fair Grade of" <<endl;
            cout << "C+:" << Grade <<endl;
        }
        else if ( Grade >=57)
        {
            cout << "You have a fair grade of" <<endl;
            cout << "C:" << Grade <<endl;
        }
        else if ( Grade >=50)
        {
            cout << "You have a fair grade of" <<endl;
            cout << "C-:" << Grade << endl;
        }
        else if ( Grade <=50)
        {
            cout << "You failed" <<endl;
            cout << "F:" << Grade <<endl;
        }
       else
       {
           cout << "Enter the grade range" <<endl;
       }

    return 0;
}

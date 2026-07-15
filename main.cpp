#include <iostream>
using namespace std;
void checkans(int correctans, int userans,int &score){
    if(correctans==userans){
        cout<<"correct answer"<<endl;
        score++;
    }
    else{
        cout<<"wrong answer"<<endl;
    }
}
int convAto1(){
    char option1;
    cin >> option1;
    if (option1 >= 'a' && option1 <= 'd') {
        return option1 - 'a' + 1;
    } else if (option1 >= 'A' && option1 <= 'D') {
        return option1 - 'A' + 1;
    } else if (option1 >= '1' && option1 <= '4') {
        return option1 - '0'; 
    } else {
        return -1;
    }
}
int main() {
    int score=0,score1=0;
    int option,p,q;
    cout << "Welcome"<<endl;
    do{
        score=0;
    cout << "1. Who invented C++?" << endl;
    cout << "1) Dennis Ritchie"<<endl;
    cout << "2) Ken Thompson"<<endl;
    cout << "3) Brian Kernighan"<<endl;
    cout << "4) Bjarne Stroustrup"<<endl;
    option=convAto1();
    checkans(4,option,score);
    cout << "2.  Which of the following extension is used for user-defined header file in c++?" << endl;
    cout << "1) hg"<<endl;
    cout << "2) cpp"<<endl;
    cout << "3) h"<<endl;
    cout << "4) hf"<<endl;
    option=convAto1();
    checkans(3,option,score);
    cout << "3. Which of the following is a correct identifier in C++?" << endl;
    cout << "1) VAR_1234"<<endl;
    cout << "2) $var_name"<<endl;
    cout << "3) 7VARNAME"<<endl;
    cout << "4) 7var_name"<<endl;
    option=convAto1();
    checkans(1,option,score);
    cout << "4. By default, members of a C++ class are:" << endl;
    cout << "1) public"<<endl;
    cout << "2) private"<<endl;
    cout << "3) protected"<<endl;
    cout << "4) global"<<endl;
    option=convAto1();
    checkans(2,option,score);
    cout << "5. If an array is declared as int arr[5] = {1, 2, 3};, what is the value of arr[4]" << endl;
    cout << "1) Garbage value"<<endl;
    cout << "2) 3"<<endl;
    cout << "3) 0"<<endl;
    cout << "4) error"<<endl;
    option=convAto1();
    checkans(3,option,score);
    if(score>=4){
        cout<< "Congratulations!! You are moving to next level!!"<<endl;
        break;
    }
    else{
        p=0;
        cout<<"Your score is less,you have to give retest"<<endl;
    }
    }while(p==0);
    do{
        score1=0;
    cout << "1. Which loop is guaranteed to execute at least once, even if the condition is false?" << endl;
    cout << "1) for loop"<<endl;
    cout << "2) while loop"<<endl;
    cout << "3) do-while loop"<<endl;
    cout << "4) None of the above"<<endl;
    option=convAto1();
    checkans(3,option,score1);
    cout << "2.  Which of the following operators cannot be overloaded in C++" << endl;
    cout << "1) +"<<endl;
    cout << "2) ++"<<endl;
    cout << "3) ::"<<endl;
    cout << "4) =="<<endl;
    option=convAto1();
    checkans(3,option,score1);
    cout << "3.What is a C++ string?" << endl;
    cout << "1) A data type used to store integers."<<endl;
    cout << "2) A data type used to store floats."<<endl;
    cout << "3) A sequence of characters."<<endl;
    cout << "4) A pointer to an integer."<<endl;
    option=convAto1();
    checkans(3,option,score1);
    cout << "4. Which of the following header file is required to use C++ strings?" << endl;
    cout << "1) #include <iostream>"<<endl;
    cout << "2) #include <string>"<<endl;
    cout << "3) #include <vector>"<<endl;
    cout << "4) #include <cstdlib>"<<endl;
    option=convAto1();
    checkans(2,option,score1);
    cout << "5. What is a function in C++?" << endl;
    cout << "1) A data type"<<endl;
    cout << "2) A variable"<<endl;
    cout << "3) A loop"<<endl;
    cout << "4) A reusable block of code"<<endl;
    option=convAto1();
    checkans(4,option,score1);
    if(score1>=4){
        cout<< "Congratulations! you have passed the quiz.Your score is "<< score+score1 <<"/10"<<endl;
        break;
    }
    else{
        q=0;
        cout<<"Your score is less,you have to give retest"<<endl;
    }
    }while(q==0);
    
    return 0;
}

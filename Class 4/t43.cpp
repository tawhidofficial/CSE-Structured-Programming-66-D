# include<iostream>
using namespace std;

int calculateTotal(int quiz, int midtern, int finalExam){
    return quiz + midtern + finalExam;
}

double calculatePercentage (int totalMarks, int maxMarks){
    return ((double)totalMarks / maxMarks ) * 100.0;
}

char assignGrade (double percentage){
    if (percentage >= 80.0) return 'A';
    if (percentage >= 65.0) return 'B';
    if (percentage >= 50.0) return 'C';
    return 'F';
}

int main (){

    int quiz,mid ,final;
    cin >> quiz >> mid >> final;

    int total = calculateTotal(quiz, mid, final);
    double pct = calculatePercentage(total,100);
    char grade = assignGrade(pct);

    cout << "Total: " << total << "/100  |  Percentage: " << pct ;
    cout <<  "  |  Grade: " << grade << endl; 

    return 0;
}
#include <iostream>

int main()
{
  int T_exams;
  int taken_exams;
  int R_exams;
  float grades[50];
  float examsT;
  float exam_per;
  float NeededExams;
  float AGrade;
  int i=0;
  int j=0;
  char s='s';
  int ia=(int)s;
  float ss=-1;

  cout<<"\n"<<"\n"<<"\n";
  cout<<"*************************************************************"<<"\n";
  cout<<"              Welcome To The Grade Calculator!"<<"\n";
  cout<<"*************************************************************"<<"\n"<<"\n";
  cout<<"Please Enter The Cutoff For An A: ";
  cin>>AGrade;
  cout<<"\n"<<"\n"<<"Please Enter the Total Number of Exams for the Semester: ";
  cin>>T_exams;
  cout<<"\n"<<"\n"<<"Enter The Exam Percantage of Your Final Grade: ";
  cin>>exam_per;
  cout<<"\n"<<"\n"<<"Please Enter All of Your Exam Scores {Type '-1' to stop}:"<<"\n";


  //Get Grades
  do {
    cin>>grades[i];
    j=i;
    i=i+1;
  } while(grades[j] != ss);

  //Calculate Taken Exams and Exams Remaining
  taken_exams=j;
  R_exams=T_exams - taken_exams;

  //Calculate Average Needed
  for(i=0; i<j; i++)
    {
      examsT=examsT+grades[i];
	}
  NeededExams=((AGrade*T_exams)-examsT)/R_exams;

  //Report
  cout<<"Taken Exams: "<<taken_exams<<"\n"<<"\n";
  cout<<"Remaing Exams: "<<R_exams<<"\n"<<"\n";
  cout<<"You Must Recieve "<<NeededExams<<" Or Better To Get An A"<<"\n"<<"\n";


}

#include <iostream>
using namespace std;
char findgrade(float average){
    char grade;
    //logic to find grade here
    if(average>=95) grade ='A';
    else if(average>=85) grade= 'B';
    else if(average>=75) grade ='C';
    else if(average>=65) grade ='D';
    else if(average>=50) grade ='E';
    else grade ='F';
    return grade;
}
int main(){
    system("cls");
    string name, id;
    char gender;
    float scores[5];
    cout<<"[==============Imformation Student============]"<<endl;
    cout<<"Enter ID :"; cin>>id;
    cout<<"Enter Name :"; cin >>name;
    cout<<"Enter Gender :"; cin >>gender;
    cout<<"Enter Scores :"<<endl;
    for(int i=0; i<5; i++){
        cout<<"\tEnter Score"<<(i+1)<<" : ";
        cin>>scores[i];
    }
    int total =0;
    for(int val: scores){
        total +=val;
    }
    //Prossessing
    
    cout<<"[Show Student Information]"<<endl;
    cout<<"Student's ID :"<<id<<endl
        <<"Student's Name :"<<name<<endl
        <<"Student's Gender :"<<gender<<endl;
    cout<<"=============All Student scores=============="<<endl;
    float average= total/5;
    cout<<"Total scores : "<<total<<"point"<<endl;
    cout<<"Student's Average : "<<average<<endl;
    cout<<"Student's Grade : "<<findgrade(average)<<endl;
    cout<<"Student's Result is : "
        <<((findgrade(average)=='F')? "Failed":"Passed")<<endl;

    // if (findgrade(average)=='F')
    //     cout<<"Result = Failed"<<endl;
    // else 
    //     cout<<"Result = Passed"<<endl;
    return 0;
}

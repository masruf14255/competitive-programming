/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

#include<bits/stdc++.h>
using namespace std;



typedef struct student
{
    char name[2500];
    int age;
    int cgpa;
    struct student *next;
}student;


student *head=NULL;


void display()
{
    student *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->name<<endl;
        cout<<temp->age<<endl;
        cout<<temp->cgpa<<endl;
        temp=temp->next;
    }
}

int main()
{
    student *s1=(student*)malloc(sizeof(student));
    s1->name='Tonoy';
    s1->age=20;
    s1->cgpa=3.67;
    s1->next=NULL;
    head=s1;

    student *s2=(student*)malloc(sizeof(student));
    s2->name='Tasmeem';
    s2->age=22;
    s2->cgpa=3.97;
    s2->next=NULL;

    student *s3=(student*)malloc(sizeof(student));
    s3->name='Tonmoy';
    s3->age=23;
    s3->cgpa=3.47;
    s3->next=NULL;

    s1->next=s2;
    s2->next=s3;

    display();
}

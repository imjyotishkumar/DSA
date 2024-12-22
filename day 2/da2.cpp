

#include<iostream>
#define pi 3.14
using namespace std;

int jyotish(){
int a=10;
int b=5;
char grade='A';
string name="jyotish";
float cgpa=8.8;
bool istrue=true;
cout<<name<<"  "<<cgpa<<"  "<<istrue<<endl;
cout<<"Name is: "<<name<<"\n"<< "cgpa is:"<<cgpa<<"\n"<<endl;

std::cout<<"The value of a is:"<<a<<"\n"<<"The value of b is: "<<b<<"\n";
cout<<"value of pi is: "<<pi<<endl;
cout<<"jyotish \n"<<endl;

cout<<"******"<<""<<endl;
cout<<"*****"<<""<<endl;
cout<<"****"<<""<<endl;
cout<<"***"<<""<<endl;
cout<<"**"<<""<<endl;
cout<<"*"<<""<<endl;


}

sum_of_two_number()
{
    int a,b,sum;

    //input 1st number
    cout<<"Enter 1st number"<<endl;
    cin>>a;


    //input 2nd number
    cout<<"Enter 2nd number"<<endl;
    cin>>b;

    //calculate sum
    sum=a+b;

    //print sum
    cout<<"sum of these two number is: "<<sum<<endl;
}

calculate_avg_marks()
{
    float eng,math,science,socialscience,hindi,avg;

    //input marks
    cout<<"enter the marks of english: "<<endl;
    cin>>eng;

    cout<<"enter the marks of mathematics: "<<endl;
    cin>>math;

    cout<<"enter the marks of science: "<<endl;
    cin>>science;

    cout<<"enter the marks of socialscience: "<<endl;
    cin>>socialscience;

    cout<<"enter the marks of hindi: "<<endl;
    cin>>hindi;

    //calculate average marks

    avg=(eng+math+science+socialscience+hindi)/5;

    //print average marks

    cout<<"your average marks is: "<<avg<<"%"<<endl;
}
pattern()
{
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
print_n_to_1()
{
int n,i;
cout<<"Enter a number: "<<endl;
cin>>n;
for(i=n;i>=1;i--){
    cout<<i<<" ";
}

}
sum_of_didits()
{
    int n=10829;
    int digsum=0,r;
    while(n>0){
        r=n%10;
        digsum+=r;
        n=n/10;
    }
    cout<<"sum= "<<digsum<<endl;
}
sum_of_odd_digits()
{
    int a,r,s=0;
    cout<<"Enter a no: "<<endl;
    cin>>a;
    while(a>0){
        r=a%10;
        if(r%2==0){

        }else{
        s=s+r;
        }
        a=a/10;
    }
    cout<<"sum of odd digit is= "<<s<<endl;
}
keep_entering_number()
{
    int n;
            cout<<"enter a no  "<<endl;

            cin>>n;

    while((n%10)!=0){
        cout<<"enter a no  "<<endl;
        cin>>n;
    }
}

keep_entering_number_exept10(){
int n;
do{
    cout<<"Enter your no ";
    cin>>n;
    if(n%10==0){
        continue;
    }

    cout<<"your entered no is "<<n<<endl;
}while(true);
}
int main(){
    //keep_entering_number();
keep_entering_number_exept10();

    //sum_of_odd_digits();
   // sum_of_didits();

   // print_n_to_1();
   // pattern();

//calculate_avg_marks();
//sum_of_two_number();
//jyotish();


return 0;

}

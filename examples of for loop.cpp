#include <iostream>

using namespace std;

int main()
{
 //variable declaration ;
/* int num1,ctr;
 cout<<"\n\nCheck whether a number is prime or not:\n";
 cout<<"-------------------------------------------\n";
 cout<<"Enter a number to check prime or not:";
 cin>>num1;
 for(int a=1;a<=num1;a++){
    if(num1%a==0){
        ctr++;

    }

 }
 if(ctr==2){
    cout<<"The entered number is a prime number:\n";

 }
 else{
    cout<<"The number you have entered is not a prime number:\n";

 }
 */
//to find the factorial of the given number:
/*int num1,factorial=1;
cout<<"\n\n Find the factorial of a given number:\n";
cout<<"-------------------------------------------\n";
cout<<"Input the number to find the factorial of it:\n";
cin>>num1;
for(int a=1;a<num1;a++){
    factorial=factorial*a;
}
cout<<"The factorial of the number given by the user is:"<<factorial<<endl;
    */
   /* int i,j,r;
    cout<<"\n\nDisplay the pattern like a diamond:\n";
    cout<<"\n\n-----------------------------------\n";
    cout<<"\n\nInput the number of rows(half of the diamond):";
    cin>>r;
    for(i=0;i<=r;i++){//is for the rows checker
        for(j=1;j<=r-i;j++)//this one is for the spaces in first half
            cout<<" ";//print the spaces
        for(j=1;j<=2*i-1;j++)//this one is for the sterics in first half
        cout<<"*";//print the sterics

            cout<<endl;

        }
        for(i=r-1;i>=1;i--){
        for(j=1;j<=r-i;j++)
            cout<<" ";


    for(j=1;j<=2*i-1;j++)
        cout<<"*";
        cout<<endl;

    }
*/
    return 0;
}

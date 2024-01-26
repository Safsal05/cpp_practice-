// Checking whether the given number is odd or even
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if(x%2==0) 
//         cout<<"Its an Even number!!";
//     else 
//         cout<<"Its an Odd number";
// }

//now if we write cout<<"wow" in the if condition. If if is false and the condition for else is true
// then it will still print wow with the output its an odd number. So to prevent it and just print it when if
// condition is true we can write the code as given below;

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if(x%2==0){
//         cout<<"Its an Even number!!"<<endl;
//         cout<<"Wow";
//     }

//     else{
//         cout<<"Its an Odd number";
//     } 

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if(x%5==0){
//         cout<<"The number is divisible by 5!!";
//     }

//     else{
//         cout<<"Its not divisible by 5";
//     } 

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if(x>0){
//         cout<<"The absolute value of the number is: ";
//         cout<<x;

//     }

//     else{
//         cout<<"The absolute value of the number is: ";
//         cout<<x*-1;
//     } 

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int cp;
//     cout<<"Enter a the cost price of the product: ";
//     cin>>cp;
//     int sp;
//     cout<<"Enter a the Selling price of the product: ";
//     cin>>sp;
    
//     if(sp>cp){
//         cout<<"There is a profit of: ";
//         cout<<sp-cp;

//     }

//     else if(sp<cp){
//         cout<<"There is a loss of: ";
//         cout<<cp-sp;
//     } 
//     else{
//         cout<<"there is no loss or profit";
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if (x>99 && x<1000){
//         cout<<"The number is a 3 digit number";
//     }
//     else{
//         cout<<"The number is not a 3 digit number";
//     }
        
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if (x%5==0 && x%3==0){
//         cout<<"The number is divisible by both 3 and 5";
//     }
//     else{
//         cout<<"The number is not divisible by either 5 or 3";
//     }
        
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int x1;
//     cout<<"Enter the 1st number: ";
//     cin>>x1;
//     int x2;
//     cout<<"Enter the 2st number: ";
//     cin>>x2;
//     int x3;
//     cout<<"Enter the 3rd number: ";
//     cin>>x3;  
//     if ((x1+x2)>x3 && (x1+x3)>x2 && (x2+x3)>x1){
//         cout<<"The numbers can be the sides of the triangle";
//     }
//     else{
//         cout<<"The numbers cannot be the sides of the triangle";
//     }
        
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int x1;
//     cout<<"Enter the 1st number: ";
//     cin>>x1;
//     int x2;
//     cout<<"Enter the 2st number: ";
//     cin>>x2;
//     int x3;
//     cout<<"Enter the 3rd number: ";
//     cin>>x3;  
//     if ( x1>x2 && x1>x3){
//         cout<<x1;
//         cout<<" is the greatest of all the 3 numbers";
//     }

//     else if (x2>x1 && x2>x3){
//         cout<<x2;
//         cout<<" is the greatest of all the 3 numbers";
//     }
//     else{
//         cout<<x3;
//         cout<<" is the greatest of all the 3 numbers";
//     }
        
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int x1;
//     cout<<"Enter the 1st number: ";
//     cin>>x1;
//     int x2;
//     cout<<"Enter the 2st number: ";
//     cin>>x2;
//     int x3;
//     cout<<"Enter the 3rd number: ";
//     cin>>x3;  
//     if ( x1<x2 && x1<x3){
//         cout<<x1;
//         cout<<" is the least of all the 3 numbers";
//     }

//     else if (x2<x1 && x2<x3){
//         cout<<x2;
//         cout<<" is the least of all the 3 numbers";
//     }
//     else{
//         cout<<x3;
//         cout<<" is the least of all the 3 numbers";
//     }
        
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;  
//     if ((x%5==0 || x%3==0) and (x%15!=0)){
//         cout<<"The numbers are divisible by 3 or 5 but not 15"
//     } 
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int x1;
//     cout<<"Enter the 1st number: ";
//     cin>>x1;
//     int x2;
//     cout<<"Enter the 2st number: ";
//     cin>>x2;
//     int x3;
//     cout<<"Enter the 3rd number: ";
//     cin>>x3;  
//     if (x1>x2){
//         if (x1>x3){
//             cout<<x1;
//             cout<<" is the greatest";
//         }

//         else{
//             cout<<x3;
//             cout<<" is the greatest";
//         }
//     }
//     else {
//         if (x2>x3){
//             cout<<x2;
//             cout<<" is the greatest";
//         }

//         else{
//             cout<<x3;
//             cout<<" is the greatest";
//         }
//     }
        
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int x1;
//     cout<<"Enter the 1st boy's age: ";
//     cin>>x1;
//     int x2;
//     cout<<"Enter the 2nd boy's age: ";
//     cin>>x2;
//     int x3;
//     cout<<"Enter the 3rd boy's age: ";
//     cin>>x3;  
//     if (x1<x2){
//         if (x1<x3){
//             cout<<x1;
//             cout<<" is the youngest";
//         }

//         else{
//             cout<<x3;
//             cout<<" is the youngest";
//         }
//     }
//     else {
//         if (x2<x3){
//             cout<<x2;
//             cout<<" is the youngest";
//         }

//         else{
//             cout<<x3;
//             cout<<" is the youngest";
//         }
//     }
        
//     }


// ternery operator 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     //(condition) ? if true : if false
//     (n%2==0) ? cout<<"even" : cout<<"odd";
        
//     }



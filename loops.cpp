// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<10; i++){
//         cout<<"Hello World"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<"Hello World"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"The even numbers are"<<endl;
//     for(int i=1; i<=n; i++){
//         if (i%2==0){
//             cout<<i<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"The even numbers are"<<endl;
//     for(int i=1; i<=n; i++){
//         if (i%2==0){
//             cout<<i<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"The table of the number "<<n<<" is: "<<endl;
//     for(int i=n; i<=n*10; i++){
//         if (i%n==0){
//             cout<<i<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number whose AP you want to print: ";
//     cin>>n;
//     cout<<"AP of the number is: "<<endl;

//      for(int i=1; i<=2*n-1; i+=2){
//              cout<<i<<" ";
//          }
//      }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number whose AP you want to print: ";
//     cin>>n;
//     cout<<"AP of the number is: "<<endl;
//     int a=4;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         a = a+3;
//         }
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number whose AP you want to print: ";
//     cin>>n;
//     cout<<"AP of the number is: "<<endl;
//     int a=1;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         a = a*2;
//         }
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number whose AP you want to print: ";
//     cin>>n;
//     cout<<"AP of the number is: "<<endl;
//     int a=3;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         a = a*4;
//         }
//     }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Highest factor of the number is: "<<endl;
//     for(int i=n/2; i>=1; i--){
//         if(n%i==0){
//             cout<<i<<" ";
//             break;
//         }
//         }
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     bool flag = true; // which means the number is prime
//     for(int i=2; i<=n/2; i++){
//         if(n%i==0){
//             flag = false; // this means the number is composite
//             break;
//         }
//     }
//     if (n=1) cout<<"The number is neither prime nor composite" ;
//     else if (flag==true) cout<<"The number is prime";   
//     else cout<<"The number is composite";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     bool flag = true; // which means the number is prime
//     for(int i=2; i<=n/2; i++){
//         if(n%i==0){
//             flag = false; // this means the number is composite
//             break;
//         }
//     }
//     if (n=1) cout<<"The number is neither prime nor composite" ;
//     else if (flag==true) cout<<"The number is prime";   
//     else cout<<"The number is composite";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=4, y=0;
//     while(x>=0){
//         x--;
//         y++;
//         if (x==y){
//             continue;
//         }
//         else{
//             cout<<x<<" "<<y<<endl;
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         n/=10;
//         count++;
//     }
//     cout<<count;
// }

// program to print the sum of digits of a given number 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//         int ld=n%10;
//         n /= 10;
//         sum+=ld;
//     }
//     cout<<sum;
// }


// to print the product of digits of the given number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int prod=1;
//     while(n!=0){
//         int ld=n%10;
//         prod*=ld;
//     }
//     cout<<prod;
// }


//print sum of all even digits 
 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//         int ld=n%10;
//         n /= 10;
//         if (ld%2==0){
//           sum+=ld;
//         }
//     }
//     cout<<sum;
// }

//print the reverse of the given number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int r = 0;
//     while (n!=0){
//         int ld=n%10;
//         r*=10;
//         r+=ld;
//         n/=10;
//     }
//     cout<<r;
// }


//print the factorial of a number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int product = 1;
//     for (int i=1;i<=n;i++){
//         product*=i;
//     }
//     cout<<product;
// }

//print 
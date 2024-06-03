#include<iostream>
using namespace std;
//void print1(int n){
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<n; j++) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//}
//int main(){
//    int n;
//    cout<<"enter the number of rows"<<endl;
//    cin>>n;
//    print1(n);
//}

//void print2(int n){
//    for(int i=0; i<n; i++){
//        for (int j=0; j<=i; j++){
//            
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//}
//int main(){
//    int n;
//    cout<<"enter the no of rows"<<endl;
//    cin>>n;
//    print2(n);
//}


//void print3(int n){
//    for (int i=0; i<n; i++){
//        for (int j=1; j<=i+1; j++){
//            cout<<"* "<<" ";
//        }
//        cout<<endl;
//    }
//}
//
//int main(){
//    int n;
//    cout<<"enter the value of n";
//    cin>>n;
//    
//    print3(n);
//}

//void print4(int n){
//    for (int i=0; i<n; i++){
//        for (int j=0; j<=i; j++){
//            cout<<j<<" ";
//        }
//        cout<<endl;
//    }
//}
//int main(){
//    int n;
//    cout<<"enter the value of n";
//    cin>>n;
//    print4(n);
//}


//void print5(int n){
//    for (int i=0; i<n; i++){
//        for (int j=0; j<=i; j++){
//            cout<<i+1;
//        }
//        cout<<endl;
//    }
//}
//
//int main(){
//    int n;
//    cout<<"enter the value of n";
//    cin>>n;
//    print5(n);
//}

//void print6(int n){
//    for(int i=1; i<=n; i++){
//        for (int j=1; j<=n-i+1; j++){
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//}
//
//int main(){
//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;
//    print6(n);
//}

//void print7(int n){
//    for(int i=1; i<=n; i++){
//        for (int j=1; j<=n-i+1; j++){
//            cout<<j;
//        }
//        cout<<endl;
//    }
//}
//
//int main(){
//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;
//    print7(n);
//}
//
//void print8(int n){
////    for sapce
//    for (int i=0; i<=n; i++){
////        for space
//        for (int j=1; j<=n-i-1; j++){
//            cout<<" ";
//        }
////        satr
//        for (int j=1; j<=2*i+1; j++){
//            cout<<"* ";
//        }
////        space
//        for (int j=1; j<=n-i-1; j++){
//            cout<<" ";
//        }
//        cout<<endl;
//    }
//        
//    
//}
//
//int main(){
//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;
//    print8(n);
//}


//void print9(int n){
////    for sapce
//    for (int i=0; i<n; i++){
////        for space
//        for (int j=0; j<i; j++){
//            cout<<" ";
//        }
////        satr
//        for (int j=0; j<2*n-(2*i+1); j++){
//            cout<<"* ";
//        }
////        space
//        for (int j=0; j<i; j++){
//            cout<<" ";
//        }
//        cout<<endl;
//    }
//
//
//}
//
//int main(){
//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;
//    print8(n);
//    print9(n);
//}


//void print8(int n){
////    for sapce
//    for (int i=0; i<=n; i++){
////        for space
//        for (int j=1; j<=n-i-1; j++){
//            cout<<" ";
//        }
////        satr
//        for (int j=1; j<=2*i+1; j++){
//            cout<<"* ";
//        }
////        space
//        for (int j=1; j<=n-i-1; j++){
//            cout<<" ";
//        }
//        cout<<endl;
//    }
//        
//}
//void print9(int n){
////    for sapce
//    for (int i=0; i<n; i++){
////        for space
//        for (int j=0; j<i; j++){
//            cout<<" ";
//        }
////        satr
//        for (int j=0; j<2*n-(2*i+1); j++){
//            cout<<"* ";
//        }
////        space
//        for (int j=0; j<i; j++){
//            cout<<" ";
//        }
//        cout<<endl;
//    }
//
//
//}
//
//int main(){
//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;
//    print8(n);
//    print9(n);
//}

//void pattern10(int N)
//{
//      for(int i=1;i<=2*N-1;i++){
//          int stars = i;
//          if(i>N) stars = 2*N-i;
//          for(int j=1;j<=stars;j++){
//              cout<<"*";
//          }
//          cout<<endl;
//      }
//}
//
//int main()
//{
//    int N;
//    cout<<"enter the value of N"<<endl;
//    cin>>N;
//    pattern10(N);
//
//    return 0;
//}

//void print11(int n){
//    
//    int start=1;
//    
//    for (int i=0; i<n; i++){
////        condition for printing the given number
//        if(i%2==0) start=1 ;
//        
//        else start=0 ;
//        
//        for(int j=0; j<=i; j++){
//            cout<<start;
//            start=1-start;
//        }
//        cout<<endl;
//    }
//}
//
//int main(){
//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;
//    print11(n);
//}



# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

    if (op=='+'){
        cout<<num1+num2<<endl;
    }

    else if (op=='-'){
        cout<<num1-num2<<endl;
    }
    
    else if (op=='*'){
        cout<<num1*num2<<endl;
    }
    
    else if (op=='/'){
        cout<<num1/num2<<endl;
    }
    
//    else;
//    cout<<"you've entered something invalid number"<<endl;
  return 0;
}

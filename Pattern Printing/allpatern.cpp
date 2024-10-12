#include<iostream>
using namespace std;
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();
void pattern9();
void pattern10();
void pattern11();
void pattern12();
void pattern13();
void pattern14();
void pattern15();
int main(){
    int no_of_pattern;
    cout << endl;
    cout << "Select which pattern you want to print from below list:\n";
    cout << endl;
    cout << "1. Square Pattern." << endl;
    cout << endl;
    cout << "2. Number Square Pattern." << endl;
    cout << endl;
    cout << "3. Another Number Square Pattern." << endl;
    cout << endl;
    cout << "4. Inverted Number Square Pattern." << endl;
    cout << endl;
    cout << "5. Counting Square Pattern." << endl;
    cout << endl;
    cout << "6. 90 Degree Triangle Pattern." << endl;
    cout << endl;
    cout << "7. 90 Degree Counting Triangle Pattern." << endl;
    cout << endl;
    cout << "8. 90 Degree Inverted Counting Triangle Pattern." << endl;
    cout << endl;
    cout << "9. Alphabetic Square Pattern." << endl;
    cout << endl;
    cout << "10. Alphabetic Triangle Pattern." << endl;
    cout << endl;
    cout << "11. Inverted Alphabetic Triangle Pattern." << endl;
    cout << endl;
    cout << "12. Right Angle Inverted Character Triangle Pattern." << endl;
    cout << endl;
    cout << "13. Right Angle Reverse Character Triangle Pattern." << endl;
    cout << endl;
    cout << "14. Number Pyramid Pattern." << endl;
    cout << endl;
    cout << "15. Dabangg Pattern." << endl;
    cout << endl;
    cin >> no_of_pattern;
    cout << endl;
 switch (no_of_pattern)
    {
    case 1:
        pattern1();
        break;

    case 2:
        pattern2();
        break;

    case 3:
        pattern3();
        break;

    case 4:
        pattern4();
        break;

    case 5:
        pattern5();
        break;

    case 6:
        pattern6();
        break;

    case 7:
        pattern7();
        break;

    case 8:
        pattern8();
        break;

    case 9:
        pattern9();
        break;

    case 10:
        pattern10();
        break;

    case 11:
        pattern11();
        break;

    case 12:
        pattern12();
        break;

    case 13:
        pattern13();
        break;

    // case 14:
    //     pattern14();
    //     break;

    // case 15:
    //     pattern15();
    //     break;

    default:
        cout << "Invalid Number, please select a number from above given list :)" << endl;
        cout << endl;
    }
return 0;
}
// Function
// Patern :1
void pattern1(){
    int n; // square pattern
cout<<"Enter the value of n:";
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"*"<<" ";
    }
    cout<<"\n";
}
}
void pattern2(){
    // Number Square Pattern
      int n;
    cout<<"Enter the value of the n:";
    cin>>n;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<i;
        }
        cout<<"\n";
    }
}
void pattern3(){
     // Number Square Pattern - Part 2
     cout<<"Enter the value of n: "<<endl;
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
     }
}

void pattern4(){
    // Inverted Number Square Pattern
    cout<<"Enter the side  of the square: "<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<n-j+1<<" ";
        }
        cout<<"\n";
    }
}
void pattern5(){
    //Counting Square Pattern.
    int counter=1;
    cout<<"Enter the side  of the square: "<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<"\n";
    }
}
void pattern6(){
    // Right angled triangle
    cout<<endl;
    int height;
    char ch;
    cout<<"Enter the height of the triangle: "<<endl;
    cin>>height;
    cout<<"Enter the symbol of which you want to print patter: "<<endl;
    cin>>ch;
    for(int i=1;i<=height;i++){
        for(int j=1;j<=i;j++){
           cout<<ch<<" ";
        }
        cout<<"\n";
    }
    
}
void pattern7(){
    // Counting right angled triangle
    cout<<endl;
    int height;
    cout<<"Enter the height of the triangle: "<<endl;
    cin>>height;
    for(int i=1;i<=height;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}
void pattern8(){
    // inverted counting right angled triangle
    cout<<endl;
    int height;
    cout<<"Enter the height of the triangle: "<<endl;
    cin>>height;
    for(int i=1;i<=height;i++){
        int num = i;
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }

}
void pattern9(){
    // Alphabetic Square Pattern
    cout<<endl;
    int side;
    cout<<"enter the side of the square"<<endl;
    cin>>side;
    char alpha = 'A';
    for(int i=1;i<=side;i++){
        for(int j=1;j<=side;j++){
            cout<<alpha<<" ";
        }
        alpha++;
        cout<<"\n";
    }
}
void pattern10(){
    // Alphabetic Triangle Pattern
    cout<<endl;
    int height;
    cout<<"enter the height of the triangle"<<endl;
    cin>>height;
    cout<<endl;
    char alpha = 'A';
    for(int i=1;i<=height;i++){
        for(int j=1;j<=i;j++){
            cout<<alpha<<" ";
        }
        alpha++;
        cout<<endl;
    }
}
void pattern11(){
     // Inverted Alphabetic Triangle Pattern
     cout<<endl;
    int height;
    cout<<"enter the height of the triangle"<<endl;
    cin>>height;
    char alpha = 'A',value;
    for(int i=1;i<=height;i++){
        value = alpha+ height -i;
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
        }
        cout<<endl;
    }
}
void pattern12(){
    // Inverted Right Angle Character Triangle Pattern
    cout<<endl;
    int height;
    char s;
    cout<<"Enter the height of the triangle"<<endl;
    cin>>height;
    cout<<"Enter the symbol you want to print pattern"<<endl;
    cin>>s;
    for(int i=1;i<=height;i++){
        for(int j=1;j<=(height-i);j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<s<<" ";
        }
        cout<<endl;
    }
}
void pattern13(){
    // Reverse Right Angle Character Triangle Pattern
    cout<<endl;
    int height;
    char s;
    cout<<"Enter the height of the triangle"<<endl;
    cin>>height;
    cout<<"Enter the symbol you want to print pattern"<<endl;
    cin>>s;
    for(int i=1;i<=height;i++){
        for(int k=height;k>=i;k--){
            cout<<s<<" ";
        }
        cout<<endl;
    }
}

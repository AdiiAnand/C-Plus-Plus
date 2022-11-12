# include<iostream>
# include <conio.h>
 
class ClassB;  
class ClassA 
{  
 public:  
        // constructor ClassA() to initialize num1 to 12  
        ClassA()  
        {  
            num1 =12;  
                  
        }  
          
    private:  
        int num1;  // declaration of integer variable  
         // friend function declaration  
         friend int multiply(ClassA, ClassB);  
};  
class ClassB 
{  
public:  
        // constructor ClassB() to initialize num2 to 2  
        ClassB()    
        {  
            num2 = 2;  
        }  
    private:  
        int num2;  // declaration of integer variable  
 // friend function declaration  
        friend int multiply(ClassA, ClassB);  
};  
  // access members of both classes  
int multiply(ClassA object1, ClassB object2)   
{  
    return (object1.num1 * object2.num2);  
}  
  void main() 
{  
    ClassA object1;   // declaration of object of ClassA  
    ClassB object2;   // declaration of object of ClassB  
    cout<<"Result after multiplication of two numbers is : " << multiply, object2;  
    getch();  
}  

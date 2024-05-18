#include<bits/stdc++.h>
using namespace std;

class Base
{
private:
    int x_private;
protected:
    int x_protected;
public:
    int x_public;
    Base():Base(0,0,0){}
    Base(int a,int b,int c):x_private(a),x_protected(b),x_public(c){}
    
    void display(){cout<<"display() inside Base is called.\n"; }

    void show(){
        cout<<x_private<<" "<<x_protected<<" "<<x_public<<"\n";
    }
    void set_private_x_base(int x_private){ this->x_private=x_private;}
};

//By default a class is inherited as PRIVATE;
class Derived_public:public Base
{
public:
    Derived_public():Base(0,0,0){}
    Derived_public(int x,int y,int z):Base(x,y,z){}
    void set_dx(int a){x_protected=a;}
};

class Derived_protected:protected Base
{
public:
    Derived_protected():Base(0,0,0){}
    Derived_protected(int x,int y,int z):Base(x,y,z){}
    void set_dx(int a){x_protected=a;}
};

class Derived_private:private Base
{
public:
    Derived_private():Base(0,0,0){}
    Derived_private(int x,int y,int z):Base(x,y,z){}
    
    void set_protected_dx(int a){x_protected=a;}
    //x_protected is Private for Derived_private class objects
    //but in Base class it's protected.So Derived class of the Base class can directly access x_protected.

    void set_private_xFrom_derived(int a){ set_private_x_base(a);}
    //Derived class can access: public and protected fields of Base class directly.But 
    //we need to access Private fields of Base class through public/protected functions of Base class from Derived class
    
    void display(){cout<<"display() inside Derived is called.\n"; }
};
//===========================================
void show_acordingly(Base &A)
{
    A.display();
}

int main()
{
    Derived_public obj_public(1,2,3);
    obj_public.set_dx(100);
    obj_public.show();

    Derived_protected obj_protected(11,22,33);
    obj_protected.set_dx(100);
    //obj_protected.show(); //error as show() was public in Base but Protected in Derived class

    Derived_private obj_private(12,23,34);
    obj_private.set_protected_dx(123);
    obj_private.set_private_xFrom_derived(1234);

    show_acordingly(obj_public);//base
    //display() function inside should be Derived class's
    //but here Base class function is called through reference.
    //to solve this problem: Virtual(normal virtual function:  " virtual returnType FunctionName(){}" ) function is used.

    return 0;
}
/*
 accessibility of member of a class
 there are two ways of accessing members of a class in another class.

i)  by inheriting  :                            isA
ii) by defining class object.                   hasA



class rectangle{
    public:
    int length;
    int breadth;
    void display(){
        cout<<length<<" "<<breadth<<endl;
    }
};

class cube :public rectangle{          // i)   isA
    public:                        
    int height;
};

class table{
    rectangle r1;        //   ii)      hasA
    int legs;
};

*/
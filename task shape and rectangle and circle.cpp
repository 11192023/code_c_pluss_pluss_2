#include<iostream>
#include<cmath>
using namespace std;
class Shape{
    protected:
     string color;
     bool filled;
    public:
     Shape(){
         this->color="red";
         this->filled=true;
     }
     Shape(string color,bool filled){
         this->color=color;
         this->filled=filled;
     }
     virtual double getArea(){
         return 0;
     }
     virtual double getPerimeter(){
         return 0;
     }
     friend istream&operator>>(istream &in,Shape &shape);
     friend ostream&operator<<(ostream &os,const Shape  &shape);
};
istream&operator>>(istream&in,Shape &shape){
    cout<<"enter of the color:"<<endl;
    in>>shape.color;
    cout<<"is it filled (1 is true or 0 is false):"<<endl;
    in>>shape.filled;
    return in;
}
ostream&operator<<(ostream&os,const Shape&shape){
    os<<"color: "<<shape.color<<endl;
    os<<"filled: "<<(shape.filled?"true":"false")<<endl;
    return os;
}
class Circle:public Shape{
    protected:
    double radius;
    public:
    Circle(){
    	this->radius=1.0;
	} 
	Circle(double radius){
		this->radius=radius;
	}
    Circle(string color,bool filled,double radius):
    Shape(color,filled),radius(radius){}
    double getArea(){
        return pow(radius,2)*3.14;
    }
    double getPerimeter(){
        return 2*radius*3.14;
    }
  friend istream&operator >>(istream&in,Circle&circle);
  friend ostream&operator<<(ostream&os,const Circle&circle);
};
istream &operator>>(istream&in,Circle&circle){
    in>>static_cast<Shape&>(circle);
    cout<<"enter radius: ";
    in>>circle.radius;
    return in;
}
ostream&operator<<(ostream&os,const Circle&circle){
    os<<static_cast<const Shape&>(circle);
    os<<"radius: "<<circle.radius;
    return os;
}
class Rectangle:public Shape{
    protected:
    double width;
    double height;
    public:
    Rectangle(){
    	this->width=1.0;
    	this->height=1.0;
	}
	Rectangle(double width,double length){
		this->width=width;
		this->height=length;
	}
    Rectangle(string color,bool filled,double width,double length):
    Shape(color,filled),width(width),height(length){}
    double getArea(){
        return width*height;
    }
    double getPerimeter(){
        return 2*(width*height);
    }
    friend istream&operator>>(istream&in,Rectangle&rectangle);
    friend ostream&operator <<(ostream&os,const Rectangle&rectangle);
};
istream&operator >>(istream&in,Rectangle&rectangle){
    in>>static_cast<Shape&>(rectangle);
    cout<<"width: ";
    in>>rectangle.width;
    cout<<"height: ";
    in>>rectangle.height;
    return in;
}
ostream&operator<<(ostream&os,const Rectangle&rectangle){
    os<<static_cast<const Shape&>(rectangle);
    os<<"wedth: "<<rectangle.width;
    os<<"height: "<<rectangle.height;
    return os;
}
void computetheareaandperimeter(Shape **shape,int n){
    for(int i=0;i<n;i++){
    	Circle*circle=dynamic_cast<Circle*>(shape[i]);
    	Rectangle*rectangle=dynamic_cast<Rectangle*>(shape[i]);
    	if(circle!=nullptr){
    		cout<<"area circle: "<<circle->getArea()<<endl;
    		cout<<"perimeter circle: "<<circle->getPerimeter()<<endl;
		}else if(rectangle!=nullptr){
			cout<<"area rectangle: "<<rectangle->getArea()<<endl;
			cout<<"perimeter rectangle: "<<rectangle->getPerimeter()<<endl;
		}
	}
}
int main(){
	cout<<"enter of the quanlity:"<<endl;
	int size;
	cin>>size;
	Shape**shape=new Shape*[size];
	for(int i=0;i<size;i++){
		char choice;
		cout<<"choice shape type(C and c is circle or R and r is rectangle"<<endl;
		cin>>choice;
		switch(choice){
			case 'C':
			case 'c':
				shape[i]=new Circle();
				cin>>*(static_cast<Circle*>(shape[i]));
				break;
			case 'R':
			case 'r':
			    shape[i]=new Rectangle();
			    cin>>*(static_cast<Rectangle*>(shape[i]));
			    break;
			default:
				cout<<"invalid choice"<<endl;
				i--;
				break;
		}
	}
	computetheareaandperimeter(shape,size);
	for(int i=0;i<size;i++){
		cout<<*shape[i];
	}
	for(int i=0;i<size;i++){
		delete shape[i];
	}
	delete[] shape;
    return 0;
    
}


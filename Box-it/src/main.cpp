#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    public:
        Box():l(0),b(0),h(0){l = 0;b = 0;h = 0;}
        Box(int c,int d,int e){l = c;b = d; h = e;}
        Box(Box &lhs){ l = lhs.l; b = lhs.b; h = lhs.h;}
        int getLength() const {return l;}
        int getBreadth() const {return b;}
        int getHeight() const {return h;}
        long long CalculateVolume(){return (long long)l*b*h;}
        bool operator < (Box &B){
            if(l < B.l){
                return true;
            }
            if((b < B.b) && (l == B.l)){
                return true;
            }
            if((h < B.h) && (l == B.l) && (b == B.b)){
                return true;
            }
            return false;
        }
    private:
        int l,b,h;
};
ostream& operator<<(ostream &os, const Box& obj)
{
    return os <<obj.getLength() <<" " <<obj.getBreadth() <<" " <<obj.getHeight();
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
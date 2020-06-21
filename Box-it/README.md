# Box It!

Design a class named Box whose dimensions are integers and private to the class. The dimensions are
labelled: length ***l***, breadth ***b***, and height ***h***.
The default constructor of the class should initialize ***l***, ***b***, and ***h*** to **0**.
The parameterized constructor Box(int length, int breadth, int height) should initialize Box's  ***l*** ***,*** , ***b***  and ***h*** to
length, breadth and height.
The copy constructor Box**(** Box ***B* )** should set ***l***, ***b*** and ***h***  to ***B***'s ***l**, ***b*** and ***h***, respectively.
Apart from the above, the class should have functions:
- _int getLength()_ - Return box's length
- _int getBreadth()_ - Return box's breadth
- _int getHeight()_ - Return box's height
- _long long CalculateVolume()_ - Return the volume of the box

Overload the operator **<** for the class Box. Box ***A* <** Box ***B*** if:

1. ***A.l*** < ***B.l***
2. ***A.b*** < ***B.b*** and ***A.l*** == ***B.l***
3. ***A.h*** < ***B.h*** and  ***A.b*** == ***B.b*** and ***A.l*** == ***B.l***

Overload operator ***<<***  for the class Box().
If ***B*** is an object of class Box:

***cout << B*** should print ***B.l,B.b*** and ***B.h*** on a single line separated by spaces.

**Constraints**
**0<= *l,b,h* <= 10<sup>5</sup>**
Two boxes being compared using the **<** operator will not have all three dimensions equal.



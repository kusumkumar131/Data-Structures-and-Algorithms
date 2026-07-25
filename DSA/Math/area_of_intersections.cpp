//area of intersection of two circles
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    double r1,r2,d;
    cout<<"Enter radius of first circle: ";
    cin>>r1;
    cout<<"Enter radius of second circle: ";
    cin>>r2;
    cout<<"Enter distance between centers of circles: ";
    cin>>d;

    if(d>=r1+r2){
        cout<<"The circles do not intersect."<<endl;
        return 0;
    }
    if(d<=abs(r1-r2)){
        cout<<"One circle is completely inside the other."<<endl;
        return 0;
    }
//formula for area of intersection of two circles
    double part1 = r1*r1*acos((d*d + r1*r1 - r2*r2)/(2*d*r1));
    double part2 = r2*r2*acos((d*d + r2*r2 - r1*r1)/(2*d*r2));
    double part3 = 0.5*sqrt((-d+r1+r2)*(d+r1-r2)*(d-r1+r2)*(d+r1+r2));

    double intersection_area = part1 + part2 - part3;

    cout<<"Area of intersection: "<<intersection_area<<endl;
    return 0;
}
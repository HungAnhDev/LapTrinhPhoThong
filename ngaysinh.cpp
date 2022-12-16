#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int d, m, y, day; 

    cin>>d;
    cin>>m;
    cin>>y;

    switch(m)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            day=30;
            break;
        case 2:
            day=28+((y%4==0 && y%100!=0) || y%400==0);
            break;
        default:
            day=31;
    }

    y -= (14-m)/12;
    m += 12*((14-m)/12)-2;
    day = (d + y + y/4 - y/100 + y/400 + (31*m)/12)%7;

            if (day + 1 == 2) {    
                cout<<"Monday";    
            }    
            else if (day + 1 == 3) {    
                cout<<"Tuesday";    
            }    
            else if (day + 1 == 4) {    
                cout<<"Wednesday";    
            }    
            else if (day + 1 == 5) {    
                cout<<"Thursday";    
            }    
            else if (day + 1 == 6) {    
                cout<<"Friday";    
            }    
            else if (day + 1 == 7) {    
                cout<<"Saturday";    
            }    
            else
            {
             cout<<"Sunday";
            }    


    return 0;
}

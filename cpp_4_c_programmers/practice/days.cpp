#include<iostream>
#include<fstream>

typedef enum days {
                   SUNDAY, 
                   MONDAY, 
                   TUESDAY, 
                   WEDNESDAY, 
                   THURSDAY, 
                   FRIDAY,
                   SATURDAY
                  } days;

inline days operator++
(days d)
{
    return static_cast<days>((static_cast<days>(d) + 1) % 7);
}

std::ostream& operator<<
(std::ostream& out, const days& d)
{
    switch(d)
    {
        case(MONDAY):
            out << "MONDAY";
            break;
        case(TUESDAY):
            out << "TUESDAY";
            break;
        case(WEDNESDAY):
            out << "WEDNESDAY";
            break;
        case(THURSDAY):
            out << "THURSDAY";
            break;
        case(FRIDAY):
            out << "FRIDAY";
            break;
        case(SATURDAY):
            out << "SATURDAY";
            break;
        case(SUNDAY):
            out << "SUNDAY";
            break;
        default:
            break;
    }
    return out;
}

void print_day
(days d)
{
    switch(d)
    {
        case(SUNDAY):
            std::cout << "Today is Sunday" << std::endl;
            break;
        case(MONDAY): 
            std::cout << "Today is Monday" << std::endl;
            break;
        case(TUESDAY):
            std::cout << "Today is Tuesday" << std::endl;
            break;
        case(WEDNESDAY):
            std::cout << "Today is Wednesday" << std::endl;
            break;
        case(THURSDAY):
            std::cout << "Today is Thursday" << std::endl;
            break;
        case(FRIDAY):
            std::cout << "Today is Friday" << std::endl;
            break;
        case(SATURDAY):
            std::cout << "Today is Saturday" << std::endl;
            break;
        default:
            break;
    }
}


int main()
{

    days my_day = SUNDAY;
    for(int i = 0; i < 7; ++i)
    {
        print_day(++my_day);
        std::cout << "my_day = " << my_day << std::endl;
    }

    return 0;
}

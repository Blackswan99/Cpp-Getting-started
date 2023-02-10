#include <iostream>
#include <iomanip>

void print_header(){
    int col_width{7};
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';    
}

unsigned int print_month(int start_x, int days_of_month){
    print_header();
    if (start_x < 8){
        for (int j{1}; j < start_x; ++j){
            std::cout << std::setw(7) << " ";
        }
    }
    int x = start_x;
    for (int i{1}; i < days_of_month+1; ++i){
        
        std::cout << std::setw(7) << i;
        x++;
        if (x > 7 && i < days_of_month) { x -= 7; std::cout << '\n'; }
    }
    std::cout << '\n' << '\n';
    return x;
}

int main(){
    int col_width{7};
    int x{};
    int year{};
    int first_day_of_the_year{};
    std::cout << "Enter a year : ";
    std::cin >> year;
    std::cout << "Enter the first day of the year [1: Monday, ... 7:Sunday]: ";
    std::cin >> first_day_of_the_year;
    
    std::cout << "-- January " << year << " -- " << '\n';
    x = print_month(first_day_of_the_year, 31);
    std::cout << "-- February " << year << " -- " << '\n';
    x = print_month(x, 28);
    std::cout << "-- March " << year << " -- " << '\n';
    x = print_month(x, 31);
    std::cout << "-- April " << year << " -- " << '\n';
    x = print_month(x, 30);
    std::cout << "-- May " << year << " -- " << '\n';
    x = print_month(x, 31);
    std::cout << "-- June " << year << " -- " << '\n';
    x = print_month(x, 30);
    std::cout << "-- July " << year << " -- " << '\n';
    x = print_month(x, 31);
    std::cout << "-- August " << year << " -- " << '\n';
    x = print_month(x, 31);
    std::cout << "-- September " << year << " -- " << '\n';
    x = print_month(x, 30);
    std::cout << "-- October " << year << " -- " << '\n';
    x = print_month(x, 31);
    std::cout << "-- November " << year << " -- " << '\n';
    x = print_month(x, 30);
    std::cout << "-- December " << year << " -- " << '\n';
    x = print_month(x, 31);
    return 0;
}

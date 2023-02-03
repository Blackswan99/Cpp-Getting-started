#include <iostream>
#include <iomanip>

unsigned int print_month(int start_x, int days_of_month){
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
    return x;
}

int main(){
    int col_width{7};
    int x{};
    int year{2023};
    std::cout << "--January " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(7, 31);
    std::cout << '\n' << '\n';
    std::cout << "--February " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 28);
    std::cout << '\n' << '\n';
    std::cout << "--March " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 31);
    std::cout << '\n' << '\n';
    std::cout << "--April " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 30);
    std::cout << '\n' << '\n';
    std::cout << "--May " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 31);
    std::cout << '\n' << '\n';
    std::cout << "--June " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 30);
    std::cout << '\n' << '\n';
    std::cout << "--July " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 31);
    std::cout << '\n' << '\n';
    std::cout << "--August " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 31);
    std::cout << '\n' << '\n';
    std::cout << "--September " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 30);
    std::cout << '\n' << '\n';
    std::cout << "--October " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 31);
    std::cout << '\n' << '\n';
    std::cout << "--November " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 30);
    std::cout << '\n' << '\n';
    std::cout << "--December " << year << " -- " << '\n';
    std::cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tue" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thu" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << '\n';
    x = print_month(x, 31);
    return 0;
}

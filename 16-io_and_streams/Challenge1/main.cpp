// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
        { "                 Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };
    
    const int total_width {70};
    const int field1_width {20}; // County name
    const int field2_width {20}; // City Name
    const int field3_width {15}; // Population
    const int field4_width {15}; // Cost
    
    
    // Formatted display
    int title_length = tours.title.length();
    std::cout << std::setw((total_width - title_length)/2) << "" << tours.title << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(field1_width) << std::left << "Country"
              << std::setw(field2_width) << std::left << "City"
              << std::setw(field3_width) << std::right << "Population"
              << std::setw(field4_width) << std::right << "Price"
              << std::endl;
              
    std::cout << std::setw(total_width)
              << std::setfill('-')
              << std::endl;
              
    std::cout << std::setfill(' ');
    std::cout << std::setprecision(2) << std::fixed;
    
    for(Country country : tours.countries) {
        for(size_t i=0; i<country.cities.size(); ++i) {       // loop through the cities for each country
            std::cout << std::setw(field1_width) << std::left << ((i == 0) ? country.name : "")
                      << std::setw(field2_width) << std::left << country.cities.at(i).name
                      << std::setw(field3_width) << std::right << country.cities.at(i).population
                      << std::setw(field4_width) << std::right << country.cities.at(i).cost
                      << std::endl;
        }
    }

//    std::cout << std::endl << std::endl;
    return 0;
}
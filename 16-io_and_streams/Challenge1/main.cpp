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

    // Formatted display
    std::cout << std::setw(64) << std::left << tours.title << std::endl;
    std::cout << std::setw(10) << std::left << " Country"
    << "\t" << std::setw(14) << std::left << "     City" 
    << "\t" << std::setw(8) << std::left << "Population" 
    << "\t" << std::setw(10) << std::left << "     Cost" << std::endl;
    for(auto country : tours.countries) {   // loop through the countries
        std::cout << std::setw(10) << std::left << country.name << std::endl;
        for(auto city : country.cities) {       // loop through the cities for each country
            std::cout << std::setw(11) << std::right 
                          << "\t" << std::setw(14) << std::right << city.name 
                          << "\t" << std::setw(11) << std::right << city.population 
                          << "\t" << std::setw(10) << std::right << "$" << city.cost 
                          << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}
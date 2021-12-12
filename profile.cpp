#include <iostream>
#include <string>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) : name(new_name), age( new_age), city(new_city), country(new_country), pronouns(new_pronouns) {}

 std::string Profile::view_profile() {

    std::string hobby, hobby_list;

    for (std::string hobby : hobbies) {
      hobby_list = hobby_list + hobby + " ";
    }

    return name + "\n" + 
    std::to_string(age) + "\n" +
    city + "\n" + 
    country + "\n" +
    pronouns + "\n" +
    hobby_list + "\n";

}

void Profile::add_hobby(std::string new_hobby) {

  hobbies.push_back(new_hobby);

}


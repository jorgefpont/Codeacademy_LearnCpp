#include <string>
#include <vector>

class Profile {

private:
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;  
  //store values as strings

public:
  Profile(std::string new_name, 
          int new_age,
          std::string city,
          std::string country,
          std::string pronouns = "they/them");

  std::string view_profile();
  void add_hobby(std::string new_hobby);
  
};
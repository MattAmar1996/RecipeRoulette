#include <iostream>
#include "recipe.hpp"

Recipe::Recipe():
    ingredientList{"Sugar", "Butter", "Flour", "Eggs", "Baking Soda"},
    prepTime{30},
    recipeName{""}
{
    //Nothing here
}

Recipe::Recipe(int prepTime, std::string recipeName) {
setPrepTime(prepTime);
setRecipeName(recipeName);
}

 int Recipe::getPrepTime() {
    return prepTime;
}

 void Recipe::setPrepTime(int prepTime) {
     this->prepTime = prepTime;
 }

 void Recipe::setRecipeName(std::string recipeName) {
     this->recipeName = recipeName;
 }

 std::string Recipe::getRecipeName() {
     return recipeName;
 }

 void Recipe::addIngredient(std::string addIng) {
     std::vector<std::string>::iterator it;
     for (it = ingredientList.begin(); it <= ingredientList.end(); it++) {
         if (addIng == *it) {
             std::cout<<"Ingredient already exists in recipe!" << "\n";
             return;
         }
     }
     std::cout<<"Added ingredient to recipe!" << "\n";
     ingredientList.push_back(addIng);
 }

 void Recipe::removeIngredient(std::string remIng) {
     std::vector<std::string>::iterator it;
     for (it = ingredientList.begin(); it <= ingredientList.end(); it++) {
         if (remIng == *it) {
             it = ingredientList.erase(it);
         }
     }
 }

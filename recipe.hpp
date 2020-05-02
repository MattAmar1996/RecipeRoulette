#ifndef RECIPE_HPP
#define RECIPE_HPP
#include <string>
#include <vector>

class Recipe
{
public:
    Recipe();
    explicit Recipe(std::vector<std::string> ingredientList);
    class Ingredient {
    public:
        explicit Ingredient(std::string recipeName);
        std::string recipeName;
    };

    void addIngredient(std::string addIng); //Add an ingredient

    void removeIngredient(std::string remIng); // Remove an ingredient

    std::vector<std::string> getIngredientList(); // Returns a vector of all ingredients

    void setPrepTime(int time); //Set prep time

    int getPrepTime(); // return an integer prep time

    std::string getRecipeName();

    void setRecipeName(std::string recipeName);

private:
    std::vector<std::string> ingredientList; // List of all ingredients that the recipe requires
    int prepTime; // in minutes
    std::string recipeName;
};

#endif // RECIPE_HPP

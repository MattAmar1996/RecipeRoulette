#ifndef RECIPEROULETTE_HPP
#define RECIPEROULETTE_HPP
#include <recipe.hpp>


class RecipeRoulette
{
public:
    RecipeRoulette();

    Recipe pickARandomRecipe(); //Main function which returns a single recipe from a database recipe

    void filterRecipes(Recipe::Ingredient ingredient); // Search the filtered recipes for all recipes that use the ingredient

    bool areAnyRecipesComplete(Recipe recipeList[]); //Returns true if the user has all the ingredients in any recipe in the list

private:
    Recipe m_RecipeList[5];
};

#endif // RECIPEROULETTE_HPP

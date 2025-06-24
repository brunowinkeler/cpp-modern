#include <iostream>

#include "generics.h"

int main()
{
    std::cout << "functionTemplates" << std::endl;
    functionTemplates();

    std::cout << "\n\n" << "classTemplate" << std::endl;
    classTemplate();

    std::cout << "\n\n" << "pair" << std::endl;
    pair();

    std::cout << "\n\n" << "defaultBox" << std::endl;
    defaultBox();

    std::cout << "\n\n" << "explicitSpecialization" << std::endl;
    explicitSpecialization();

    std::cout << "\n\n" << "partialSpecialization" << std::endl;
    partialSpecialization();

    std::cout << "\n\n" << "nonTypeTemplateParameters" << std::endl;
    nonTypeTemplateParameters();

    std::cout << "\n\n" << "templatesAndInheritance" << std::endl;
    templatesAndInheritance();

    std::cout << "\n\n" << "dependentTypes" << std::endl;
    dependentTypes();

    std::cout << "\n\n" << "templateAliases" << std::endl;
    templateAliases();

    std::cout << "\n\n" << "variadicTemplates" << std::endl;
    variadicTemplates();

    std::cout << "\n\n" << "conceptsCpp20" << std::endl;
    conceptsCpp20();
    return 0;
}
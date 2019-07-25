#include "cpp_code/knockout.h"
#include <sstream>

std::string choosePreference(std::vector<std::string> i_title, std::istream& i_istream)
{
    if(i_title.size() == 1)
    {
        return i_title[0];
    }
    else
    {
        unsigned int preference;
        std::cout << "\nChoose between the following titles by selecting the number: " << std::endl;
        for(unsigned int title_index = 0; title_index < i_title.size(); title_index++)
        {
            std::cout << title_index+1 << ": " << i_title[title_index] << std::endl;
        }
        i_istream >> preference;
       
        std::cout << "Your choice: " << i_title[preference-1] << std::endl;
        return i_title[preference-1];
    }
}



std::vector<std::vector<std::string>> makePackages(std::vector<std::string> i_titles,
                                                   unsigned int i_sizeOfPackages)
{
    std::vector<std::vector<std::string>> packedTitles;
    std::vector<std::string> package;
    while(!i_titles.empty())
    {
        package.push_back(i_titles[0]);
        i_titles.erase(i_titles.begin());
        if(package.size() == i_sizeOfPackages)
        {
           packedTitles.push_back(package);
           package.clear();
        }
    }

    if(!package.empty())
    {
        packedTitles.push_back(package);
    }

    return packedTitles;
}

std::vector<std::string> playOneLevel(std::vector<std::string> i_titles, std::istream& i_istream,
                                      unsigned int i_sizeOfPackages)
{
    std::vector<std::vector<std::string>> packedTitles = makePackages(i_titles, i_sizeOfPackages);
    std::vector<std::string> titlesForNextLevel;
    while(!packedTitles.empty())
    {
        titlesForNextLevel.push_back(choosePreference(packedTitles[0], i_istream));
        packedTitles.erase(packedTitles.begin());
    }
    return titlesForNextLevel;
}

std::string playAllLevels(std::vector<std::string> i_titles, std::istream& i_istream)
{
    std::vector<std::string> activeTitles = i_titles;
    unsigned int levelNumber = 0;
    while(activeTitles.size() > 1)
    {
        levelNumber++;
        std::cout << "*************************************************************" << std::endl;
        std::cout << "Level " << levelNumber << " selection" << std::endl;
        activeTitles = playOneLevel(activeTitles, i_istream);
    }
    std::cout << "Enjoy the movie!" << std::endl;
    return activeTitles[0];
}

std::vector<std::string> selectTitlesFromTSVFile(std::istream& i_istream, unsigned int i_amountOfTitles)
{
    std::vector<std::string> titles;
    std::string contentOfRow;
    for(int rowIndex = 0; rowIndex < i_amountOfTitles; rowIndex++)
    {
        std::getline(i_istream, contentOfRow);
        std::stringstream contentBuffer (contentOfRow);
        std::string tempColumnEntry;
        std::vector<std::string> cleanContentOfRow;
        while(std::getline(contentBuffer, tempColumnEntry, '\t') )
        {
            cleanContentOfRow.push_back(tempColumnEntry);
        }
        titles.push_back(cleanContentOfRow[2]);
    }
    return titles;
}

std::string mainRoutine(std::istream& i_titleDatabase, std::istream& i_selectionMode)
{
    //remove the headers from the Database
    std::string headers;
    std::getline(i_titleDatabase, headers);

    std::vector<std::string> titlesFromDatabase = selectTitlesFromTSVFile(i_titleDatabase);
    std::string favouriteTitle = playAllLevels(titlesFromDatabase, i_selectionMode);
    return favouriteTitle;
}





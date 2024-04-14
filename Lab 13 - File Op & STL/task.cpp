#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

bool scoreComparator(std::pair<std::string, int> p1, std::pair<std::string, int> p2)
{
    return p1.second > p2.second;
}

bool nameComparator(std::pair<std::string, int> p1, std::pair<std::string, int> p2)
{
    return p1.first < p2.first;
}

std::vector<std::pair<std::string, int>> readFile(std::string filename)
{
    std::ifstream inputFile(filename);
    std::vector<std::pair<std::string, int>> info;

    if (!inputFile.is_open())
        std::cout << "Unable to open file." << std::endl;
    else
    {
        std::string line;
        std::string name;
        int score;
        while (std::getline(inputFile, line))
        {
            std::stringstream ss(line);

            std::getline(ss, name, ',');
            ss >> score;

            std::pair<std::string, int> playerData(name, score);
            info.push_back(playerData);
        }
    }

    inputFile.close();
    return info;
}

// Task 1
void printAll(std::vector<std::pair<std::string, int>> tempInfo)
{
    std::string tempName, printName;

    for (int i = 0; i < tempInfo.size(); i++)
    {
        printName.clear();
        tempName = tempInfo[i].first;

        for (int i = 0; i < tempName.size(); i++)
        {
            if (tempName[i] == 'a' || tempName[i] == 'A' || tempName[i] == 'e' || tempName[i] == 'E' || tempName[i] == 'i' || tempName[i] == 'I' || tempName[i] == 'o' || tempName[i] == 'O' || tempName[i] == 'u' || tempName[i] == 'U')
                continue;
            else
            {
                printName.push_back(tempName[i]);
            }
        }
        printName[0] = toupper(printName[0]);
        std::cout << printName << std::endl;
    }
}

// Task 2
void topFive(std::vector<std::pair<std::string, int>> tempInfo)
{
    std::stable_sort(tempInfo.begin(), tempInfo.end(), scoreComparator);

    for (int i = 0; i < 5; i++)
    {
        std::cout << tempInfo[i].first << " " << tempInfo[i].second << std::endl;
    }
}

// Task 3
void alphabeticalOrder(std::vector<std::pair<std::string, int>> tempInfo)
{
    std::stable_sort(tempInfo.begin(), tempInfo.end(), nameComparator);
    for (int i = 0; i < tempInfo.size(); i++)
    {
        std::cout << tempInfo[i].first << std::endl;
    }
}

// Task 4
void reversePrint(std::vector<std::pair<std::string, int>> &tempInfo)
{
    std::reverse(tempInfo.begin(), tempInfo.end());
    for (int i = 0; i < tempInfo.size(); i++)
    {
        std::cout << tempInfo[i].first << std::endl;
    }
}

// Task 5
void greaterThan(std::vector<std::pair<std::string, int>> tempInfo, int x)
{
    int count = 0;
    for (int i = 0; i < tempInfo.size(); i++)
    {
        if (tempInfo[i].second > x)
            count++;
    }
    std::cout << "Number of players with a score greater than " << x << ": " << count << std::endl;
}

// Task 6
void sameScore(std::vector<std::pair<std::string, int>> tempInfo, int x)
{
    int count = 0;
    for (int i = 0; i < tempInfo.size(); i++)
    {
        if (tempInfo[i].second == x)
            count++;
    }
    std::cout << "Number of players with a score equal to " << x << ": " << count << std::endl;
}

// Task 7
void objectCompare(std::vector<std::pair<std::string, int>> tempInfo)
{
    std::vector<std::pair<std::string, int>> info_2;
    info_2 = tempInfo;

    bool isEqual = std::equal(tempInfo.begin(), tempInfo.end(), info_2.begin());

    if (isEqual)
        std::cout << "They contain the same values." << std::endl;
    else
        std::cout << "They do not contain the same values." << std::endl;
}

// Task 8
void avgScore(std::vector<std::pair<std::string, int>> tempInfo)
{
    float sum = std::accumulate(tempInfo.begin(), tempInfo.end(), 0, [](int currSum, std::pair<std::string, int> p)
                                { return currSum + p.second; });
    float avg = sum / tempInfo.size();
    std::cout << "Average score: " << avg << std::endl;
}

int main()
{
    std::vector<std::pair<std::string, int>> info;
    info = readFile("player.txt");

    printAll(info);
    topFive(info);
    alphabeticalOrder(info);
    reversePrint(info);
    greaterThan(info, 9000);
    sameScore(info, 9800);
    objectCompare(info);
    avgScore(info);

    return 0;
}
#include <iostream>

int main(){

    std::string questions[] = {"1. sino ang pogi?: ",
                               "2. sino ang pangit?: ;",
                               "3. sino ang lover boy?:; ",
                               "4. sino ang matangkad?: ",
                               "5. sino ang magandang sa school ?: "};
    
    std::string options[][4]   = {{"A. will", "B.chito", "C.alexis","D.galera"},
                              {"A. chito", "B.quiliboy", "C.diddy","D.will"},
                              {"A. will", "B.chito", "C.alexis","D.vinco"},
                              {"A. will", "B.chito", "C.alexis","D.galera"},
                               {"A. jen", "B.dhen", "C.anna","D.rizza"},};

    char anserkey[] = {'C','B','B','D','C'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        std::cout << "***********************\n ";
        std::cout << questions[i] << '\n';
        std::cout << "***********************\n ";
        
        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
           std::cout << options[i][j] << '\n';
        }
         do
         {
           std::cout << "enter your answer only (A-D): \n";
           std::cin >> guess;
           guess = toupper(guess);
         } while (guess< 'A' || guess >'D');

        if (guess == anserkey[i])
        {
            std::cout << "CORRECT \n";
            score++;

        }
        else {
            std::cout << "YOU ARE WRONG" ;
              std::cout << "answer : " << anserkey[i] ;

        }
        
    }
    std::cout << "**********************\n ";
    std::cout << "*       results       *\n";
    std::cout << "**********************\n ";
    std::cout << "CORRECT GUESSES : " << score <<'\n';
    std::cout << "num of questions : " << size << '\n';
    std::cout << "SCORE : " <<( score/(double)size)*100 << "% \n";

                              



    return 0;
}
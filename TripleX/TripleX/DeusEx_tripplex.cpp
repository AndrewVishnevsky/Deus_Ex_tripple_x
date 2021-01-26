#include <iostream>
#include <ctime>

using namespace std;

void Logo()
{
	cout << R"(              
(                                                        
          @///                                                     
          @//////&                                                 
          ((((//////%                                              
          ((((/////////               @@                           
         *(((((//////////&        &&@                              
         @((/@&&#//////////&   ./&@                                
         @(/&& @@@@&&////////&/&%                                  
         @/&&      @@@&&///////&                                   
         (%&           @&&&&////%                                  
         /%             @/&&&&////#                                
        *%             @//&  &&%///@                               
                      &//&     &&%//&                              
                     %//&       .&%//@                             
                    &///,         &%//&                            
                   &///&    %*%    &%//&                           
                  &///&   (&#*#%&   &%//(                          
                 .////&    @@@@@     &%/%                          
                 &////(              &&%/@                         
                /@@@@@@@@@@@@@@@@@@@@@&%#(@@@@&&%%/                
           ,,,***/(//((//((((###%%##%%%@%(@                        
    #&&(((((((((((((((((((((((((((((((((((@ )" << "\n\n";

	cout << "* Hello JC. It's your test environment for increase your hacking level." << endl;
	cout << "* You must to enter the correct codes to continue your test..." << endl;
}

void EndGame()
{

	system("CLS");
	cout << "\n**********Nice work JC. Welcome to Majesty 12**********\n";

	cout << R"(	                                        //////                                      
                                    *******              /////                  
                  #,%               *******             //////*                 
                #//////#             ,,,,,             %******#                 
                  *******                 ,/*          ,******                  
                    ***,#  #*        #*******         #  .*,#                   
                         ,//**#         *,%          #*////*(                   
                       %*****   /     ///(#*//         *****#                   
                              %//*    ********     #//%                         
       /////*  ///        *********   ********    #*/////**,                    
        #****  **#   /      ,***,,,       ,       *********                     
                   /*/***          /((((*    #(//   /***,,#                     
                   *****(  ////////////////////////#                            
                          //////////////////////////////                        
                      #/////////////////////////////////#                       
                     **///&%%%%%%%%%@@%%%%%%///////*                            
                     #(%@@%%%%@@@@@@@@@@@%####%/////////*/                      
                    %%##@@%%%%%%%%@%%%%%@&#######*//*******                     
                  ####@##@%@@@@@@@%%%%%%%#@@@###@@#********                     
                 (##@##@##@#%%%%@%%%%@%##@@@@@######*******%                    
                 #@@######@@%%%@@@%%%%%@%@@@@@@#####*******/    (%              
                ##@##@#@@@@@@@@@%%%%@@%%%@%#@@@%####(*****    ////////*         
                 @@#@@#@@@@@@%%%@@@@@@@%%%@%###@###((***/   *************       
                 (@@@@##@%%%@@%%@@@@@@@@@%@%%#%####(****%   ,,********,,/       
                  (@@@@@@@&&&@@@@@@@@@@@%%@%%#@###(,****,,%                     
                   (%%#%@%@@@@&&&@@@@&&%@%%%@####(,,,,,,,,,,,,*                 
                     /@@#%&@@@@@@@@@@@@%%%@%###(,,,,,,%,                        
                       (/(@%%@%%@@@@@@@@@@%#((                                  
                           @(&((######((,(                  )" << "\n\n";
}

void PrintProduction(int Difficulty)
{

cout << "\n* Level difficulty= "<< Difficulty  << endl;
}

bool GamePlay(int Difficulty)
{
	PrintProduction(Difficulty);

	
	int CodeA = rand() % Difficulty + Difficulty;
	int	CodeB = rand() % Difficulty + Difficulty;
	int CodeC = rand() % Difficulty + Difficulty;
	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;

	int GuessA{ 0 }, GuessB{ 0 }, GuessC{ 0 };


	cout << "* There are 3 numbers in the code" << endl;
	cout << "* Sum of secret numbers is " << CodeSum << endl;
	cout << "* Multiply of all secret numbers is " << CodeProduct << endl << endl;

	cout << "\n* Enter a 3 pass codes:";
	cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == GuessProduct)
	{
		cout << "\nWell done! You achieved to a "<< Difficulty<<" Level\n";
		return true;
	}
	else
	{
		cout << "\nJS! THEY CAN FIND YOU! Try carefully!\n";
		return false;
	}

	//cout << "Your answers: " << GuessA << " " << GuessB << " " << GuessC << endl;
	//cout << "* Sum of guess secret numbers is " << GuessSum << endl;
	//cout << "* Multiply of all guess secret numbers is " << GuessProduct << endl << endl;

	
}

int main()
{
	srand(time(NULL));
	int LevelDifficulty{ 1 };
	int const MaxDifficulty{ 5 };
	Logo();
	
	while (LevelDifficulty<=MaxDifficulty)
	{
		bool bLevelComplete= GamePlay(LevelDifficulty);
		
		cin.clear();
		cin.ignore();

		if (bLevelComplete)
		{
			++LevelDifficulty;
		}

		
	}
	EndGame();

                    
	return 0;
}
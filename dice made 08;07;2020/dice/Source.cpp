#include<iostream>
#include<ctime>
#include"windows.h"
#include<string>

using namespace std;
string player;
int scoreUser = 0;
int scorePC = 0;
int first = 1;
int diceUserSecond = 0;
int diceUserFirst = 0;
int dicePCFirst = 0;
int dicePCSecond = 0;
int sumaUser = 0;
int sumaPC = 0;
int number = 0;
void dice1() {
    cout << R"(    
                        =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                  :########=                   @%                          
                        @=                +#############                 @%                          
                        @=               %###############.               @%                          
                        @=              -################%               @%                          
                        @=              -################%               @%                          
                        @=               %###############.               @%                          
                        @=                +#############                 @%                          
                        @=                  :########=                   @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @#################################################%                           
                                                                                                     
                                                                                                     
                                                                                                     
                                                                    )";
}
void dice2() {
    cout << R"(                                                                                 
                       =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=            .-.                   .-.          @%                          
                        @=        :##+:-:=##-           .##=:-:=##.      @%                          
                        @=       #@        .#%         =#.       -#+     @%                          
                        @=      =#           #*       -#-         :#.    @%                          
                        @=      %@           #+       :#.         -#-    @%                          
                        @=      .#*         =#         @@         #%     @%                          
                        @=        @#*     +#%           +#%.   -%#*      @%                          
                        @=          -=@#@+.                *=%=:         @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @#################################################%                            
                                                                                                     
                                                                                                     
                                                                                                     
                                                                    )";
}
void dice3() {
    cout << R"(                                                                                 
                       =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=              .                                @%                          
                        @=         .@#%*:*%##.          +##=++%##-       @%                          
                        @=        =#.       .#%       :#+        @#      @%                          
                        @=       :#.          #*     .#:          %@     @%                          
                        @=       =#           @%     :#           *#     @%                          
                        @=       -#:         -#:      #+          #%     @%                          
                        @=        :#=       +#:       .#@       -#%      @%                          
                        @=          :###@###*           -@##@###=        @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                     *%##@+                    @%                          
                        @=                  -##-    .%#*                 @%                          
                        @=                 *#-         #%                @%                          
                        @=                 #+          -#-               @%                          
                        @=                 #+          -#-               @%                          
                        @=                 *#-         #%                @%                          
                        @=                  -##-    .%#*                 @%                          
                        @=                     :%##@+                    @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @#################################################%                             
                                                                                                     
                                                                                                     
                                                                                                     
                                                                    )";
}
void dice4() {
    cout << R"(                                                                                 
                        =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=         .%#####=.             :%###%:         @%                          
                        @=       -#%       @#.         @#:     :##       @%                          
                        @=      .#:         *#.       #+         +#      @%                          
                        @=      *#           #:      :#           #*     @%                          
                        @=       #%         %#        #+         *#.     @%                          
                        @=        =#=.   .%#=         .##.     .@#.      @%                          
                        @=           :==+:               +#####+         @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=         +#####@-             .+%@%+.          @%                          
                        @=       @#-      =#:         ##*     +#%        @%                          
                        @=      @@         -#:      .#*         %#       @%                          
                        @=      #*          #+      +#          .#:      @%                          
                        @=      =#         +#.      .#*         %#       @%                          
                        @=       :#@-    *#@          @#*    .=#%        @%                          
                        @=          :=%%+.              .+%%=*           @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @#################################################%                               
                                                                                                     
                                                                                                     
                                                                                                     
                                                                    )";
}
void dice5() {
	cout << R"(
                        =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=         .%#####=.             :%###%:         @%                          
                        @=       -#%       @#.         @#:     :##       @%                          
                        @=      .#:         *#.       #+         +#      @%                          
                        @=      *#           #:      :#           #*     @%                          
                        @=       #%         %#        #+         *#.     @%                          
                        @=        =#=.   .%#=         .##.     .@#.      @%                          
                        @=           :==+:     +####*    +#####+         @%                          
                        @=                   %#.    *#*                  @%                          
                        @=                  .#-      +#                  @%                          
                        @=                   %#.    *#*                  @%                          
                        @=         +#####@-    =####*   .+%@%+.          @%                          
                        @=       @#-      =#:         ##*     +#%        @%                          
                        @=      @@         -#:      .#*         %#       @%                          
                        @=      #*          #+      +#          .#:      @%                          
                        @=      =#         +#.      .#*         %#       @%                          
                        @=       :#@-    *#@          @#*    .=#%        @%                          
                        @=          :=%%+.              .+%%=*           @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @#################################################%  )";
}
void dice6() {
	cout << R"(                                                                                 
                        =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=                                               @%                          
                        @=         *##==##*             .@#####-         @%                          
                        @=        #@      @@           =#.     #@        @%                          
                        @=       :#.      -#-          #:      .#:       @%                          
                        @=        #+      =#           #%      +#        @%                          
                        @=         ##*..+#@             @#+..*##.        @%                          
                        @=           .::.                  ::.           @%                          
                        @=           *==*                -=@@+.          @%                          
                        @=        .#@.  .@#.           *#+   .@#.        @%                          
                        @=       .#*      +#          -#-      =#        @%                          
                        @=       -#.      -#-         :#-      =#        @%                          
                        @=        @#      #%           +#+    @#.        @%                          
                        @=         :##@@##-              -%@@+.          @%                          
                        @=                                               @%                          
                        @=          *@##@:               .=##%:          @%                          
                        @=        *#*    +#-           -#%    *#=        @%                          
                        @=       -#-      *#           #*      .#:       @%                          
                        @=       .#:      +#           #+      .#:       @%                          
                        @=        *#+    %#-           .##-  .=#*        @%                          
                        @=          -%##=.                :==*.          @%                          
                        @=                                               @%                          
                        @#################################################%                          
                                                                                                     
                                                                                                     
                                                                                                     
                                                                    )";
}
void loose() {
    system("color 4");
    cout << R"(
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                              ++                                   ++            
                  ++               +++            ++  +++    ++    ++   ++             ++            
                  ++        ++ +++++ +++++  ++    +++++ +++++++++ +++++++ ++           ++            
                  ++        ++++ ++   ++++  ++    ++++   ++++  ++ ++++++++++           ++            
                  ++         +++  +++++ ++++++    ++ +++++ ++++++ ++++ +++++           ++            
                  ++       ++++                                                        ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  )"
        << endl;
}
void win() {
    system("color 2");
    cout << R"(
                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                          #                        #@            
                  #@           @       @@@  @   @    @      @ @  @@#@                  #@            
                  #@            #  # #    # #   #    @@ ## @@ #  #  @@                 #@            
                  #@             @#  @@  @@ #   #     #@  @#  #  #  @@                 #@            
                  #@             #                                                     #@            
                  #@           @#                                                      #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  ######################################################################@   )"
        << endl;
}
void randomDice() {
    for (int i = 0; i < 3; i++) {
        srand(time(NULL));
        dice1();
        if (i == 2 && number == 1) {
            Sleep(1100);
            system("cls");
            cout<<player << " score " << number;
        }

        Sleep(100);
        system("cls");
        dice2();
        if (i == 2 && number == 2) {
            Sleep(1100);
            system("cls");
            cout << player << " score " << number;
            Sleep(100);
        }

        Sleep(100);
        system("cls");
        dice3();
        if (i == 2 && number == 3) {
            Sleep(1100);

            system("cls");
            cout << player << " score " << number;
        }

        Sleep(100);
        system("cls");
        dice4();
        if (i == 2 && number == 4) {
            Sleep(1100);
            system("cls");
            cout << player << " score " << number;
            Sleep(100);
        }

            Sleep(100);
            system("cls");
            dice5();
            if (i == 2 && number == 5) {
                Sleep(1100);
                system("cls");
                cout << player << " score " << number;
                Sleep(100);
            }

                Sleep(100);
                system("cls");
                dice6();
                if (i == 2 && number == 6) {
                    Sleep(1100);
                    system("cls");
                    cout << player << " score " << number;
                    Sleep(100);
                }
                    Sleep(100);
                    system("cls");
                }
            }

float random() {
    srand(time(NULL));
    if (first == 1) {
        diceUserFirst = rand() % 6 + 1;
        number = diceUserFirst;
        player = "your";
        randomDice();
        diceUserSecond = rand() % 6 + 1;
        number = diceUserSecond;
        player = "your";
        randomDice();
        dicePCFirst = rand() % 6 + 1;
        number = dicePCFirst;
        player = "BOT ";
        randomDice();
        dicePCSecond = rand() % 6 + 1;
        number = dicePCSecond;
        player = "BOT ";
        randomDice();
    }
    else {
        dicePCFirst = rand() % 6 + 1;
        number = dicePCFirst;
        player = "BOT ";
        randomDice();
        dicePCSecond = rand() % 6 + 1;
        number = dicePCSecond;
        player = "BOT ";
        randomDice();
        diceUserFirst = rand() % 6 + 1;
        number = diceUserFirst;
        player = "your";
        randomDice();
        diceUserSecond = rand() % 6 + 1;
        number = diceUserSecond;
        player = "your";
        randomDice();
    }
    return 0;
}
        
float firstPlayer() {
    srand(time(NULL));
    random();
    

	sumaPC = dicePCFirst + dicePCSecond;
	sumaUser = diceUserFirst + diceUserSecond;
	if (sumaUser > sumaPC) {
		first = 1;
        Sleep(1000);
        cout<<"you play first";
	}
	else if (sumaPC > sumaUser) {
		first = 0;
        Sleep(1000);
        cout << "you play second";
	}
    return 0;
}


float dice() {
	srand(time(NULL));
	
	
		for (int j = 0; j < 5; j++) {
            random();
			
			sumaPC = dicePCFirst + dicePCSecond;
			sumaUser = diceUserFirst + diceUserSecond;
			if (sumaUser > sumaPC) {
                win();

			}
			else if(sumaPC > sumaUser) {
                loose();
			}
			




		}

	
	
	return 0;

}
int main() {
    firstPlayer();
    dice();
}




